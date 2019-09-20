#include<math.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int numsolve()							//求一元二次方程的解
{
	float a = 0, b = 0, c = 0, x1 = 0, x2 = 0,s,i;
	cout << "请输入待求方程系数：";
	cin >> a >> b >> c;
	s = b * b - 4 * a * c;
	i = sqrt(s);
	if (s < 0)
	{
		cout << "此方程无解"<<endl;


	}
	else if (s = 0)
	{
		x1 = ( - b) / (2 * a);
		cout << "方程有两个相等的根" << x1;
	}
	else
	{
		x1 = (i - b) / (2 * a);
		x2 = (-i - b) / (2 * a);
		cout << "此方程有两个根" << x1 <<" "<< x2<<endl;
	}
	return 0;
}
int trainglespace()						//求三角形面积
{
	float a, b, c, d,s;
	cout << "请输入所求三角形的三边长度" << endl;
	cin >> a >> b >> c;
	d = (a + b + c) / 2;
	s = sqrt(d*(d - a)*(d - b)*(d - c));
	cout <<"三角形面积为："<< s<<endl;
	return 0;
}

int date()							//输入日期求该日为这一年第几天，第几周
{
	int year, month, day, days = 0,j=0;
	int flag;
	int a[7] = { 1,3,5,7,8,10,12 };
	cout << "请输入按顺序输入要查询的年份、月份和日期：" << endl;
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
	cout << "这是今年第" << days << "天"<<endl;
	cout << "这是今年第" << days/7 +1<< "周" << endl;
	getchar();
	return 0;
}
int main()							//主函数。。
{
    numsolve();
	trainglespace();
	date();
	getchar();
	return 0;
}
