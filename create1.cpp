#include<iostream>
using namespace std;
inline int add(int x, int y)
{
	return (x)+(y);
}
int main()
{
	int x, y, sum;
	cout << "��ֱ�����x��y��" << endl;
	cin >> x >> y;
	sum = add(x, y);
	cout << sum;
	getchar();
	getchar();
	return 0;
}