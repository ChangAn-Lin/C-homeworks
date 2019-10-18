#include<iostream>
using namespace std;
inline int add(int x, int y)
{
	return (x)+(y);
}
int main()
{
	int x, y, sum;
	cout << "请分别输入x和y：" << endl;
	cin >> x >> y;
	sum = add(x, y);
	cout << sum;
	getchar();
	getchar();
	return 0;
}