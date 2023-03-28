#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, i, sum = 1;
	printf("aֵ");
	scanf("%d", &a);
	for (i = 1; i <= a; i++)
	{
		sum *= i;
	}
	printf("aĽ׳=%d", sum);
	return 0;
}