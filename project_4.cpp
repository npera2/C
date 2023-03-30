#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, m = 1, n = 3, i1 = 0, i2 = 0, sum;
	for (a = 1; a < 6; a += 2)
	{
		i1 = i1 + m;
		m = m * 9;
	}
	for (a = 2; a < 7; a += 2)
	{
		i2 = i2 - n;
		n = n * 9;
	}
	sum = i1 + i2;
	printf("%d", sum);
	return 0;
}