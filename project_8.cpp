#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, c, d, t;
	printf("�������ĸ���:");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if (a < b) { t = a; a = b; b = t; }
	if (c < d) { t = c; c = d; d = t; }
	if (a < c) { t = a; a = c; c = t; }
	if (b < d) { t = b; b = d; d = t; }
	if (b < c) { t = b; b = c; c = t; }
	printf("�Ӵ�С�����:");
	printf("%d,%d,%d,%d", a, b, c, d);
	return 0;
}
