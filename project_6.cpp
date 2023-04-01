#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a;
	float i = 0, m = 2, n = 1, p;
	for (a = 1; a <= 20; a++)
	{
		i = i + m / n;//实现累加
		p = m;//暂时储存前一项分子的值
		m = m + n;//将前一项分子分母相加，并赋值给下一项的分子
		n = p;//将前一项的分子赋值给下一项的分母
	}
	printf("sum=%.2f", i);
	return 0;
}