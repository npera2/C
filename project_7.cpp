#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n, x, y, z, m,b,a = 0;
	printf("请输入一个不多余5位的整数：");
	scanf("%d", &n);
	x = n / 10000;
	y = (n - x * 10000) / 1000;
	z = (n - x * 10000 - y * 1000) / 100;
	m = (n - x * 10000 - y * 1000 - z * 100)/10;
	b = (n - x * 10000 - y * 1000 - z * 100 - m * 10);
	while (n > 0)
	{
		n = n / 10;
		a++;
	}
	printf("该正整数的位数：%d\n", a);
	printf("%d%d%d%d%d", b ,m, z, y, x);
	return 0;
}