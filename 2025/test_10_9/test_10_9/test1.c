#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//递归和迭代（包含循环）

//递归太深会栈溢出
//解决方案：1.非递归   2.动态变量变为static（存储区 由栈区--->静态区）

//递归的优缺点：可读性高，简洁性强

//n的阶乘
//1.递归
//fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * fac(n - 1);
//	}
//
//}

//2.非递归
//int fac(int n)
//{
//	int i = 0;
//	int b = 1;
//	for (i = 1;i <= n;i++)
//	{
//		b *= i;
//	}
//	
//	return b;
//}
//
//	int main()
//	{
//		int n = 0;
//		scanf("%d", &n);
//		int ret = fac(n);
//		printf("%d",ret);
//
//		return 0;
//
//	}



//斐波那契数列

//1.递归
//int Fib(n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n-1)+Fib(n-2);//效率太低，过多的重复运算。
//	}
//
//}

//2.非递归
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int ret = Fib(n);
//	printf("%d",ret);
//
//	return 0;
//}



//作业解析
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	switch (n)
//	{
//	case 1:
//		printf("1\n",n);
//		break;
//	case 2:
//		printf("2\n",n);
//		break;
//	default:
//		printf("hehe\n");//default和case可以放在任意位置，无顺序。但最好按顺序来，可读性高
//		return 0;
//	}
//	return 0;
//}



//从大到小排序输出

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//输入
//	scanf("%d %d %d",&a,&b,&c);
//	//调整
//	int tmp = 0;
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (b < c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//		
////输出
//	printf("%d %d %d",a,b,c);
//
//	return 0;
//}



////打印1~100内所有3的倍数
//int main()
//{
//	int i = 0;
//	for (i = 0;i < 100;i+=3)
//	{
//		printf("%d ",i);
//	}
//	return 0;
//}



//给定两个数，求两数间的最大公约数。
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//输入
//	scanf("%d %d",&a,&b);
//
//	//1.暴力求解
//	/*int min = (a, b) ? a : b;
//	int m = min;
//	while (1)
//	{
//		if (a % m == 0 && b % m == 0)
//		{
//			break;
//		}
//		else
//			m--;
//	}*/
//	//printf("%d ",m);
//
//	//2.辗转相除法
//	while (a % b)
//	{
//		int c = a % b;
//		a = b;
//		b = c;
//
//	}
//	printf("%d ",b);
//
//	return 0;
//}
//***最小公倍数=a*b/最大公约数。



//1`100中9出现了几次

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0;i< 100;i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d",count);
//
//
//	return 0;
//}


//计算1/1-1/2+1/3......+1/100的结果。

//int main()
//{
//	int b = 1;
//	float sum = 0;
//	int jia = 1;
//	for (b = 1;b<=100;b++)
//	{
//		sum = sum + jia*(float)(1.0 / b);
//		jia = -jia;
//	}
//	printf("%f",sum);
//	return 0;
//}