#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>
#include<time.h>
#include<string.h>

////T1.
//// 判断字母的函数（区分大小写）
//int isLetter(char c) {
//    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
//}
//
//int main() {
//    char ch;
//    int letter = 0, blank = 0, digit = 0, other = 0;
//
//    // 循环读取字符，直到遇到'#'
//    while ((ch = getchar()) != '#') 
//	 {
//        if (isLetter(ch)) 
//		  {
//            letter++;
//        }
//        else if (ch == ' ') { // 空格
//            blank++;
//        }
//        else if (ch >= '0' && ch <= '9') { // 数字
//            digit++;
//        }
//        else { // 其他字符
//            other++;
//        }
//    }
//
//    // 按要求格式输出
//    printf("letter=%d,blank=%d,digit=%d,other=%d\n", letter, blank, digit, other);
//    return 0;
//}

////T2
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	//最小公倍数
//	int i = 0;
//	for (i = 1;;i++)
//	{
//		if (a * i % b == 0)
//		{
//			printf("%d ", a * i);
//			break;
//		}
//	}
//	//最大公约数
//	int j = 0;
//	int m = (a > b) ? a : b;
//	int n = (a > b) ? b : a;
//	while (n)
//	{
//		int tmp = m % n;
//		m = n;
//		n = tmp;
//	}
//	printf("%d\n", m);
//
//	return 0;
//}

//T3
//int main()
//{
//	int k = 0;
//	int n = 0;
//	scanf("%d%d", &k, &n);
//	int i = 0;
//	int sum = 0;
//	int sum_ = k;
//	for (i = 1;i < n+1;i++)//2+22+222(k=2,n=3)
//	{
//		sum_ = sum_*10+k;
//		sum += sum_;
//	}
//	printf("%d\n", (sum / 100) *10+ sum%10);
//
//	return 0;
//}

////T4:2~100所有素数和
//int main() 
//{
//    int sum = 0;
//    // 素数从2开始，所以i从2遍历到100
//    for (int i = 2; i <= 100; i++) 
//    {
//        int is_prime = 1; // 标记是否为素数（1代表是，0代表否）
//        // 检查i是否能被2~sqrt(i)之间的数整除（优化：只需检查到sqrt(i)）
//        for (int j = 2; j * j <= i; j++) 
//        {
//            if (i % j == 0) 
//            { // 如果能整除，说明不是素数
//                is_prime = 0;
//                break; // 提前退出循环
//            }
//        }
//        if (is_prime == 1) 
//        { // 如果是素数，加入总和
//            sum += i;
//        }
//    }
//    printf("%d\n",sum);
//    return 0;
//}

//T5
//int main()
//{
//	int i = 1;
//	int j = 0;
//	int n = 0;
//	scanf("%d",&n);
//	int count = 0;
//	while (count < n)
//	{
//		i++;
//		int is_prime = 1; // 标记是否为素数
//		for (j = 2; j * j <= i; j++) 
//		{
//			if (i % j == 0) 
//			{ // 如果能整除，说明不是素数
//			    is_prime = 0;
//			    break; // 提前退出循环
//			}
//		}
//		if (is_prime == 1) 
//		{ 
//			printf("%d ", i);
//			count++;
//		}
//	}
//
//	return 0;
//}



//判断素数
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 2;i < sqrt(n); i++)
//	{
//		if (n % i == 0)
//			i++;
//	}
//	if (i>sqrt(n)+1)
//		printf("no\n");
//	else
//		printf("yes\n");
//
//	return 0;
//}

////2~100素数之和
//int main()
//{
//	int sum = 0;
//	int i = 0;
//	for (i = 2;i < 101;i++)//2~100
//	{
//		int j = 0;
//		int is_prime = 1;
//		for (j = 2;j <= sqrt(i);j++)//是不是素数？
//		{
//			if (i % j == 0)
//				is_prime = 0;
//		}
//		if (is_prime)
//			sum += i;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//数字符串
//int main()
//{
//	int letter = 0, blank = 0, digit = 0, other = 0;
//	char ch = '0';
//	while ((ch = getchar()) != '\n')
//	{
//		if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
//			letter++;
//		else if (ch == ' ')
//			blank++;
//		else if (ch >= '0' && ch <= '9')
//			digit++;
//		else
//			other++;
//	}
//	printf("%d  %d  %d  %d\n", letter, blank, digit,other);
//	return 0;
//}


//2+22+222=246
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &k, &n);//2 3
//	int i = 0;
//	int sum_ = 0;
//	int sum = 0;
//	for (i = 0;i < n;i++)
//	{
//		sum_ = sum_ * 10 + k;
//		sum += sum_;
//	}
//	n--;
//	printf("%d\n", sum);
//
//	return 0;
//}
