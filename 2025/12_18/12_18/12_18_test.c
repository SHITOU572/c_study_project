#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>


//double Total2(int n)
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 1; i < n; i++)
//	{
//		if (i % 3 == 0 && i % 7 == 0)
//		{
//			sum +=  1.0/i;
//		}
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	double ret = Total2(n);
//	printf("%.3lf\n", sqrt(ret));
//
//	return 0;
//}

//int main()
//{
//	double e = 0;
//	scanf("%lf", &e);
//	int n = 1;
//	int i = 0;
//	double x = 1;
//	double x_next = 0;
//	do
//	{
//		n++;
//		x_next = x+pow(-1,n+1)/(2*n-1);
//		if (fabs(4*x - 4*x_next) <= e)
//			break;
//	} while (1);
//	printf("%d\n", n);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = n;
//
//	for (i = 1; i <n; i++)
//	{
//		if (n % i == 0)
//		{
//			printf("%d,", i);
//			sum += i;
//		}
//	}
//	printf("%d sum=%d\n", n,sum);
//
//
//	return 0;
//}

//int my_sum(int i)
//{
//	int j = 0;
//	int sum = 0;
//	for (j = 1; j <= i; j++)
//	{
//		sum += j;
//	}
//	return sum;
//}
//int main()
//{
//	double s = 0;
//	double count = 0;
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		s += 1.0 / my_sum(i);
//	}
//	printf("s=%.4lf\n", s);
//
//
//	return 0;
//}

//int is_prime(int x)
//{
//	int flag = 1;
//	int i = 0;
//	for (i = 2; i < x; i++)
//	{
//		if (x % i == 0)
//			flag = 0;
//	}
//	return flag;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (is_prime(i) && is_prime(n - i))
//		{
//			printf("%d=%d+%d\n", n, i,n - i);
//			break;
//		}
//	}
//
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int n1 = 0;
//	scanf("%d", &n);
//	while (n)//7654321
//	{
//		n /= 10;//765432
//		n1 = n1 * 10 + n % 10;//2  24  246
//		n /= 10;
//	}
//	while (n1)//246
//	{
//		n = n * 10 + n1 % 10;
//		n1 /= 10;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	double a = 0;
//	double sigma = 0;
//	scanf("%lf%lf", &a, &sigma);
//	double x = a / 2.0;
//	double x_next = 0;
//	do
//	{
//		n++;
//		x_next = 1 / 2.0 * (x + a / x);
//		if (fabs(x - x_next) <= sigma)
//		{
//			printf("%d", n);
//			break;
//		}
//		x = x_next;
//	} while (1);
//
//	return 0;
//}

//int main()
//{
//	int x, y, z=0;
//	for (x = 1; x <= 33; x++)
//	{
//		for (y = 1; y <= 50; y++)
//		{
//			z = 100 - x - y;
//			if (3*x+2*y+z/2.0 == 100)
//			{
//				printf("%d %d %d", x, y, 100-x-y);
//				printf("\n");
//			}
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	char ch = '0';
//	int letter = 0;
//	int blank = 0;
//	int digit = 0;
//	int other = 0;
//	while (scanf("%c",&ch) == 1)
//	{
//		if (ch == '#')
//			break;
//		else if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
//			letter++;
//		else if (ch == ' ')
//			blank++;
//		else if (ch >= '0' && ch <= '9')
//			digit++;
//		else
//			other++;
//	}
//	printf("letter=%d blank=%d digit=%d other=%d\n", letter, blank, digit, other);
//
//	return 0;
//}

//int is_prime(int x)
//{
//	int flag = 1;
//	int i = 2;
//	for (i = 2; i < x; i++)
//	{
//		if (x % i == 0)
//			flag = 0;
//	}
//	if (x == 2)
//		flag = 1;
//	return flag;
//}
//int main()
//{
//	int sum = 0;
//	int i = 0;
//	for (i = 2; i< 100; i++)
//	{
//		if (is_prime(i))
//		{
//			sum += i;
//		}
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//int is_prime(int x)
//{
//	int flag = 1;
//	int i = 0;
//	for (i = 2; i < x; i++)
//	{
//		if (x % i == 0)
//			flag = 0;
//	}
//	if (x == 2)
//		flag = 1;
//	return flag;
//}
//int main()
//{
//	int i = 2;
//	int n = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//			n--;
//			i++;
//		}
//		else
//			i++;
//	}
//
//	return 0;
//}

//long jiecheng(int x)
//{
//	long ret = 1;
//	int i = 0;
//	for (i = 1; i <= x; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;//项数
//	double s = 0;//极数和
//	double x = 0;
//	scanf("%lf", &x);
//	do
//	{
//		n++;
//		s += pow(-1, n + 1) * pow(x, 2 * n - 1)/jiecheng(2*n-1);
//		if (fabs(pow(x, 2 * n - 1) / jiecheng(2 * n - 1)) <= 1e-6)
//		{
//			printf("%d %lf", n-1, s);
//			break;
//		}
//	} while (1);
//
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= sqrt(n); i++)
//	{
//		printf("%d ", i * i);
//	}
//
//	return 0;
//}

//int main()
//{
//	double x1 = 1;
//	double x2 = 2;
//	double sum = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		sum += x1 / x2;
//		double tmp = x2;
//		x2 = x1 + tmp;
//		x1 = tmp;
//	}
//	printf("%.3lf\n", sum);
//
//	return 0;
//}

//int my_sum(int x)
//{
//	int sum = 0;
//	int i = 0;
//	for (i = 1; i < x + 1; i++)
//	{
//		sum += i;
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		sum += my_sum(i);
//	}
//	printf("%d", sum);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n)//54321
//	{
//		printf("%d", n % 10);//1
//		n /= 10;
//	}
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	double sum = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 1;i < n + 1; i++)
//	{
//		if (i % 5 == 0 || i % 9 == 0)
//			sum += 1.0 / i;
//	}
//	printf("%lf", sum);
//
//
//	return 0;
//}
