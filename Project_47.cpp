#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��ȡ��������������λ��ż��λ
int main()
{
	int i = 0;
	int n = 0;
	scanf("%d", &n);
	//��ȡż��λ
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
	//��ȡ����λ
	for (i = 30; i >= 0; i -=2)
	{
		printf("%d ", (n >> i) & 1);
	}
	return 0;
}