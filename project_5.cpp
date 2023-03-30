#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0, b = 0, i;
	for (a = 1; a < 10; a++)
	{
		for (b = 1; b <= a; b++)
		{
			i = a * b;
			printf("%d*%d=%d ", b, a, i);
		}
		printf("\n");
	}
	return 0;
}