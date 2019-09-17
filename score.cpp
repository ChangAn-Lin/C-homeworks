/*************************************************
** Դ�ļ�   : score.c
** ����˵�� : Function Definitions
** �����汾 : V1.0
/**************************************************/

/*----------------ͷ�ļ�--------------*/
#define  _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include "SCORE.h"
#include<string.h>

/*----------------��������-------------*/

//1.1�ֶ�����ѧ����������
void readData(SS stu[], int N)
{

	printf("�밴�����¸�ʽ����ѧ����Ϣ��ѧ��,����,ƽʱ�ɼ�,��ĩ�ɼ�\n");

	for (int i = 0; i < N; i++)
	{
		printf("��%d��ѧ��:", i + 1);
		scanf("%s %s %f %f", &stu[i].number, &stu[i].name, &stu[i].dailyScore, &stu[i].finalScore);
		printf("\n");
	}

	printf("------�ɼ�¼�����!--------\n");

}

//1.2���ļ����ȡѧ����������
SS* readDataFromFile(int *N)
{

	printf("\n\n------��һ��: ���ļ���ȡѧ���ĳɼ���Ϣ--------\n\n");

	SS *stu;// �����¿ռ�,��ȡ�ļ��е�ÿ��ѧ����Ϣ

	FILE *fp = NULL;
	int count = 0;
	int index = 0;

	fp = fopen("data.txt", "r");

	//1.��ȡѧ����Ŀ
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

	printf("ѧ����ĿΪ:%d\n", count);


	//2.������ѧ������洢�ռ�
	stu = (SS*)malloc(count * sizeof(SS));


	//3.��ȡÿ��ѧ������Ϣ
	while ((!feof(fp)))
	{

		//�����ļ����ݵ��ڴ�	
		fscanf(fp, "%s%s%f%f%d\n", (stu[index].number), (stu[index].name), &stu[index].dailyScore, &stu[index].finalScore,&stu[index].exscore);

		//���������ѧ����Ϣ
		printf("* ѧ�ţ�%s	����:%s		ƽʱ�ɼ���%4.2f��		��ĩ�ɼ�:%4.2f��	ʵ��ɼ���%d��\n", (stu[index].number), (stu[index].name), stu[index].dailyScore, stu[index].finalScore,stu[index].exscore);

		index++;
	}

	getchar();

	fclose(fp);

	return stu;
}

//2.����N��ѧ�����Ե������ɼ�
void calcuScore(SS stu[], int N)
{


	printf("\n\n------�ڶ���: ����ÿ��ѧ���������ɼ�--------\n\n");

	for (int i = 0; i < N; i++)
	{

		stu[i].generalScore = 0.2*stu[i].dailyScore + 0.6*stu[i].finalScore+0.2*stu[i].exscore;
		printf("* ѧ�ţ�%s	����:%s		�ܳɼ�:%4.2f��\n", (stu[i].number), (stu[i].name), stu[i].generalScore);

	}

	getchar();
}


//3.���������ɼ�����
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

//4.����һ���ĸ�ʽ���N��ѧ������Ϣ
void printOut(SS stu[], int N)
{

	printf("\n------������: �����ܳɼ����ѧ��������Ϣ!------\n\n");

	for (int i = 0; i < N; i++)
	{

		printf("��%d����Ϣ ѧ�ţ�%s	����:%s		�ܳɼ�:%4.2f��\n", i + 1, &(stu[i].number[0]), &(stu[i].name[0]), stu[i].generalScore);
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
	printf("ѧ��ƽ���ɼ�Ϊ%4.2f\n", a);

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
	printf("ѧ���ɼ�����Ϊ%4.2f\n", c);
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
	printf("ѧ����ͷ�Ϊ%4.2f,��߷�%4.2f\n", a, b);
}

void infosearch(SS stu[])
{
	printf("������Ҫ��ѯ��ѧ����ѧ�ţ�");
	char a[12];
	int flag = 0;
	scanf("%s", a);
	for (int i = 0; i < 6; i++)
	{
		if (strcmp(stu[i].number, a)==0)
		{
			printf("ѧ�ţ�%s	���� : %s		�ܳɼ� : %4.2f��\n", (stu[i].number), (stu[i].name), (stu[i].generalScore));
			flag = 1;
		}
	}
	if (flag == 0)
		printf("nothing\n");
}