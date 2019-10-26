#include<iostream>
//#include<cmath>//δʹ�� 
#include<cstdio>
#include<windows.h>
#include<cstdlib>
#include<ctime>
#include<conio.h>

using namespace std;

clock_t start,end;

double k;//��������ϵ�� ��λN*s^2/m^2 
double m;//�������� ��λkg 
//double d;//δʹ�ã�����Ƕ� 
double g = 9.8;//�������ٶ� ��λm/s^2 
double v0;//����
double vt1;
double totime;//ģ��ʱ��
double t;//ʱ�侫�� 
double ft;//΢����f
double gt;//΢����G
double vt;//΢����v
double ds;//��˲ʱ��λ�� 
double w;//΢���ù�
double wtot = 0;//�ܹ�
double it;
double i = 0;//�ܳ�
double a;//΢���ü��ٶ� 
double ftot;//����
double s;// 
double d = 0;//��λ�� 
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
	a = ftot / m;//������ٶ� 
	vt1 = vt - a * t / 1000;//����ĩ�ٶ� 
	ds = (vt + vt1) * t / 2000;
	d += ds;//������λ�� 
	it = ftot * t / 1000;//�������
	i += it;//�����ܳ� 
	w = ds * ftot;//�������� 
	wtot += w;//�����ܹ� 
	vt = vt1;//ĩ�ٶȵ�����һʱ�̳��ٶ� 
}

void print()
{
	printf("%f,%f,%f,%f,%f,%f,%f\n", s, vt, a, ds, d, i, w);
} 

int main()
{
//	freopen("input.txt", "r", stdin);
	cout << "Powered by : UICalculus(2650031369). Thanks:��ķ������ͷ��" << endl;
	cout << "��������ϵ��k = f / v^2" << endl;
	cin >> k;
	cout << "����(m/s)(����Ϊ��)" << endl;
	cin >> v0;
	cout << "��������(kg)" << endl;
	cin >> m;
	cout << "����ʱ�侫��(ms)" << endl;
	cin >> t;
	cout << "�ܼ���ʱ��(ms)" << endl;
	cin >> totime;
	cout << "���ʱ�侫��(ms)" << endl;
	cin >> tout; 
	cout << "���������ܻ������Һ;����йء�" << endl;
	start = clock();
	gt = m * g;//����G 
	vt = v0;//��ʼ��v 
	freopen("F-Calc.csv", "w", stdout);
	printf("��������ϵ��k = f / v^2 = %lf, ����(m/s)(����Ϊ��) = %lf, ��������(kg) = %lf, ����ʱ�侫��(ms) = %lf, �ܼ���ʱ��(ms) = %lf\nʱ��(ms),�ٶ�(m/s),���ٶ�(m/s^2),λ��(m),��λ��(m),����(Ns),����(j)\n", k, v0, m, t, totime);
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
	cout << endl << "��ʱ" << st * 1000 << "ms" << endl << "�������,�����F-Calc.csv,�밴������˳�..." << endl;
	getch();
	return 0;
}
