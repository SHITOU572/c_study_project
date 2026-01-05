#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<assert.h>

//一、指针复习


//1.指针是什么？
// 
//内存 --> 内存单元(1byte - 8bit) --> 编号 --> 地址 --> 指针
//(口语中)指针：指针变量 --> 一块内存空间,指针变量用于存储地址
//指针变量的大小(X64/X86)？
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d %d\n", a,sizeof(pa));
//
//	return 0;
//}


//2.指针类型的意义？
// 
//2.1 +-1的操作，步长不同
//2.2 解引用操作时，权限不同
//2.3 指针运算(1.+-整数  2.指针-指针  3.指针的关系运算)


//3.指针数组:本质上是数组，存放的是指针(地址)

//4.数组名
//大部分情况下表示的是首元素的地址(例外*2--整个数组名  1.sizeof(数组名)  2.&数组名)

//5.数组指针、函数指针、数组指针
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//int arr[5] = { 1,2,3,4,5 };//数组
//	//int (*parr)[5] = &arr;//指针数组 - 指向数组的指针
//
//	//printf("%p\n", &Add);
//	//int (*pf)(int, int) = &Add;//int (*)(int ,int )  pf  --> Add
//	//int sum = (*pf)(2,3);//<==>pf(2, 3)
//	//printf("%d\n", sum);
//
//	//int (*pfArr[4])(int, int) = { Add,Sub,Mul,Div };//int (*)(int,int)  pfArr[4]
//	return 0;
//}

//6.回调函数
// - 通过函数指针调用的函数
// qsort - 使用冒泡函数的思想，模拟实验qsort
// 
//6.1 qsort如何使用
//6.2 知道qsort怎么使用回调函数实现通用的排序



//二、指针和数组笔试题

//总结：1.sizeof(数组名)，这里的数组名表示的是整个数组，计算的是整个数组的大小
//		2.&数组名，这里的数组名表示整个数组，取出的是整个数组的地址
//		3.除此以外，所有的数组名都表示的是首元素地址


//T1、数组名的理解、指针的运算
//int main()
//{
//	int a[] = { 1,2,3,4 };
//
//
//	printf("%d\n", sizeof(a));//16
//	//数组名的两个例外
//	printf("%d\n", sizeof(a+0));//4 - X86 / 8 - X64
//	//<==> &a[0]  a+0还是首元素地址
//	printf("%d\n", sizeof(*a));//4
//	//<==>a[0]  即int - 4字节
//
//
//	printf("%d\n", sizeof(a+1));//4 - X86 / 8 - X64
//	//&a[1]
//	printf("%d\n", sizeof(a[1]));//4
//	//a[1] --> int
//	printf("%d\n", sizeof(&a));//16 --> 4/8
//	//int (*)[4] --> 本质上还是地址 
//
//
//	printf("%d\n", sizeof(*&a));//16
//	//int(*)[4] --> int [4] --> 4*4
//	printf("%d\n", sizeof(&a + 1));//16
//	//&a取出了一个数组的地址
//	//&a --> int(*)[4]
//	//&a+1 从数组a的地址向后跳过了一个4个整形元素的数组的大小
//	printf("%d\n", sizeof(&a[0]));//4 - X86 / 8 - X64
//	//int* 
//
//
//	printf("%d\n", sizeof(&a[0] + 1));//4 - X86 / 8 - X64
//	//int* a[0] --> int* a[1] -->int*
//	
//	return 0;
//}

//T2.char - sizeof
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	printf("%d\n", sizeof(arr));//6
//	printf("%d\n", sizeof(arr+0));//4/8
//	printf("%d\n", sizeof(*arr));//ASCII - a? ❌  ==》1
//	//*arr就是数组的首元素，大小是1字节
//	//*arr <==> arr[0]  <==> *(arr+0)
//
//	printf("%d\n", sizeof(arr[1]));//4/8  ❌  ==》1
//	printf("%d\n", sizeof(&arr));//4/8
//	printf("%d\n", sizeof(&arr+1));//6  ❌  ==》4/8
//	//&arr+1是数组后的地址
//
//	printf("%d\n", sizeof(arr[0] + 1));//4
//	//'a'+1  -->'a'整型提升   -->int 
//	printf("%d\n", sizeof(&arr[0]+1));//4/8
//
//	return 0;
//}


//T3.char - strlen
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	
//	printf("%d\n", strlen(arr));//随机值
//	printf("%d\n", strlen(arr+0));//随机值
//
//	printf("%d\n", strlen(*arr));//野指针，程序报错(崩溃)
//	//strlen('a'); --> strlen(97);
//	printf("%d\n", strlen(arr[1]));//野指针，程序错误(崩溃)
//	//strlen('b'); --> strlen(98);
//
//	printf("%d\n", strlen(&arr));//随机值
//	printf("%d\n", strlen(&arr+1));//随机值-6
//
//	printf("%d\n", strlen(&arr[0]+1));//随机值-1
//
//	return 0;
//}


//T4.
//int main()
//{
//	char arr[] = { "abcdef"};
//	
//	printf("%d\n", sizeof(arr));//7
//	printf("%d\n", sizeof(arr+0));//4/8
//
//	printf("%d\n", sizeof(*arr));//6❌  ==》 1
//	printf("%d\n", sizeof(arr[1]));//1
//
//	printf("%d\n", sizeof(&arr));//4/8
//	printf("%d\n", sizeof(&arr+1));//4/8
//	printf("%d\n", sizeof(arr[0] + 1));//4/8
//	printf("%d\n", sizeof(&arr[0]+1));//4/8
//
//	return 0;
//}


//T5.
//int main()
//{
//	char arr[] = { "abcdef" };
//	//strlen是求字符串长度，关注的是字符串中\0，计算的是\0出现之前的字符的个数
//	//strlen是库函数，只针对字符串
//	//sizeof只关注占用内存空间的大小，不在乎内存中放了啥
//	//sizeof是操作符
//	
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr+0));//6
//	
//	//printf("%d\n", strlen(*arr));//6❌  ==》 error
//	//printf("%d\n", strlen(arr[1]));//5❌  ==》 error
//	
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr+1));//随机值
//	printf("%d\n", strlen(&arr[0]+1));//5
//
//	return 0;
//}

////T6.char*类型
//int main()
//{
//	char* p = "abcdef";//abcdef - 常量字符串	*p -> 'a'
//
//	printf("%d\n", sizeof(p));//4/8   ✔
//	printf("%d\n", sizeof(p+1));//4/8   ✔
//
//	printf("%d\n", sizeof(*p));//error  ❌  ==》1
//	printf("%d\n", sizeof(p[0]));//error   ❌  ==》1
//	//p[0] --> *(p+0) --> *p
//	
//	printf("%d\n", sizeof(&p));// 4/8 (二级指针)  ✔
//	printf("%d\n", sizeof(&p+1));// 4/8 (二级指针原本的后一个位置)  ✔
//	printf("%d\n", sizeof(&p[0]+1));//4/8   ✔
//
//	printf("%d\n", strlen(p));//6？  ✔
//	printf("%d\n", strlen(p + 1));//5?   ✔
//
//	printf("%d\n", strlen(*p));//6   ❌  ==》error
//	printf("%d\n", strlen(p[0]));//?   ❌   ==》error
//
//	printf("%d\n", strlen(&p));//随机值  ✔
//	printf("%d\n", strlen(&p + 1));//随机值  ✔
//
//	printf("%d\n", strlen(&p[0] + 1));//随机值  ❌  ==》5  ( 相当于strlen(p+1) )
//
//	return 0;
//}


////T7.二维数组
//int main()
//{
//	int a[3][4] = { 0 };
//
//	printf("%d\n", sizeof(a));//48   ✔
//	printf("%d\n", sizeof(a[0][0]));//4  ✔
//
//	printf("%d\n", sizeof(a[0]));//16  ✔
//	//a[0]单独放在sizeof内部，表示a[0]表示第一行的一维数组
//	printf("%d\n", sizeof(a[0]+1));//16  ❌  ==》4/8
//	//a[0]+1 -->&a[0][0]+1 -->&a[0][1]
//	//a[0]没有单独放在sizeof内部，也没取地址，a[0]表示首元素的地址(a[0][0])
//
//	printf("%d\n", sizeof(*(a+1)));//16		❌ ==》4/8
//	printf("%d\n", sizeof(a + 1));//16   ❌  ==》4/8
//	
//	printf("%d\n", sizeof(&a[0]+1));//4/8  ✔
//	printf("%d\n", sizeof(*(a[0]+1)));//16	✔
//
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16   ✔
//	printf("%d\n", sizeof(*a));//16	 ✔
//	printf("%d\n", sizeof(a[3]));//16   ✔
//
//	return 0;
//}