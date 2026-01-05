#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	//T1
	/*int n = 0;
	scanf("%d", &n);
	
	int i = 0;
	for (i = 1;i < sqrt(n) + 1;i++)
	{
		printf("%d ", i * i);
	}*/

	//T2
	//int n = 0;
	//scanf("%d", &n);

	//int sum = 0;
	//while (n)
	//{
	//	//初写
	//	/*int x=n % 10;
	//	sum += x;*/
	//	//后
	//	sum+=n%10;
	//	n=n / 10;
	//}
	//printf("%d\n", sum);

	//T3
	//char a = '0';
	//scanf("%c ",&a);//***此处不要打空格---会自动跳过所有空白字符
	//int count = 0;
	//char ch = 0;

	////char arr[20] = {0};
	////int i = 0;
	////for (i = 0;i < 20;i++)
	////{
	////	scanf(" %c",&arr[i]);
	////	if (arr[i] == 'a')
	////		count++;
	////}
	//while ((ch = getchar()) != '\n')
	//{
	//	if (ch == a)
	//		count++;
	//}
	//printf("%d\n", count);

	//T4
	//int n = 0;
	//scanf("%d", &n);
	//double sum = 0;
	////斐波那契数列
	//double x = 1.0;
	//double y = 2.0;
	//int i = 0;
	//for (i = 0;i < n;i++)
	//{
	//	sum += x / y;
	//	double temp = x;
	//	x = y;
	//	y = temp + y;
	//}
	//printf("%.3lf\n", sum);

	////T5
	//int n = 0;
	//scanf("%d", &n);
	//int sum = 0;
	//int i = 0;
	//for (i = 1;i < n+1;i++)
	//{
	//	int sum_ = 0;
	//	int j = 1;
	//	for (j = 1;j < i + 1;j++)
	//	{
	//		sum_ += j;
	//	}
	//	sum += sum_;
	//}
	//printf("%d\n", sum);

	return 0;
}