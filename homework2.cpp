#include<math.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int numsolve()
{
	float a = 0, b = 0, c = 0, x1 = 0, x2 = 0,s,i;
	cout << "��������󷽳�ϵ����";
	cin >> a >> b >> c;
	s = b * b - 4 * a * c;
	i = sqrt(s);
	if (s < 0)
	{
		cout << "�޽�"<<endl;


	}
	else if (s = 0)
	{
		x1 = ( - b) / (2 * a);
		cout << "������ȵĸ�" << x1;
	}
	else
	{
		x1 = (i - b) / (2 * a);
		x2 = (-i - b) / (2 * a);
		cout << "������" << x1 <<" "<< x2<<endl;
	}
	return 0;
}
int trainglespace()
{
	float a, b, c, d,s;
	cout << "���������������ε����߳���" << endl;
	cin >> a >> b >> c;
	d = (a + b + c) / 2;
	s = sqrt(d*(d - a)*(d - b)*(d - c));
	cout << s<<endl;
	return 0;
}

int date()
{
	int year, month, day, days = 0,j=0;
	int flag;
	int a[7] = { 1,3,5,7,8,10,12 };
	cout << "�����밴˳������Ҫ��ѯ����ݡ��·ݺ����ڣ�" << endl;
	cin >>year >> month >> day;
	for (int i = 1; i <month; i++)
	{
		if (i == 2)
		{
			if (year % 4 == 0)
				days += 29;
			else
				days += 28;
		}
		else if (i == a[j])
		{
			days += 31;
			j++;
		}
		else
			days += 30;
	}
	
	days = days + day;
	cout << "���ǽ����" << days << "��"<<endl;
	cout << "���ǽ����" << days/7 +1<< "��" << endl;
	getchar();
	return 0;
}
int main()
{
    numsolve();
	trainglespace();
	date();
	getchar();
	return 0;
}