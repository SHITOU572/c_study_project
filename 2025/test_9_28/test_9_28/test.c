#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//函数的嵌套定义和声明与定义

#include"add.h"//add.h+add.c(加法模块)		#inculde""相当于函数的声明
			   //协作+模块化(方便业务划分)

//导入静态库
#pragma comment(lib,"add.lib")

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d",&a,&b);
	Add(a,b);
	int sum = Add(a,b);
	printf("%d\n", sum);

	return 0;
}