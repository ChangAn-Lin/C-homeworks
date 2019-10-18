#include<iostream>
using namespace std;
int main()
{
	int *ptr,a=0,b=0;
	ptr = new int[20];
	cout << "请输入数值：";
	for (int i = 0; i < 20; i++)
		cin >> ptr[i];
	for (int i = 0; i < 20; i++)
	{
		if (ptr[i] < 0)
			a++;
		if (ptr[i] > 0)
			b++;
	}
	cout << "数组中负数的个数为" << a;
	cout << "数组中正数的个数为" << b;
	getchar();
	getchar();
	return 0;

}