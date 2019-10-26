#include<iostream>
//#include<cmath>//未使用 
#include<cstdio>
#include<windows.h>
#include<cstdlib>
#include<ctime>
#include<conio.h>

using namespace std;

clock_t start,end;

double k;//空气阻力系数 单位N*s^2/m^2 
double m;//物体质量 单位kg 
//double d;//未使用，抛射角度 
double g = 9.8;//重力加速度 单位m/s^2 
double v0;//初速
double vt1;
double totime;//模拟时间
double t;//时间精度 
double ft;//微分用f
double gt;//微分用G
double vt;//微分用v
double ds;//“瞬时”位移 
double w;//微分用功
double wtot = 0;//总功
double it;
double i = 0;//总冲
double a;//微分用加速度 
double ftot;//合力
double s;// 
double d = 0;//总位移 
double tout;
double etime = 0;
double st;


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

void print()
{
	printf("%f,%f,%f,%f,%f,%f,%f\n", s, vt, a, ds, d, i, w);
} 

int main()
{
//	freopen("input.txt", "r", stdin);
	cout << "Powered by : UICalculus(2650031369). Thanks:吼姆拉的馒头卡" << endl;
	cout << "空气阻力系数k = f / v^2" << endl;
	cin >> k;
	cout << "初速(m/s)(向上为正)" << endl;
	cin >> v0;
	cout << "物体质量(kg)" << endl;
	cin >> m;
	cout << "计算时间精度(ms)" << endl;
	cin >> t;
	cout << "总计算时间(ms)" << endl;
	cin >> totime;
	cout << "输出时间精度(ms)" << endl;
	cin >> tout; 
	cout << "计算结果可能会有误差，且和精度有关。" << endl;
	start = clock();
	gt = m * g;//计算G 
	vt = v0;//初始化v 
	freopen("F-Calc.csv", "w", stdout);
	printf("空气阻力系数k = f / v^2 = %lf, 初速(m/s)(向上为正) = %lf, 物体质量(kg) = %lf, 计算时间精度(ms) = %lf, 总计算时间(ms) = %lf\n时间(ms),速度(m/s),加速度(m/s^2),位移(m),总位移(m),冲量(Ns),做功(j)\n", k, v0, m, t, totime);
	for(s = 0; s <= totime; s += t)
	{
		calc();
		etime += t;
		if(etime > tout)
		{
			etime -= tout;
			print();
		}
	}
	fclose(stdout);
	freopen("CON","w",stdout);
	end=clock();
	st = (double)(end-start)/CLOCKS_PER_SEC;
	cout << endl << "用时" << st * 1000 << "ms" << endl << "计算完毕,输出至F-Calc.csv,请按任意键退出..." << endl;
	getch();
	return 0;
}
