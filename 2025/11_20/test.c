#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//5、指针与数组
//数组：一组相同类型元素的集合
//指针变量：是一个变量，存放的是地址
//int main()
//{
//	int arr[10] = { 0 };
//	//arr 是首元素的地址(但存在两种意外：1、sizeof	2、&符号--->取整个数组的地址)
//	//&arr[0]
//	int* p = arr;
//	//通过指针访问数组
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%p ------------- %p\n", &arr[i], arr + i);//&arr[i] <==> p+i <==> arr+i
//		printf("%p\n", &arr[i]);//--->printf("%p\n", *(arr + i));
//		printf("%p\n", *(p + i));
//	}
//
//	/*for (i = 0;i < sz;i++)
//	{
//		printf("%d", *(p + i));
//	}*/
//	
//	return 0;
//}
//void test(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//void test(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);//arr[i]--->*(arr+i)
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr, 10);
//
//	return 0;
//}



//二级指针
//二级指针是用来存放"一级指针变量的地址"的
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是一级指针变量
//	int** ppa=&pa;//ppa是一个二级指针变量
//	**ppa = 20;
//	printf("%d\n", a);
//	//对于指针的理解
//	//int a=10;==>a是整型，并赋值为10
//	//int * pa = &a;==>*:说明pa是指针   int:说明pa指向的类型是int类型
//	//int* * ppa = &pa;==>中间的'*':说明ppa是指针    int*:说明ppa指向的类型整体是int*
//
//	return 0;
//}

//指针数组：存放指针的数组
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//int c = 30;
//	//int* parr[10] = { &a,&b,&c };
//	//for (int i = 0;i < 3;i++)
//	//{
//	//	printf("%d ", *(parr[i]));//*parr[i] <==> *(parr[i])
//	//}
//
//	//二维数组
//	//1、for*2
//	//int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	//int i = 0;
//	//int j = 0;
//	//for (i = 0;i < 3;i++)
//	//{
//	//	for (j = 0;j < 4;j++)
//	//	{
//	//		printf("%d ", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//	//2、一维数组-->二维数组	可管理多个一维数组
//	//int arr1[4] = {1,2,3,4};
//	//int arr2[4] = { 2,3,4,5 };
//	//int arr3[4] = { 3,4,5,6 };
//
//	//int* parr[3]={ arr1,arr2,arr3 };
//	//int i = 0;
//	//int j = 0;
//	//for (i = 0;i < 3;i++)
//	//{
//	//	for (j = 0;j < 4;j++)
//	//	{
//	//		printf("%d ", parr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//	return 0;
//}