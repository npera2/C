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
	printf("��߷�Ϊ��%d\n", max);
}
void Average(int a[])
{
	int i;
	float sum = 0, average;
	for (i = 0; i < 8; i++)
		sum = sum + a[i];
	average = sum / 8;
	printf("ƽ����Ϊ��%f\n", average);
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
	printf("ƽ���ɼ���ߵ�ѧ������ţ�%d\n", p+1);
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
	printf("ƽ���ɼ���͵�ѧ������ţ�%d\n", k+1);
}
int main()
{
	//��ѧ�ɼ�
	int i = 0;
	int a[8] = {0};
	printf("������8λͬѧ����ѧ�ɼ���");
	for (i = 0; i < 8; i++)
	{
		scanf("%d", &a[i]);
	}
	Max(a);
	Average(a);
	//Ӣ��ɼ�
	int s[8] = {0};
	printf("������8λͬѧ��Ӣ��ɼ���");
	for (i = 0; i < 8; i++)
	{
		scanf("%d", &s[i]);
	}
	Max(s);
	Average(s);
	//ƽ���ɼ�����ߵ����
	average_max_num(a, s);
	//ƽ���ɼ�����ߵ����
	average_min_num(a, s);
	return 0;
}