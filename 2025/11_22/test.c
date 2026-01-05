#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>


//T1
//全局变量、静态变量都放在静态区
//全局变量、静态变量不初始化的情况下，默认会被初始化为0
//局部变量(放在栈区)不初始化，默认是随机值
//int i;//0
//int main()
//{
//	i--;
//	//sizeof操作符计算的返回类型是size_t类型的，是无符号整形
//	if (i > sizeof(i))//算术转换：-1==>很大的正数>4
//		printf(">\n");
//	else
//		printf("<\n");
//
//	return 0;
//}

////T2、打印“X”图形
//int main()
//{
//	int n = 0;
//	while(scanf("%d", &n)==1)//这一步没想到
//	{
//		int i = 0;
//		for (i = 0;i < n;i++)
//		{
//			int j = 0;
//			for (j = 0;j < n + 1;j++)
//			{
//				if (j == i + 1 || j == n - i)
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}

//T3、获取月份天数
//我写的
//int main()
//{
//	int year = 0;
//	int mon = 0;
//	while(scanf("%d%d", &year, &mon)==2)//**下次形成习惯，限制输入，确保接收
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		if (mon == 2)
//			printf("%d\n", 29);
//		else if (mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon == 10 || mon == 12)
//			printf("%d\n", 31);
//		else
//			printf("%d\n", 30);
//	}
//	else
//	{
//		if (mon == 2)
//			printf("%d\n", 28);
//		else if (mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon == 10 || mon == 12)
//			printf("%d\n", 31);
//		else
//			printf("%d\n", 30);
//	}
//
//	return 0;
//}
//别人写的
//int isLeapYear(int y)
//{
//	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
//}
//int main()
//{
//	int y = 0;
//	int m = 0;
//	int d = 0;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (scanf("%d%d", &y, &m) == 2)
//	{
//		int d = days[m];
//		if ((isLeapYear(y) == 1)&&(m==2))
//		{
//			d++;
//		}
//		printf("%d\n", d);
//	}
//
//	return 0;
//}



////调试
// 
//什么是bug?
//历史上第一个bug：1947.9.9 Grace-Hopper 发现了电脑上第一个bug(是由一只臭虫引起的)
//bug:计算机(程序)错误
//
//调试是什么？
//调试：Debug
// 
//发现bug(程序员、测试人员、用户)
//调试的基本步骤(5)：
//1、发现程序错的存在
//2、对错误进行定位(隔离、消除……)[测试人员->报bug]
//3、确定错误产生的原因
//4、提出纠正错误的解决方法
//5、对程序错误予以纠正，重新测试
//
//Debug和Release
// Debug(调试版本):包含调试信息，并且不做任何优化，便于程序员调试程序
// Debug可以一步一步调试
// Release(发布版本):进行了各种优化，使得程序在代码大小和运行速度上都是最优的，以便用户更好的使用
//Release不可以一步一步调试，没有调试信息，优化过速度快，代码大小较小
//
//Windows(还有Linux，Java……)环境调试
//调试之前，你必须知道程序应该怎么走，调试只是验证你的想法or找出程序错误之处
//1、环境准备：Debug版本
//2、学会快捷键(F5、F5+F9、F10、F11、Ctrl+F5)
// 条件断点：满足条件，触发断点
// F10:逐过程调试，处理一个过程(一个函数or一条语句)
// F11:逐语句，F11可以进入函数内部
// Ctrl+F5:先编译链接，生成可执行程序，并让ta运行
// Shift+F5:取消调试
// Ctrl+F:搜索
//更多快捷键"csdn--Mrlisky"
//Fn(辅助功能键)	Fn+F1->F1(帮助)……
// Alt+Tab:切屏
//
//调试程序时，查看程序当前信息
//查看"临时变量的值"/"内存信息"/"调用堆栈"/"汇编信息"/寄存器信息:调试开始后->窗口->(自动窗口、局部变量、*监视、内存、调用堆栈、寄存器)
//数据结构的栈：出栈	入栈
//void test(int a[])
//{		//调试：a,4====>1,2,3,4
//}
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,0};
//	test(arr);
//
//	return 0;
//}
	
//栈区-堆区-静态区
//栈区使用习惯：先使用高地址处的空间，在使用低地址处的空间
//高->低：i-?-?-arr[10]-arr[9]-...-arr[0]
//如果i和arr之间由适当的空间，利用数组的越界访问操作就可能覆盖到i，可能会导致死循环(VS2019-X86)
//《C陷进和缺陷》
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0;i <= 12;i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//如何写出好(易于调试的)代码(好的代码是写出来的，不是改出来的)
//代码运行正常
//bug少
//效率高
//可读性高
//可维护性高
//注释清晰
//文档齐全

//coding技巧
//使用assert
//尽量使用const
//养成良好的编码风格
//添加必要的注释
//避免代码陷进

//1、
//void my_strcpy(char* des, char* src)
//{
//	while(*src!='\0')
//	{
//		*des = *src;
//		des++;
//		src++;
//	}
//	*des = *src;
//}
//2、
//char* my_strcpy(char* des,const char* src)//**const:防止两边写反(变量src->常变量src)		原代码的健壮性更高
// //为什么返回char* 呢？-----为了实现链式访问(链式访问：一个函数的返回值可以作为另一个函数的参数)
// //strcpy函数返回的是目标空间的起始地址
//{
// char* ret=des;
//	//**断言
//	assert(src != NULL);//任何表达式都可以
//	assert(des != NULL);
//
//	while (*des++ = *src++)
//		;
// return ret;
//}
//int main()
//{
//	int arr1[20] = { 0 };
//	char arr2[] = "hello bit!";
//	char* p = NULL;
//	////strcpy在拷贝字符串时，会把原字符串的"\0"也拷贝过去
//	//strcpy(arr1, arr2);
//	printf("%s\n", my_strcpy(arr1,arr2));//这里就是链式访问
//	return 0;
//}
//*补充：万一des的空间不够怎么办？---这不是my_strcpy的问题(函数应该：高内聚，低耦合)，这是程序员该考虑的

//关于const的作用
//int main()
//{
//	/*int num = 20;
//	num=10;
//	printf("%d\n", num);*/
//
//	//const修饰指针变量：
//	//1、const放在*左侧(限制*p)
//	//const int* p=20;
//	// means:p指向的对象，不能通过p改变了，但是p变量本身的值是可以改变的
//	//2、const放在*右边(限制p)
//	//int* const p=&num;
//	//means:p指向的对象，是可以通过p来改变的，但是p变量本身的值不能改变了
//	
//	const int num = 10;
//	int* p = &num;
//	*p = 20;
//	printf("%d\n", num);
//
//	return 0;
//}

//模拟strlen
////我写的
//int my_strlen(char* x)
//{
//	assert(*x != NULL);
//	int count = 0;
//	while (*x++)//看似这里少了一行，性能一致，但是有潜在隐患
//	{
//		count++;
//	}
//	return count;
//}

//别人写的
//int my_strlen(const char* str)//加了const，代码健壮性更好
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')//*str++的话，会跳过"\0",导致一些后期的潜在隐患
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "hello bit!";
//	printf("%d\n",my_strlen(arr));
//
//	return 0;
//}

//编程常见错误
//1、编译型错误(语法错误)--最简单的，基本上可以自行解决(咳咳，其实是AI啦)
//2、链接型错误(出现在链接期间的)		||找不到符号(1.不存在	2.写错了)		||错误信息：LNK...
//3、运行时错误(最难受的，调试来解决运行时错误)
// 
//test.c-->编译-->链接-->可执行程序