#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//before：1.指针有类型，指针的类型决定了指针+-整数的步长，指针解引用操作的时候的权限
//		  2.指针的运算

////指针进阶

//1.字符指针
//
//int main()
//{
//	/*char ch = 'w';
//	char* pc = &ch;
//	*pc = 's';*/
//
//	const char* p = "hoqhaj0wd";//字符串首字符h的地址，赋值给了p --- 遇到'\0’停止
//	//char ch[] = "oichawodh";
//	//*p = 'w';//写入错误
//	printf("%s\n", p);
//
//	return 0;
//}
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//
//	char ch1[] = "abcdef";
//	char ch2[] = "abcdef";
//
//	if (p1 == p2)//"abcdef\0"--常量字符串，存在一片内存[只读数据区](只读不写)，即地址不变
//		printf("p1==p2\n");
//	else
//		printf("p1!=p2\n");
//
//	if (ch1 == ch2)//开辟新空间，存储字符串"abcdef\0"，ch1,ch2开辟的空间不一样
//		printf("ch1==ch2\n");
//	else
//		printf("ch1!=ch2\n");
//
//	return 0;
//}


//2.指针数组
// - 是数组，用来存放指针的数组
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", *(parr[i] + j));
//			//*(p+i) -> p[i]
//			printf("%d ", parr[i][j]);//不是二维数组(二维数组：内存中，连续访问)
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//C语言实现简单数据结构
//指针+结构体+动态内存管理


//3.数组指针
// - 是指针，指向数组的指针
//int *p1[10] - 指针数组
//int (*p2)[10] - 数组指针，p2指向一个数组，该数组有10个元素，每个元素是int类型

//before:数组名(arr)一般表示首元素地址(例外*2：1、sizeof(arr)-整个数组;[单位-字节]		2、&arr-整个数组)
//数组名
//int main()
//{
//	int arr[10] = { 0 };
//	int* p1 = arr;
//	int (*p2)[10] = &arr;
//
//	/*printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);*/
//
//	char* arr[5] = { 0 };
//	char* (*pc1)[5] = &arr;
//	
//	char ch = 'w';
//	char* pc2 = &ch;
//	char** pc3 = &pc2;//二级指针(**pc3)存放一级指针(*pc2)的
//	return 0;
//}
// 
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;//不可以写成：int* (*p)[] = &arr;//默认:[] -> [0]
//	return 0;
//}
//
//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int (*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));//p+i(第i行的地址) -> *(p+i)(进入到第i行) -> *(p+i)+j(第i行的第j个元素的地址) -> *(*(p+i)+j)(第i行的第j列个元素) <==>p[i][j]
//		}
//		printf("\n");
//	}
//}
//void print3(int* p,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int  main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	print1(arr, 3, 5);
//	printf("\n");
//	print2(arr, 3, 5);//arr表示的是：第一行地址
//	//区别于一维数组
//	printf("\n");
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	print3(arr1,sz);
//	return 0;
//}
//int arr[5] - arr整型数组
//int *parr1[10] - parr1是整型指针数组
//int (*parr)[10] - parr2是数组指针
//int (*parr3[10][5]) - parr3是存放数组指针的数组	int(*)[5] parr3[10];


//4.数组参数和指针参数

//一维数组传参
//void test(int arr[])
//{
//}
//void test(int arr[20])
//{
//}
//void test(int* arr)
//{ }
//void test2(int* arr[20])
//{
//}
//void test2(int** arr)
//{ }
//int main()
//{
//	int arr[20] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test(arr2);
//
//	return 0;
//}

//二维数组传参
//void test(int arr[3][5])
//{ }
//void test(int arr[][5])
//{}
//void test(int arr[][])//error
//{ }
//void test(int (*arr)[5])
//{ }
//void test(int *arr[5])//error
//{ }
//void test(int** arr)//error
//{ }
//void test(int *arr)//error
//{ }
//int main()
//{
//	int arr[3][5] = { 0 };
// //二维数组的数组名，表示首元素的地址，即第一行的地址
// //第一行是个一维数组
//	test(arr);
//	return 0;
//}

//一级指针传参(很常见，不列举)

////二级指针传参
//void test(int **ptr)
//{
//	printf("%d\n", **ptr);
//}
//int main()
//{
//	int n=10;
//	int* p1=&n;
//	int** p2=&p1;
//	int* arr[10] = { 0 };
//	test(&p1);
//	test(p2);
//	test(arr);
//}


//5.函数指针 - 指向函数的指针

//int Add(int x,int y)
//{
//	return x + y;
//}
//int main()
//{
//	int x = 10;
//	int y = 20;
//	Add(x, y);
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	//与函数而言，&Add和Add都是函数的地址
//
//	int (*pf)(int x, int y) = &Add;// <==> int (*pt)(int, int) = &Add;
//	printf("%p\n", *pf);
//
//	int ret = (*pf)(2, 3);// <==> int ret=Add(2,3);// <==> int ret=pf(2,3);// <==> int ret= (*Add)(2,3);
//	printf("%d\n", ret);
//
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//void calc(int(*pf)(int, int))
//{
//	int a = 3;
//	int b = 5;
//	int ret = pf(3, 5);
//	printf("%d\n", ret);
//}
//int main()
//{
//	calc(Add);//关于函数指针的用法：
//
//	return 0;
//}

////T1

//int main()
//{
//	(*(void (*)())0)();
//	//本质上：是一次函数调用，调用的是0作为地址处的函数
//	//1.把0强制转换为：无参，返回类型为void的函数的地址
//	//2.调用0地址处的该函数
//
//	return 0;
//}
//typedef unsigned int uint

////T2

//typedef void(*pf_t)(int);//void(*)(int)类型 重命名为 pf_t
//int main()
//{
//
//	void(* signal(int, void(*)(int) ) )(int);
//	//signal( int,void(*)(int) ) + void(*)(int)
//	//signal - 函数名	
//	//以上代码是一次函数声明
//	//声明的signal函数的第一个参数类型是int，第二个参数的类型是函数指针，该函数指针指向的函数参数是int，返回类型为void
//
//	pf_t signal(int, pf_t);
//
//	return 0;
//}

////函数指针的用途：
////以计算器为例

//void menu()
//{
//	printf("********************************\n");
//	printf("*****    1.sum   2.sub   *******\n");
//	printf("*****    3.mul   4.div   *******\n");
//	printf("*****    0.exit          *******\n");
//	printf("********************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
// Div(int x, int y)
//{
//	return x / y;
//}
// void calc(int (*pf)(int x, int y))
// {
//	 int x = 0;
//	 int y = 0;
//	 int ret = 0;
//	 printf("请输入操作数：\n");
//	 scanf("%d%d", &x, &y);
//	 ret = pf(x, y);
//	 printf("ret = %d\n", ret);
// }
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("请选择\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			//printf("请输入操作数：\n");
//			//scanf("%d%d", &x, &y);
//			//ret = Add(x, y);
//			//printf("ret = %d\n", ret);//有笼余代码
//			calc(Add);
//			break;
//		case 2:
//			/*printf("请输入操作数：\n");
//			scanf("%d%d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret = %d\n", ret);*/
//			calc(Sub);
//			break;
//		case 3:/*
//			printf("请输入操作数：\n");
//			scanf("%d%d", &x, &y);
//			ret = Mlu(x, y);
//			printf("ret = %d\n", ret);*/
//			calc(Mul);
//			break;
//		case 4:/*
//			printf("请输入操作数：\n");
//			scanf("%d%d", &x, &y);
//			ret = Div(x, y);
//			printf("ret = %d\n", ret);*/
//			calc(Div);
//			break;
//		case 0:
//			printf("exit\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//6.函数指针数组

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
// Div(int x, int y)
//{
//	return x / y;
//}
 //int main()
 //{
	// int (*pf)(int, int) = Add;//pf是函数指针
	// int(*arr[4])(int, int) = { Add,Sub,Mul,Div };//arr - 函数指针的数组
	// int i = 0;
	// for (i = 0; i < 4; i++)
	// {
	//	 printf("%d\n",arr[i](8,4));
	// }
	// return 0;
 //}

////函数指针数组(转移表)的应用

//void menu()
//{
//	printf("********************************\n");
//	printf("*****    1.sum   2.sub   *******\n");
//	printf("*****    3.mul   4.div   *******\n");
//	printf("*****    0.exit          *******\n");
//	printf("********************************\n");
//}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
//
// int (*pfArr[5])(int, int) = { 0, Add, Sub, Mul, Div };
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("请选择\n");
//		scanf("%d", &input);
//		if (input == 0)
//			printf("退出计算器\n");
//		else if (input >= 1 && input <= 4)
//		{
//
//			printf("请输入操作数：\n");
//			scanf("%d%d", &x, &y);
//			ret = pfArr[input];
//			printf("ret = %d\n", ret);
//		}
//	} while (input);
//	return 0;
//}

 
 //7.指向函数指针数组的指针
 
//int main()
//{
//	//函数指针数组
//	int(*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div };
//	//指向【函数指针数组】的指针
//	int(*(*ppfArr)[5])(int, int) = &pfArr;
//
//	return 0;
//}


 //8.回调函数

 //冒泡排序

 //int main()
 //{
	// int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	// int flag = 1;
	// int i = 0;//趟数
	// for (i = 0; i < 10; i++)
	// {
	//	 int j = 0;//一趟的次数
	//	 for (j = 0; j < 10-1-i; j++)
	//	 {
	//		 if (arr[j] > arr[j+1])
	//		 {
	//			 int tmp = arr[j];
	//			 arr[j] = arr[j+1];
	//			 arr[j+1] = tmp;
	//			 flag = 0;
	//		 }
	//	 }
	//	 if (flag)
	//	 {
	//		 break;
	//	 }
	// }
	// for (i = 0; i < 10; i++)
	// {
	//	 printf("%d ", arr[i]);
	// }
	// return 0;
 //}

// //qsort - 这个函数(快速排序的思路)可以排序任意数据类型

// void qsort(void* base,//排序数据的起始位置(void* 可以接受任意类型的数据)
//			size_t num,//待排序的数据元素个数
//			size_t width,//待排序的数据元素的大小(单位 - 字节)
//			int(*cmp)(const void* e1, const void* e2)//函数指针 - 比较函数(不同类型，比较方式不一样)
// );
//
// //比较两个整型参数
//int cmp_int(const void* e1, const void* e2)
// {
//	return (*(int*)e1 - *(int*)e2);//降序 - e1.e2交换位置
// }
//
//
// int main()
// {
//	 int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	 int sz = sizeof(arr) / sizeof(arr[0]);
//
//	 qsort(arr, sz, sizeof(arr[0]),cmp_int);//qsort默认排顺序
//
//	 int i = 0;
//	 for (i = 0; i < sz; i++)
//	 {
//		 printf("%d ", arr[i]);
//	 }
//	 return 0;
// }


 //int main()
 //{
	// int a = 10;
	// void* pv = &a;//void*是无具体类型的指针，可以接受任意类型的数据
	// //void*是无具体类型的指针，不能解引用操作，也不能+-整数
	// return 0;
 //}

//使用qsort排序结构体

//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//void cmp_stu_by_name(const void* e1, const void* e2)
//{
//	//strcmp(数字符串个数) -->  >0 ==0 <0
//	//按年龄排序 - return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//void test2()
//{
//	struct Stu s[] = { {"zhangsan",15},{"lisi",30},{"wnagwu",25} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s,sz,sizeof(s[0]),cmp_stu_by_name);
//}
//int main()
//{
//	test2();
//	return 0;
//}

//参考qsort写出自己的bubble_sort()

//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//int cmp_int(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if ( cmp( (char*)(base) + j*width, (char*)(base) + (j + 1)*width )>0)//cmp的两个参数 是 待比较的两个元素的地址
//			{
//				//交换
//				Swap((char*)(base)+j * width, (char*)(base)+(j + 1) * width,width);
//			}
//		}
//	}
//}
//void test3()
//{
//	int arr[10] = { 0,2,4,1,3,7,5,6,9,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	test3();
//	return 0;
//}