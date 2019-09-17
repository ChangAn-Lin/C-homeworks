/*************************************************
** 源文件   : score.c
** 功能说明 : Function Definitions
** 创建版本 : V1.0
/**************************************************/

/*----------------头文件--------------*/
#define  _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include "SCORE.h"
#include<string.h>

/*----------------函数定义-------------*/

//1.1手动输入学生基本数据
void readData(SS stu[], int N)
{

	printf("请按照如下格式输入学生信息：学号,姓名,平时成绩,期末成绩\n");

	for (int i = 0; i < N; i++)
	{
		printf("第%d个学生:", i + 1);
		scanf("%s %s %f %f", &stu[i].number, &stu[i].name, &stu[i].dailyScore, &stu[i].finalScore);
		printf("\n");
	}

	printf("------成绩录入完毕!--------\n");

}

//1.2从文件里读取学生基本数据
SS* readDataFromFile(int *N)
{

	printf("\n\n------第一步: 从文件读取学生的成绩信息--------\n\n");

	SS *stu;// 开辟新空间,存取文件中的每个学生信息

	FILE *fp = NULL;
	int count = 0;
	int index = 0;

	fp = fopen("data.txt", "r");

	//1.获取学生数目
	if (fp != NULL)
	{
		fscanf(fp, "%d", &count);
		*N = count;
	}
	else
	{
		printf("failed to open the info file\n");
		getchar();
	}

	printf("学生数目为:%d\n", count);


	//2.给所有学生分配存储空间
	stu = (SS*)malloc(count * sizeof(SS));


	//3.读取每条学生的信息
	while ((!feof(fp)))
	{

		//读入文件数据到内存	
		fscanf(fp, "%s%s%f%f%f\n", (stu[index].number), (stu[index].name), &stu[index].dailyScore, &stu[index].finalScore，&stu[index].ex);

		//输出排序后的学生信息
		printf("* 学号：%s	姓名:%s		平时成绩：%4.2f分		期末成绩:%4.2f分\n", (stu[index].number), (stu[index].name), stu[index].dailyScore, stu[index].finalScore);

		index++;
	}

	getchar();

	fclose(fp);

	return stu;
}

//2.计算N个学生各自的总评成绩
void calcuScore(SS stu[], int N)
{


	printf("\n\n------第二步: 计算每个学生的总评成绩--------\n\n");

	for (int i = 0; i < N; i++)
	{

		stu[i].generalScore = 0.2*stu[i].dailyScore + 0.8*stu[i].finalScore;
		printf("* 学号：%s	姓名:%s		总成绩:%4.2f分\n", (stu[i].number), (stu[i].name), stu[i].generalScore);

	}

	getchar();
}


//3.根据总评成绩排名
int cmpBigtoSmall(const void *a, const void *b)
{

	SS *aa = (SS *)(a);
	SS *bb = (SS *)(b);



	if ((*aa).generalScore < (*bb).generalScore)  return 1;

	else if ((*aa).generalScore > (*bb).generalScore)  return -1;

	else
		return 0;

}

void sortScore(SS stu[], int N)
{

	qsort(&(stu[0]), N, sizeof(stu[0]), cmpBigtoSmall);

}

//4.按照一定的格式输出N个学生的信息
void printOut(SS stu[], int N)
{

	printf("\n------第三步: 根据总成绩输出学生排名信息!------\n\n");

	for (int i = 0; i < N; i++)
	{

		printf("第%d名信息 学号：%s	姓名:%s		总成绩:%4.2f分\n", i + 1, &(stu[i].number[0]), &(stu[i].name[0]), stu[i].generalScore);
	}

	getchar();

}


int calcuAverage(SS stu[], int N, float a)
{
	for (int i = 0; i < N; i++)
	{
		a += stu[i].generalScore;
	}
	a = a / N;
	printf("学生平均成绩为%4.2f\n", a);

	return a;
}

int calcuVariance(SS stu[], int N, float b)
{
	float a=0,c;
	for (int i = 0; i < N; i++)
	{
		a += (stu[i].generalScore - b)*(stu[i].generalScore - b);
	}
	c = a / N;
	printf("学生成绩方差为%4.2f\n", c);
	return (c);
}

void analysdata(SS stu[], int N)
{
	float a=0, b=0;
	a = stu[0].generalScore;
	b = stu[0].generalScore;
	for(int i=0;i<N;i++)
	{
		if (a >= stu[i].generalScore)
		{
			a = stu[i].generalScore;
		}
		if (b<= stu[i].generalScore)
		{
			b = stu[i].generalScore;
		}
	}
	printf("学生最低分为%4.2f,最高分%4.2f\n", a, b);
}

void infosearch(SS stu[])
{
	printf("请输入要查询的学生的学号：");
	char a[12];
	int flag = 0;
	scanf("%s", a);
	for (int i = 0; i < 6; i++)
	{
		if (strcmp(stu[i].number, a)==0)
		{
			printf("学号：%s	姓名 : %s		总成绩 : %4.2f分\n", (stu[i].number), (stu[i].name), (stu[i].generalScore));
			flag = 1;
		}
	}
	if (flag == 0)
		printf("nothing\n");
}