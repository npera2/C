#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int binary_search(int a[], int k, int s)
{
	int left = 0;
	int right = s - 1;
	while(left<=right)
	{
		int mid = (left + right) / 2;
		if (a[mid] > k)
		{
			right = mid - 1;
		}
		else if (a[mid] < k)
		{
			left = mid + 1;
		}
		else 
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 }, k;
	printf("请输入k的值：");
	scanf("%d", &k);
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k, sz);
	if (ret == -1)
	{
		printf("找不到");
	}
	else 
	{
		printf("找到了，下标是：%d", ret);
	}
	return 0;
}