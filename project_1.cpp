#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, sum = 1, Sum = 0;
	for (b = 1; b <= 10; b++)
	{
		for (a = 1; a <= b; a++)
		{
			sum *= a;
		}
		Sum += sum;
	}
	printf("%d", Sum);
	return 0;
}