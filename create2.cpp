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
	cout << "请输入圆的半径：r=";
	cin >> r;
	cout << endl;
	cout << "圆的周长为" << length(r)<<endl;
	cout << "圆的半径为" << square(r)<<endl;
	getchar();
	getchar();
	return 0;
}