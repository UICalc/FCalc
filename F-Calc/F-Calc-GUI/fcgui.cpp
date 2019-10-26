#include "fcgui.h"
#include "ui_fcgui.h"
//#include<iostream>
//#include<cmath>//未使用
//#include<cstdio>
//#include<windows.h>
//#include<cstdlib>
#include<ctime>
//#include<conio.h>
#include<QFile>
#include<QString>
#include<QDebug>
//#include<cstring>
#include<QProgressBar>

FCGUI::FCGUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FCGUI)
{
    ui->setupUi(this);
}

FCGUI::~FCGUI()
{
    delete ui;
}

static double k;//空气阻力系数 单位N*s^2/m^2
static double m;//物体质量 单位kg
//double d;//未使用，抛射角度
static double g = 9.8;//重力加速度 单位m/s^2
static double v0;//初速
static double vt1;
static double totime;//模拟时间
static double t;//时间精度
static double ft;//微分用f
static double gt;//微分用G
static double vt;//微分用v
static double ds;//“瞬时”位移
static double w;//微分用功
static double wtot = 0;//总功
static double it;
static double i = 0;//总冲
static double a;//微分用加速度
static double ftot;//合力
static double s;//
static double d = 0;//总位移
static double tout;
static double etime = 0;
static double sst;

void calc()
{
    ft = vt * vt * k;
    if(vt > 0)
    {
        ftot = gt + ft;
    }
    else
    {
        ftot = gt - ft;
    }
    a = ftot / m;//计算加速度
    vt1 = vt - a * t / 1000;//计算末速度
    ds = (vt + vt1) * t / 2000;
    d += ds;//积累总位移
    it = ftot * t / 1000;//计算冲量
    i += it;//积累总冲
    w = ds * ftot;//计算做功
    wtot += w;//积累总功
    vt = vt1;//末速度等于下一时刻初速度
}

void FCGUI::on_start_clicked()
{
    ui->label_8->setText("Calculating...");
    clock_t start,end;
    k = ui->airres->text().toDouble();
    v0 = ui->startv->text().toDouble();
    m = ui->mass->text().toDouble();
    t = ui->timejd->text().toDouble();
    totime = ui->tott->text().toDouble();
    tout = ui->lineEdit->text().toDouble();
    start = clock();
    gt = m * g;//计算G
    vt = v0;//初始化v
    QFile file("FCalc-GUI-out.csv");
    QTextStream stream(&file);
    if (file.open(QIODevice::ReadWrite | QIODevice::Text))
    {
        stream << "空气阻力系数k = f / v^2 = " << k << ", 初速(m/s)(向上为正) = " << v0 << ", 物体质量(kg) = " << m << ", 计算时间精度(ms) = " << t << ", 总计算时间(ms) = " << totime << "\n时间(ms),速度(m/s),加速度(m/s^2),位移(m),总位移(m),冲量(Ns),做功(j)\n";
        for(s = 0; s <= totime; s += t)
        {
            calc();
            ui->progressBar->setValue((int)ceil(s / totime * 100));
            etime += t;
            if(etime > tout)
            {
                etime -= tout;
                stream << s << ',' << vt << ',' << a << ',' << ds << ',' << d << ',' << i << ',' << w << endl;
            }
        }
        end=clock();
        sst = (double)(end-start)/CLOCKS_PER_SEC;
        stream << endl << "用时" << sst * 1000 << "ms" << endl << "计算完毕,输出至F-Calc.csv,请按任意键退出..." << endl;
        ui->label_8->setText("Done. time cost:" + QString::number(sst * 1000) + "ms");
    }
    vt = v0;
    etime = 0;
    a = 0;
    vt1 = 0;
    d = 0;
    ds = 0;
    w = 0;
    wtot = 0;
    bool f = false;
    if(ui->checkBox->isChecked())
    {
        QFile file0("fit.txt");
        QTextStream st(&file0);
        if (file0.open(QIODevice::ReadWrite | QIODevice::Text))
        {
            ui->label_8->setText("Exporting fitting data...");
            st << "FindFit[{";
            for(s = 0; s <= totime; s += t)
            {
                calc();
                ui->progressBar->setValue((int)ceil(s / totime * 100));
                etime += t;
                if(etime > tout * 10)
                {
                    etime -= tout * 10;
                    if(f) st << ',';
                    else f = 1;
                    st << '{' <<  s << ',' << vt << "}";
                }
            }
            st << "}, {a + k/(-b + x), {b < 1}}, {a, k, b}, x];";
            end = clock();
            ui->label_8->setText("Done. time cost:" + QString::number(sst * 1000) + "ms");
        }
    }
}
