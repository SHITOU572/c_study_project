#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//你还有志向吗？



////求10个整数的最大值
//int main()
//{
//	int i = 0;
//	int arr[11] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];//不要把max赋值为0，不然全取负数时，0不在范围内。
//	for (i = 1;i < 10;i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d",max);
//	return 0;
//}



////输出9*9乘法表
//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	for (b = 1;b < 10;b++)
//	{
//		for (a = 1;a < b;a++)
//		{
//			c = a * b;
//			printf("%d * %d = %d   ", a, b, c);
//		}
//		c = a * b;
//		printf("%d * %d = %d\n", a, b, c);
//	}
//
//	return 0;
//}



//猜数字



//二分查找



//交换两个整数



////实现一个函数，如输入12，输出12*12乘法口诀表
//int main()
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	int i = 0;
//	scanf("%d",&i);
//	for (b = 1;b <= i;b++)
//	{
//		for (a = 1;a < b;a++)
//		{
//			c = a * b;
//			printf("%d * %d = %-2d\t", a, b, c);
//		}
//		c = a * b;
//		printf("%d * %d = %-2d\n", a, b, c);
//	}
//
//	return 0;
//}



//void test(int arr[])//或者int* px,int* py(传值调用)
//{
//	arr[0] = 1;		//arr[0]===>*(arr+0)
//	arr[1] = 0;		//arr[1]===>*(arr+1)
//}
//
//int main()
//{
//	int arr[2] = { 0 };
//	test(arr);//传址调用
//
//	return 0;
//}



//判断素数
//int main()
//{
//
//
//	return 0;
//}