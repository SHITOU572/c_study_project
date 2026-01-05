#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//||虚拟机--wmare workstation
//||vmdk  -500G


//库函数
//int main()
//{
	//char arr1[20] = { 0 };
	//char arr2[] = "hello world!";
	//strcpy(arr1,arr2);//(目的地,源头)从后者拷贝到前者
	//printf("%s\n",arr1);

	/*char arr1[20] =  "hello world" ;
	memset(arr1+6, 'f', 3);
	printf("%s\n",arr1);*/

	//return 0;
//}


//自定义函数

////函数的定义
//int MAX(int x,int y)
//{
//	if (x >= y)
//		return x;
//	else
//		return y;
//}
////函数的调用
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d %d",&a,&b);
//	MAX(a,b);
//	int M = MAX(a,b);
//	printf("%d",M);
//}


////x,y形式参数
//void Swap(int* px,int* py)
//{
//	int z = *px;
//	*px = *py;
//	*py = z;
//}
//
////当时实参传给形参，形参是实参的临时拷贝；对形参的改变不影响实参
//int main()
//{
//	int a=0;
//	int b=0;
//	//交换
//	scanf("%d%d",&a,&b);
//	printf("交换前：a=%d b=%d\n",a,b);
//	//a,b实参
//	Swap(&a,&b);
//	printf("交换后：a=%d b=%d\n",a,b);
//	return 0
//}

//实参与形参
//void ADD(int x, int y)//形参只有在函数调用时为实参，用完自动销毁。
//{					  //形参实例化后相当于实参的临时拷贝，对形参的修改不会影响实参
//	return x + y;
//}

//函数的调用
//1、传值调用   2、传址调用



//void swap1(int x,int y)
//{
//	int z = 0;
//	z = x;
//	y = x;
//	x = z;
//}
//
//void swap2(int*px, int*py)
//{
//	int z = *px;
//	*py = *px;
//	*px = z;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d",&a,&b);
//
//	printf("交换前：a=%d，b=%d", a, b);
//	//传值调用，实参和形参地址不一样，形参不影响实参
//	swap1(a, b);
//	//传址调用，
//	swap2(&a, &b);
//	printf("交换后：a=%d，b=%d",a,b);
//
//	return 0;
//}