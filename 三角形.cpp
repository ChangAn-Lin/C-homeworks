#include<iostream>
#include<math.h>
using namespace std;

class tra
{
private:
	float length_1;
	float length_2;
	float length_3;
public:
	void settra(float, float, float);
	void justfi();
	void perimeter();
	void square();
	void size();
};
void tra::settra(float a, float b, float c)
{
	length_1 = a;
	length_2 = b;
	length_3 = c;
	cout << "三角形三边长：" << a << " " << b << " " << c << endl;
}
void tra::justfi()
{
	if (length_1 + length_2 > length_3)
		cout << "可以构成三角形" << endl;
	else
	{
		cout << "不可以构成三角形" << endl;
		exit(0);
	}
}
void tra::perimeter()
{
	cout << "三角形周长为：" << length_1 + length_2 + length_3 << endl;
}
void tra::square()
{
	double p;
	p = (length_1 + length_2 + length_3) / 2;
	cout << "三角形面积为：" << sqrt(p*(p - length_1)*(p - length_2)*(p - length_3));
}
void tra::size()
{
	double a, b, c,d,e,f;
	a = length_1;
	b = length_2;
	c = length_3;
	d = a * a + b * b - c * c;
	e = a * a + c * c - b * b;
	f = b * b + c * c - a * a;
	if (a > 0 && b > 0 && c > 0)
		cout << "这是锐角三角形" << endl;
	if (a < 0 || b < 0 || c < 0)
		cout << "这是钝角三角形" << endl;
	if ((a = 0) || (b = 0) || (c = 0))
		cout << "这是直角三角形" << endl;
	
}
int main()
{
	float a, b, c;
	cout << "" << endl;
	cin >> a >> b >> c;
	tra trangle;
	trangle.settra(a, b, c);
	trangle.justfi();
	trangle.perimeter();
	trangle.square();
	trangle.size();
	getchar();
	getchar();

}