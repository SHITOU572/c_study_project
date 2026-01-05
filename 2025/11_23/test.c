#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<time.h>
#include<math.h>

////T1.三角形判断(多组数判断)
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while((scanf("%d%d%d", &a, &b, &c))==3)
//	{
//		//能否构成三角形？
//		if (a + b > c || a + c > b || b + c > a)
//		{
//			if (a == b && b == c)
//				printf("等边三角形\n");
//			else if (a == b || a == c || b == c)
//				printf("等腰三角形\n");
//			else if (a * a + c * c == b * b || a * a + b * b == c * c || c * c + b * b == a * a)
//				printf("直角三角形\n");
//			else
//				printf("普通三角形\n");
//		}
//		else
//			printf("不构成三角形\n");
//	}
//
//	return 0;
//}

//T2.
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };//int-4个字节			01 00 00 00|02 00 00 00|03 00 00 00|04 00 00 00
//	short* p = (short*)arr;//short*一次访问2个字节	00 00|00 00|00 00|00 00|03 00|00 00|04 00|00 00
//	int i = 0;
//	for(i = 0;i < 4;i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0;i < 5;i++)
//	{
//		printf("%d ", arr[i]);					//	00 00 00 00|00 00 00 00|03 00 00 00|04 00 00 00===>0 0 3 4 5
//	}
//
//	return 0;
//}

////T3.
//int main()
//{
//	int a = 0x11223344;//44 33 22 11
//	char* pc = (char*)&a;
//	*pc = 0;//00 33 22 11(改第一个字节)
//	printf("%x\n", a);//11 22 33 00
//
//	return 0;
//}
//任何一个变量/表达式，都有2个属性(指属性、类型属性)

////T4.写一个函数打印arr数组的内容，不使用数组下标，使用指针
//int print(int* p,int n)
//{
//	int i = 0;
//	for (i = 0;i < n;i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//
//	return 0;
//}

////T5.字符串逆序
//别人写的
//int main()
//{
//	char arr[10001]={0};
//	//scanf("%s",arr);
//	gets(arr);
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		 char tmp= arr[left];
//		 arr[left] = arr[right];
//		 arr[right] = tmp;
//		 left++;
//		 right--;
//	}
//
//	printf("%s\n",arr);
//
//	return 0;
//}

////T6.水仙花数
////我写的
//int isNum(int n)
//{
//	//有多少位
//	int count = 1;
//	int tmp = n;
//	while(tmp / 10)
//	{
//		count++;
//		tmp /= 10;
//	}
//	//计算是不是水仙花数
//  tmp=n;
//	int sum = 0;
//	while (n > 0)
//	{
//		int a = n%10;
//		sum += (int)pow(a,count);
//		n /= 10;
//	}
//	if (tmp == sum||tmp==0)
//		return 1;
//	return 0;//或者return sum==tmp;
//}
//int main()
//{
//	int i = 0;
//	for(i=0;i<100001;i++)
//	{
//		if (isNum(i))//最好isNarcissisticNum/is_narcissistic_num
//			printf("%d\n",i);
//	}
//
//	return 0;
//}
////别人写的
//int main()
//{
//	int i = 0;
//	for (i = 0;i <= 100000; i++)
//	{
//		//判断是否为水仙花数 -> n
//		int tmp = i;
//		int n = 1;
//		int sum = 0;
//		while (tmp / 10)
//		{
//			n++;
//			tmp /= 10;//*循环内部改变了循环变量
//		}
//		//2.得到的i每一位，计算ta的n次方之和
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}

////T7.打印菱形
//我不会
//int main()
//{
//	int i = 0;//行
//	for (i = 0;i < 12;i++)
//	{
//		int j = 0;//列
//		//上三角
//		for (j = 0;j < 7;j++)
//		{
//			if ((j >= 7) && (j <= (2 * i + 7)))
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//		//下三角
//		for (j = 7;j < 13;j++)
//		{
//			if (j <= i - 8 || j >= 13 - i + 7)
//				printf(" ");
//			else
//				printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
////别人写的
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//上
//	int i = 0;
//	for (i = 0;i < line;i++)
//	{
//		//打印一行
//		//空格
//		int j = 0;
//		for (j = 0;j < line - 1-i;j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0;j < 2*i+1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下
//	for (i = 0;i < line - 1;i++)
//	{
//		//打印一行
//		//空格
//		int j = 0;
//		for (j = 0;j <=i;j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0;j <2*(line-1-i)-1 ;j++)
//		{
//			printf("*");
//		}
//	printf("\n");
//	}
//
//	return 0;
//}

//int* arr[10]:指针数组
//int (* arr)[10]:数组指针 - 指向数组的指针
////T8.喝汽水问题：一元一汽水，两个空瓶换一个汽水，给20元可以喝多少汽水？
//我写的
//int main()
//{
//	int mon = 0;//money
//	scanf("%d",&mon);
//	int count = 0;//空瓶数
//	int num = 0;//喝的汽水数
//	while (mon)
//	{
//		num++;
//		mon--;
//		count++;
//	}
//	while (count % 2 == 0||count>2)
//	{
//		num++;
//		count--;
//	}
// printf("%d\n",num);
////别人写的
//int main()
//{
//	int money = 0;
//	scnaf("%d", &money);
//	if (money > 0)
//		printf("%d\n", money - 1);
//	else
//		printf("%d\n", money);
//}