
#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//12
//	int sum = 0;
//	int j = 0;
//	printf("1");
//	for (j = 2;j*j < n;j++)//因子，和
//	{
//		if(n%j==0)
//		{
//			printf(",%d", j);
//			sum += j;
//		}
//	}
//	for(j = (int)sqrt(n);j>1;j--)//因子，和
//	{
//		if(n%(n/j)==0)
//		{
//			printf(",%d", n / j);
//			sum += n / j;
//		}
//	}
//	printf(",%d",n);
//	printf(" ");
//	printf("sum=%d\n", sum+1+n);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	float s = 0;
//	int i = 0;
//	int sum = 0;
//	for (i = 1;i <= n;i++)
//	{
//		int j = 0;
//		for (j = i;j <= i;j++)
//		{
//			sum += j;//sum=1+2+3...
//		}
//		s += 1.0 / sum;
//	}
//	printf("s=%.4f\n", s);
//
//	return 0;
//}
// 
// 
// 

//int is_prime(int x)
//{
//	int flag = 1;
//	int i ;
//	if (x == 1 || x == 2)
//		return !flag;
//	for (i = 2;i * i <= x;i++)
//	{
//		if (x % i == 0)
//			flag = 0;
//	}
//	return flag;
//}
//


/*
int main()
{
	int n = 0,i,flag2 = 0;

	scanf("%d", &n);

	
	
	if (n <= 4 || n % 2 != 0)
	{
		printf("输入错误，请重新输入\n");
	}
			
	else 
	{
		for (i = 2;i < n;i++)
		{
			if (!is_prime(i))
			{
				continue;
			}
			int j = n - i;
			if (is_prime(j))
			{
				printf("%d=%d+%d\n",n,i,j);
				flag2 = 1;
				break;
			}
		}
		if (!flag2)
		{
			printf("not found!");
		}
	}

	return 0;
}
*/

//double jc(int x)
//{
//	double ans = 1.0;
//	for (int i = 2;i <= x;i++)
//	{
//		ans *= i;
//	}
//	return ans;
//}
//
//int main()
//{
//	double x;
//	printf("请输入x（弧度）：");
//	scanf("%lf", &x);
//
//	double sum = 0.0;  // 累加和
//	int i = 1;         // 循环变量（只取奇数：1,3,5,...）
//
//	while (1) {
//		// 计算当前项：x^i / i!
//		double term = pow(x, i) / jc(i);
//
//		// 判断当前项的绝对值是否小于等于1e-6，若达标则退出（不再累加）
//		if (fabs(term) <= 1e-6) {
//			break;
//		}
//
//		// 确定符号：第1项（i=1）正，第2项（i=3）负，第3项（i=5）正...
//		// 项数 = (i+1)/2，符号 = (-1)^(项数-1) = (-1)^((i+1)/2 - 1) = (-1)^((i-1)/2)
//		int sign = ((i - 1) / 2) % 2 == 0 ? 1 : -1;
//
//		// 累加当前项（带符号）
//		sum += sign * term;
//
//		// 下一个奇数项
//		i += 2;
//	}
//
//	// 输出结果（保留6位小数，与1e-6精度匹配）
//	printf("sin(%.6lf) ≈ %.6lf\n", x, sum);
//	return 0;
//}

//int main()
//{
//	int a[1000];
//	int cnt = 0;
//	long n;
//	scanf("%ld", &n);
//
//	while (n)
//	{
//		n /= 10;
//		int x = n % 10;
//		a[cnt++] = x;
//		n /= 10;
//	}
//	cnt -= 1;
//	int sum = 0;
//	int i;
//	for (i = cnt;i >= 0;i--)
//	{
//		sum = sum * 10 + a[i];
//	}
//	printf("%d", sum);
//
//	return 0;
//}

////艾希表
//int main()
//{
//	int a[256] = {0};
//	char ch;
//	ch = getchar();
//	a[ch]++;
//	while ( ch && ch != '\n')
//	{
//		ch = getchar();
//		a[ch]++;
//	}
//	printf("a出现的次数为:%d", a[97]);
//
//	return 0;
//}

//int is_prime(x)
//{
//	int flag = 1;
//	int i = 0;
//	for (i = 2;i <=sqrt(x);i++)
//	{
//		if (x % i == 0)
//			flag = 0;
//	}
//	if (flag)
//		return x;
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 2;i < n;i++)
//	{
//		int j = n - i;
//		if (is_prime(i) && is_prime(j) && i + j == n)
//		{
//			printf("%d=%d+%d\n", n, i, j);
//			break;
//		}
//	}
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int num = 0;
//	while (n)//7654321
//	{
//		n /= 10;//765432
//		num = num * 10 + n % 10;//2 - 24 - 246;
//		n /= 10;
//	}
//	//num /= 10;
//	while (num)//246
//	{
//		n = n * 10 + num % 10;
//		num /= 10;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//int main()
//{
//	double a = 0;
//	double sigma = 0;
//	scanf("%lf%lf", &a, &sigma);
//	int n = 0;
//	//xi - xj <= sigma;  (i++,j++)
//	double x_now = a / 2;
//	double x_next = a / 2;
//	do
//	{
//		n++;
//		x_next = 0.5 * (x_now + a / x_now);
//		if (fabs(x_next - x_now) <= sigma)
//		{
//			break;
//		}
//		x_now = x_next;
//	} while (1);
//	printf("%d\n", n);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	double sigma = 0;
//	scanf("%lf", &sigma);
//	double pi_now = 0;
//	double pi_next = 1;
//	do
//	{
//		n++;
//		if (n % 2 == 1)
//			pi_next = pi_now +1.0 / (2 * n - 1);
//		else
//			pi_next = pi_now - 1.0 / (2 * n - 1);
//
//
//		if (fabs(4*pi_next - 4*pi_now) <= sigma)
//			break;
//		pi_now = pi_next;
//	} while (1);
//	printf("%d\n", n);
//
//	return 0;
//}
//double jc(int x)
//{
//	int i = 0;
//	double ret = 1;
//	for (i = 1;i <= x;i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	double x = 0;
//	int n = 0;
//	scanf("%lf %d", &x, &n);
//	double sinx = 0;
//	while(n)
//	{
//		if(n % 2 == 1)
//			sinx += (double)pow(x, 2 * n - 1)/jc(2 * n - 1);
//		else
//			sinx -= (double)pow(x, 2 * n - 1) /jc(2 * n - 1);
//		n--;
//	} 
//	printf("%.8lf\n", sinx);
//
//	return 0;
//}


//t7
long jc(int a)
{
	int i;
	int r = 1;
	for (i = 1; 1 <= a; i++)
	{
		r *= i;
	}
	return r;
}
int main()
{
	int n=0;
	double s=0;
	int i=0;
	double sins = 0;
	scanf("%lf %d", &s, &n);
	for (i = 1; i <= n; i++)
	{
		if (i % 2 != 0)
		{
			sins += (double)(pow(s, 2 * i - 1) / jc(2 * i - 1));
		}
		else
		{
			sins -= (double)(pow(s, 2 * i - 1) / jc(2 * i - 1));
		}
	}
	printf(".8%lf\n", sins);
	return 0;
}