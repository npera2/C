#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a;
	float i = 0, m = 2, n = 1, p;
	for (a = 1; a <= 20; a++)
	{
		i = i + m / n;//ʵ���ۼ�
		p = m;//��ʱ����ǰһ����ӵ�ֵ
		m = m + n;//��ǰһ����ӷ�ĸ��ӣ�����ֵ����һ��ķ���
		n = p;//��ǰһ��ķ��Ӹ�ֵ����һ��ķ�ĸ
	}
	printf("sum=%.2f", i);
	return 0;
}