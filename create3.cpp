#include<iostream>
using namespace std;
int main()
{
	int *ptr,a=0,b=0;
	ptr = new int[20];
	cout << "��������ֵ��";
	for (int i = 0; i < 20; i++)
		cin >> ptr[i];
	for (int i = 0; i < 20; i++)
	{
		if (ptr[i] < 0)
			a++;
		if (ptr[i] > 0)
			b++;
	}
	cout << "�����и����ĸ���Ϊ" << a;
	cout << "�����������ĸ���Ϊ" << b;
	getchar();
	getchar();
	return 0;

}