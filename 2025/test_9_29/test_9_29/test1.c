#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


//函数递归recusion(程序调用自身的编程技巧)--->大到小。
//函数递归：递---->归***
//递归的两个必要条件：1.存在限制条件，满足限制条件，递归便不再继续 2.每一次递归都接近限制条件
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);//"1234"-->"123"+4-->"12"+3+4-->"1"+2+3+4-->1+2+3+4(""内的是n对应的数)
//	}				  //Stack overflow--栈溢出【栈区(每一次函数调用都会在栈区申请空间)--堆区--静态区】 --《函数栈帧的创建与销毁》
//	printf("%d ",n%10);
//
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u",&num);//%d--有符号的，%u--无符号数
//	print(num);
//	
//	return 0;
//}


//不创建临时变量，求字符串长度
//模拟实现strlen
////int my_strlen(char str[])//参数部分写成数组形式
//int my_strlen(char*str)//参数部分写成指针形式
//{
//	int count = 0;//计数，临时变量
//	while(*str != '\0')
//	{
//		count++;
//		str++;//找下一个字符(1个字符 1个字节)
//	}
//
//	return count;
//}

////递归求解
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str+1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr[] = { "qwe" };
//	int len = my_strlen(arr);//字符串(类比数组)传参时，传其位置
//
//	printf("%d\n",len);
//
//	return 0;
//}


