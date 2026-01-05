#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>


int main()
{
	char ch = '0';
	while (scanf("%c", &ch) != EOF)
	{
		if (ch >= 'a' && ch <= 'z')
			printf("%c", ch - 32);
		if (ch >= 'A' && ch <= 'Z'||ch=='!')
			printf("%c", ch);
	}
	return 0;
}

//int main()
//{
//	int n = 0;
//	int num1 = 0;
//	int num2 = 0;
//	int cnt = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		n--;
//		scanf("%d", &num1);
//		if (num1 != num2)
//			cnt++;
//		num2 = num1;
//	}
//	printf("%d\n", cnt);
//
//
//	return 0;
//}

//double Root(double e)
//{
//	double x = 1.2;
//	double x_next = 1.2;
//	do
//	{
//		x_next = x - (double)(x * x * x + 2 * x * x + 5 * x + 6) / (double)(3 * x * x + 4 * x + 5);
//		
//		if (fabs(x_next - x) <= e)
//		{
//			break;
//		}
//		x = x_next;
//	} while (1);
//	return x_next;
//}
//int main()
//{
//	double e;
//	scanf("%lf", &e);
//	double ret=Root(e);
//	printf("%.6lf\n", ret);
//
//	return 0;
//}



//int is_prime(int i)
//{
//	int flag = 1;
//	int j = 0;
//	for (j = 2; j < i; j++)
//	{
//		if (i % j == 0)
//			flag = 0;
//	}
//	if (i == 2)
//		flag = 1;
//
//	return flag;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int num = 0;
//	int i = 0;
//	for (i = 2; i < 100; i++)
//	{
//		if (is_prime(i)&&n>1)
//		{
//			printf("%d,", i);
//			n--;
//		}
//		else if (is_prime(i) && n == 1)
//		{
//			printf("%d", i);
//			n--;
//		}
//	}
//
//	return 0;
//}