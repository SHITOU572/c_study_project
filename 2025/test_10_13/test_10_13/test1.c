#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>


//1.冒泡排序

//void paixun_sort(int arr[], int sz)//***arr[],注意[]
//{
//	int i = 0;//趟数
//	for (i = 0;i < sz - 1;i++)
//	{
//		int j = 0;//一趟冒泡排序的次数
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int m = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = m;
//			}
//		}
//
//	}
//
//}
//
//int main()
//{
//	int arr[] = { 2,3,5,6,9,1,4,7,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	paixun_sort(arr,sz);
//
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//2.猜数字
//
//void menu()
//{
//	printf("*********************\n");
//	printf("**** 1.开始游戏 *****\n");
//	printf("**** 2.退出游戏 *****\n");
//	printf("*********************\n");
//}
//
//void game()
//{
//	int ret = rand() % 100 + 1;
//	int guess = 0;
//	while(1)
//	{
//		printf("请输入数字：");
//		scanf("%d",&guess);
//		if (ret > guess)
//		{
//			printf("猜小了\n");
//		}
//		else if (ret < guess)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("输入(0/1):");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			printf("猜数字\n");
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		defloat:
//			printf("选择失败\n");
//			printf("请重新选择\n");
//			break;
//		}
//	} 
//	while (input);
//
//	return 0;
//}



////3.二分查找
//int main()
//{
//	int arr[] = { 1,2,7,5,6,0,23,56,85,6,8,10 };
//	int input = 0;
//	scanf("%d", &input);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[input] > mid)
//			left = mid + 1;
//		else if (arr[input] < mid)
//			right = mid - 1;
//		else
//		{
//			left = right;
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到！\n");
//		
//	return 0;
//}	




//数组名可以表示首元素地址
//但有2个例外
//1.sizeof(数组名)，此时数组名为整个数组，计算的是整个数组的大小，单位是字节
//2.&数组名，此时数组名表示整个数组，取出的是整个数组的地址

//int main()
//{
//	int arr[10];
//	printf("%p\n", arr);//arr首元素的地址
//	printf("%p\n", arr+1);
//	printf("---------------------\n");
//	printf("%p\n", &arr[0]);//首元素的地址
//	printf("%p\n", &arr[0]+1);
//	printf("---------------------\n");
//	printf("%p\n", &arr[0]);//数组的地址
//	printf("%p\n", &arr[0]+1);//看似+28(实则2*16**1+8*16**0=40),40即arr[10]数组长度：40字节
//
//	/*int sz = sizeof(arr);
//	printf("%d\n", sz);*/
//
//	return 0;
//}
//***埋坑：&arr传参(数组传参)？

//二维数组的数组名的理解
//int main()
//{
//	int arr[3][4];
//	//int sz=sizeof(arr);
//	//printf("%d",sz);
//	
//	//arr;//二维数组的数组名表示首元素地址(第一行元素的地址)
//	//int row = sizeof(arr) / sizeof(arr[0]);//计算行数
//	//int col = sizeof(arr[0]) / sizeof(arr[0][0]);//计算列数
//	//printf("%d %d", row, col);
//
//	return 0;
//}