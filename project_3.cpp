#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Max(int a[])
{
	int i, max;
	float sum = 0;
	max = a[0];
	for (i = 0; i < 8; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	printf("最高分为：%d\n", max);
}
void Average(int a[])
{
	int i;
	float sum = 0, average;
	for (i = 0; i < 8; i++)
		sum = sum + a[i];
	average = sum / 8;
	printf("平均分为：%f\n", average);
}
void average_max_num(int a[],int s[])
{
	int i = 0;
	int ave_max = (a[0] + s[0]) / 2, p;
	for (i = 0; i < 8; i++)
	{
		if ((a[i] + s[i]) / 2 > ave_max)
		{
			ave_max = (a[i] + s[i]) / 2;
			p = i;
		}
	}
	printf("平均成绩最高的学生的序号：%d\n", p+1);
}
void average_min_num(int a[], int s[])
{
	int i = 0;
	int ave_min = (a[1] + s[1]) / 2, k;
	for (i = 0; i < 8; i++)
	{
		if ((a[i] + s[i]) / 2 < ave_min)
		{
			ave_min = (a[i] + s[i]) / 2;
			k = i;
		}
	}
	printf("平均成绩最低的学生的序号：%d\n", k+1);
}
int main()
{
	//数学成绩
	int i = 0;
	int a[8] = {0};
	printf("请输入8位同学的数学成绩：");
	for (i = 0; i < 8; i++)
	{
		scanf("%d", &a[i]);
	}
	Max(a);
	Average(a);
	//英语成绩
	int s[8] = {0};
	printf("请输入8位同学的英语成绩：");
	for (i = 0; i < 8; i++)
	{
		scanf("%d", &s[i]);
	}
	Max(s);
	Average(s);
	//平均成绩最高者的序号
	average_max_num(a, s);
	//平均成绩最低者的序号
	average_min_num(a, s);
	return 0;
}