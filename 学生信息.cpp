#include<iostream>
#include<string>
#define N 100
using namespace std;
class student
{
private:
	string name;
	int number[10];
	bool sex;
	int birthyear;
	int birthmonth;
	int birthday;
	float height;
	float weight;
	float score;
	string home;
public:
	void inti();
	void display();
	void change();
};
void student::inti()
{
	cout << "请输入学生姓名：" << endl;
	cin >> name;
	cout << "请输入学生学号:" << endl;
	cin >> number[10];
	cout << "请输入学生性别：（男性请输入1，女性输入0）" << endl;
	cin >> sex;
	cout << "请输入学生出生年月日" << endl;
	cin >> birthyear >> birthmonth >> birthday;
	cout << "请输入学生身高:" << endl;
	cin >> height;
	cout << "请输入学生体重：" << endl;
	cin >> weight;
	cout << "请输入学生高考成绩：" << endl;
	cin >> score;
	cout << "请输入学生家庭住址：" << endl;
	cin >> home;
}
void student::display()
{
	cout << "学生姓名:" << name<<endl;
	cout << "学生学号:" << number[10]<<endl;
	cout << "学生性别:" ;
	if (sex = 0)
		cout << "女" << endl;
	else
	{
		cout << "男" << endl;
	}
	cout << "学生出生年月日:" << birthyear<<birthmonth<<birthday<<endl;
	cout << "学生身高:" << height<<endl;
	cout << "学生体重:" << weight<<endl;
	cout << "学生成绩:" << score<<endl;
	cout << "学生家庭住址:" << home<<endl;
}
void student::change()
{
	int a;
	cout << "修改：" << endl;
	cout << "修改姓名请输入1，修改学号请输入2，修改性别请输入3，修改出生日期请输入4，修改学生身高请输入5，修改学生体重请输入6，修改学生成绩请输入7，修改学生家庭住址请输入8" << endl;
	cin >> a;
	switch (a)
	{
	case 1:
		cin >> name;
		break;
	case 2:
		cin >> number[10];
		break;
	case 3:
		cin >> sex;
		break;
	case 4:
		cin >> birthyear >> birthmonth >> birthday;
		break;
	case 5:
		cin >> height;
		break;
	case 6:
		cin >> weight;
		break;
	case 7:
		cin >> score;
		break;
	case 8:
		cin >> home;
	default:
		break;
	}
}
int main()
{
	student stu[N];
	int i;
	cout << "请输入学生数：";
	cin >> i;
	for (int n = 0; n < i; n++)
	{
		stu[n].inti();
	}
	for (int n = 0; n < i; n++)
	{
		stu[n].display();
	}
	cout << "请输入几个人信息出错";
	cin >> i;
	for (int n = 0; n < i; n++)
	{
		int m = 0;
		cout << "" << endl;
		cin >> m;
		stu[m].change();
		
	}
	for (int n = 0; n < i; n++)
	{
		stu[n].display();
	}
	getchar();
}
