#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>//Sleep函数和system函数所需要的头文件
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
		Sleep(1000);//睡眠一秒
		system("cls");//清空屏幕
		left++; right--;
	}
	printf("%s", arr2);
	return 0;
}