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
	cout << "������ѧ��������" << endl;
	cin >> name;
	cout << "������ѧ��ѧ��:" << endl;
	cin >> number[10];
	cout << "������ѧ���Ա𣺣�����������1��Ů������0��" << endl;
	cin >> sex;
	cout << "������ѧ������������" << endl;
	cin >> birthyear >> birthmonth >> birthday;
	cout << "������ѧ�����:" << endl;
	cin >> height;
	cout << "������ѧ�����أ�" << endl;
	cin >> weight;
	cout << "������ѧ���߿��ɼ���" << endl;
	cin >> score;
	cout << "������ѧ����ͥסַ��" << endl;
	cin >> home;
}
void student::display()
{
	cout << "ѧ������:" << name<<endl;
	cout << "ѧ��ѧ��:" << number[10]<<endl;
	cout << "ѧ���Ա�:" ;
	if (sex = 0)
		cout << "Ů" << endl;
	else
	{
		cout << "��" << endl;
	}
	cout << "ѧ������������:" << birthyear<<birthmonth<<birthday<<endl;
	cout << "ѧ�����:" << height<<endl;
	cout << "ѧ������:" << weight<<endl;
	cout << "ѧ���ɼ�:" << score<<endl;
	cout << "ѧ����ͥסַ:" << home<<endl;
}
void student::change()
{
	int a;
	cout << "�޸ģ�" << endl;
	cout << "�޸�����������1���޸�ѧ��������2���޸��Ա�������3���޸ĳ�������������4���޸�ѧ�����������5���޸�ѧ������������6���޸�ѧ���ɼ�������7���޸�ѧ����ͥסַ������8" << endl;
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
	cout << "������ѧ������";
	cin >> i;
	for (int n = 0; n < i; n++)
	{
		stu[n].inti();
	}
	for (int n = 0; n < i; n++)
	{
		stu[n].display();
	}
	cout << "�����뼸������Ϣ����";
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
