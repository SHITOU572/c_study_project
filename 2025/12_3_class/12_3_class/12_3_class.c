#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<assert.h>
//int Average(int, int);//函数的声明(可以不写形参)
//
//int a = 100;//全局变量 - 作用域是全局
////封装函数
//
//int main()
//{
//	int a = 12;//局部变量 - 作用域是main()函数 
//	int b = 24;
//	int ret = Average(a, b);
//	printf("result=%d\n", ret);
//
//	return 0;
//}
//int Average(int x, int y)//实参的不会随形参的值改变而改变 -> 按值传递(区别于：按址传递)
//{
//	printf("%d\n", a);//优先级：局部变量>全局变量
//	return (x + y) / 2;
//}


//递归
//int fac(int n, int a)
//{
//	while (n)
//		return fac(n - 1,a+2);
//	return a;
//}
//int main()
//{
//	int a = 10;
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n,a);
//	printf("%d\n", ret);
//
//	return 0;
//}



//Hanol
int Hanol(int n,int a, int b,int c)
{
	int cnt = 0;
	while (n)
	{
		if(c<n)
		{
			a--;
			c++;
			cnt++;
		}
		if (c >= 1 && b >1)
		{
			b = a;
			

		}

	}
}
int main()
{
	int a, b, c;
	int n = 0;
	scanf("%d", &n);
	a = n;
	int ret = Hanol(n,a,b,c);//a -> b
	printf("%d\n", ret);

	return 0;
}