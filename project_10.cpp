#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>//Sleep������system��������Ҫ��ͷ�ļ�
int main()
{
	char arr1[] = "welcome to china";
	char arr2[] = "                ";
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s", arr2);
		Sleep(1000);//˯��һ��
		system("cls");//�����Ļ
		left++; right--;
	}
	printf("%s", arr2);
	return 0;
}