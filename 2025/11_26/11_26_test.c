#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<assert.h>


//T1.最小公倍数
////我写的
//int main()
//{
//	int a = 0;
//	int b = 0;
//	while((scanf("%d%d", &a, &b))==2)
//	{	
//		int m = max(a, b);
//		//计算a&b的最小公倍数
//		if (a >= 1 && b >= 1 && a <= 10000 && b <= 10000)
//		{
//			int i = 0;
//			for (i = m;;i++)
//			{
//				if (i % a == 0 && i % b == 0)
//				{
//					//打印
//					printf("%d\n", i);
//					break;
//				}
//			}
//		}
//		else
//			printf("输入错误，请重新输入\n");
//	}
//
//	return 0;
//}
//别人写的
//法一：
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int m = (a >= b)?a : b;
//	while (1)
//	{
//		if (m % a == 0 && m % b == 0)
//		{
//			break;
//		}
//		m++;
//	}
//	printf("%d\n", m);
//
//	return 0;
//}
////法二：a*i+b*j=m
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 1;
//	scanf("%d%d", &a, &b);
//	while (a*i%b)
//	{
//		i++;
//	}
//	printf("%d\n", a * i);
//
//	return 0;
//}


//***T2字符串倒序(I like beijing. ==> beijing. like I)
//I like beijing --> .gnijieb ekli I --> beijing. like I
//char reverse(char* left,char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[101] = { 0 };
//	//输入
//	fgets(arr, sizeof(arr), stdin);
//	arr[strcspn(arr, "\n")] = '\0';
//	int len = strlen(arr);
//	//逆置
//	//1.整体逆置
//	reverse(arr,arr+len-1);
//	//2.局部逆置
//	char* start = arr;
//	while(*start)
//	{
//		char* end = start;
//		while (*end != ' '&& *end != '\0')
//		{
//			end++;
//		}
//		reverse(start, end - 1);
//		if(*end !='\0')
//			end++;
//		start = end;
//	}
//
//	//输出
//	printf("%s\n", arr);
//
//	return 0;
//}


///Release和Debug把版本，创建i和arr顺序不同
//int main()
//{
//	/*int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0;i <= 12;i++)
//	{
//		arr[i] = i;
//		printf("%d\n", arr[i]);
//	}
//	printf("%p\n", arr);
//	printf("%p\n", &i);*/
//
//	return 0;
//}

