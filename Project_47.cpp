#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//获取二进制数的奇数位和偶数位
int main()
{
	int i = 0;
	int n = 0;
	scanf("%d", &n);
	//获取偶数位
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
	//获取奇数位
	for (i = 30; i >= 0; i -=2)
	{
		printf("%d ", (n >> i) & 1);
	}
	return 0;
}