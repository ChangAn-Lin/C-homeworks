#include<iostream>
using namespace std;
inline double square(float r)
{
	return r * r*3.14;
}
inline double length(float r)
{
	return 2 * 3.14*r;
}
int main()
{
	float r;
	cout << "������Բ�İ뾶��r=";
	cin >> r;
	cout << endl;
	cout << "Բ���ܳ�Ϊ" << length(r)<<endl;
	cout << "Բ�İ뾶Ϊ" << square(r)<<endl;
	getchar();
	getchar();
	return 0;
}