#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

////T1.实现一个函数，使得奇数位于数组的前半部分，偶数位于数组的后半部分

//void move_odd_even(int arr[], int sz)//int arr[]
//{
//	int left = 0;
//	int right = sz - 1;
//
//	//交换奇偶数
//	while (right > left)
//	{
//		//左 -> 右，找奇数
//		while (arr[left] % 2 == 1&& right > left)
//		{
//			left++;
//		}
//		//右 -> 左，找偶数
//		while (arr[right] % 2 == 0 && right > left)
//		{
//			right--;
//		}
//		if(right>left)
//		{
//			int tmp = 0;
//			tmp = arr[right];
//			arr[right] = arr[left];
//			arr[left] = tmp;
//			left++;
//			right--;
//		}
//	}
//}
//int main()
//{
//	//输入
//	int n = 0;
//	printf("Please input n:");
//	scanf("%d", &n);
//	int arr1[100] = { 0 };
//	int i = 0;
//	printf("Please input num:");
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	//调整
//	move_odd_even(arr1, n);
//	//输入
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//
//	return 0;
//}


////T2.数列合并排序(升降序随意)

////自己写的
//void paixu(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	while (j < sz)
//	{
//		for (i = 0; i < sz; i++)
//		{
//			if (arr[j] > arr[i])
//			{
//				int tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//		j++;
//	}
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int arr1[1000] = { 0 };
//	int arr2[1000] = { 0 };
//	int arr3[2000] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//		arr3[2 * i] = arr1[i];
//	}
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr2[i]);
//		arr3[2 * i + 1] = arr2[i];
//	}
//	int sz = sizeof(arr3) / sizeof(arr3[0]);
//	paixu(arr3, sz);
//	for (i = 0; i < m + n; i++)
//	{
//		printf("%d ",arr3[i]);
//	}
//
//	return 0;
//}
//
////别人写的
//int main()
//{
//	//输入
//	int arr1[1000] = { 0 };
//	int arr2[1000] = { 0 };
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (j = 0; j < m; j++)
//	{
//		scanf("%d", &arr2[j]);
//	}
//	i = 0;
//	j = 0;
//	//合并打印
//	while (j < m && i < n)
//	{
//		if (arr1[i] < arr2[j])
//		{
//			printf("%d ", arr1[i]);
//			i++;
//		}
//		else
//		{
//			printf("%d ", arr2[j]);
//			j++;
//		}
//	}
//	if (i < n)
//	{
//		for (; i < n; i++)
//		{
//			printf("%d ", arr1[i]);
//		}
//	}
//	else
//	{
//		for (; j < m; j++)
//		{
//			printf("%d ", arr2[j]);
//		}
//	}
//
//	return 0;
//}

