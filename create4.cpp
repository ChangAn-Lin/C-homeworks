#include<iostream>
using namespace std;
double checkAgeScore(int age, double score)
{
	if (age < 16 || age>25) throw age;
	if (score < 0 || score>5) throw score;
	return score;
}
int main()
{
	char a[10];
	cout << "请输入学生姓名：";
	cin >> a;
	int age = 0;
	double score = 0;
	cout << "请输入学生成绩：";
	cin >> score;
	cout << "请输入学生年龄：";
	cin >> age;
	
	try
	{
		checkAgeScore(age, score);
	}
	catch (int)
	{
		cout << "Wrong age!" << endl;
		cout << "please put in the right age:";
		cin >> age;

	}
	try
	{
		checkAgeScore(age, score);
	}
	catch (double)
	{
		cout << "Wrong score!" << endl;
		cout << "please put in the right score:";
		cin >> score;

	}
	cout << "calculate finished." << endl;
	cout << a << " " << age << " " << 100 * (score / 5) << endl;
	getchar();
	getchar();
	return 0;


}