#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

////T1、小乐乐走台阶(青蛙跳台阶)：一次走1`2阶，共n个阶，有多少走法？
//fib(int n)
//{
//	if (n <= 2)
//		return n;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int b=fib(n);
//
//	printf("%d %d\n", n, b);
//
//	return 0;
//}


//T2、在一个整数数列(可能有重复的数字)中，删除指定的某数字，输出删除该数字后的数列，数列中其他数的位置关系没有变化
//示例：6
//		1 2 3 4 5 9
//		9
//		1 2 3 4 5

////法一：自己写的	两个数组，开辟了多余空间
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50] = { 0 };//VS不支持变长数组，所以arr[50]
//	int x = 0;
//	for (x = 0;x < n;x++)
//	{
//		scanf("%d", &arr[x]);
//	}
//
//	int del = 0;//要删除的数
//	scanf("%d", &del);
//
//	int i = 0;
//	int arr1[50] = { 0 };
//	for (x = 0;x < n;x++)
//	{
//		if (arr[x]!=del)
//			arr1[i++] = arr[x];
//		else
//			arr1[i++] = arr[x + 1];
//	}
//	for (i = 0;i < n - 1;i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//
//	return 0;
//}

////法二：省空间
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	int i = 0;
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	int del = 0;//要删除的数
//	scanf("%d", &del);
//	int j = 0;//要删除的数的下标
//	for (i = 0;i < n;i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j++] = arr[i];
//		}
//		else
//			arr[j++] = arr[i + 1];
//	}
//	
//	for (j = 0;j < n - 1;j++)
//	{
//		printf("%d ", arr[j]);
//	}
//
//	return 0;
//}

////T3、最高分和最低分分差
////输入：6
////		98 97 99 100 95 96
////		5
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100] = { 0 };
//	int i = 0;
//	//输入+找最大、最小值
//	for (i = 0;i < n;i++)
//	{
//		//输入
//		scanf("%d", &arr[i]);
//		//最大
//		if (arr[i] > arr[n])
//			arr[n] = arr[i];
//		//最小
//		if (arr[i] < arr[0])
//			arr[0] = arr[i];
//	}
//
//	printf("%d\n", arr[n] - arr[0]);
//
//	return 0;
//}

////T4、字母大小写转换：如果大写 -> 小写；小写 -> 大写
//#include<ctype.h>
//int main()
//{
//	char input = 0;
// //scanf读取成功的时候，返回读取的个数；
// //scanf读取失败的时候，返回EOF
//	while(scanf("%c",&input)==1)//<==>while(scanf("%c",&input)！=EOF)
//	{
//		if (input >= 65 && input <= 90)//<==>if(islower(ch))
//			printf("%c\n", input + 32);//<==>printf("%c\n", toupper(cjh));
//		if(input>=97&&input<=122)//else//<==>if(isupper(ch))
//			printf("%c\n", input - 32);//<==>printf("%c\n", tolower(cjh));
//		//getchar();//处理"\n"
//	}
//
//	return 0;
//}


////T5、判断是不是字母
// 法一：
//int main()
//{
//	char ch = 0;
//	//scanf("%c", &ch);//注意***:此处不要多写一次scanf!!!
//	while (scanf("%c", &ch) == 1)
//	{
//		if ( (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))//也可用if((isalpha(ch))
//			printf("%c is an alphabet.\n", ch);
//		else
//			printf("%c is not an alphabet.\n", ch);
//
//		getchar();
//	}
//
//	return 0;
//}

////法二(更小众)：
//int main()
//{
//	char ch = 0;
//	//"%c"的前面加空格
//	//跳过下一个字符之前的所有空白字符
//	while (scanf(" %c", &ch) == 1)//注意***：区别" %c"与法一的"%c"
//	{
//		if ( (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//			printf("%c is an alphabet.\n", ch);
//		else
//			printf("%c is not an alphabet.\n", ch);
//	}
//
//	return 0;
//}


//T6、最大数

////T7、变种水仙花(Lily number)
//int main()
//{
//	int num = 0;
//	for (num = 10000;num < 100000;num++)
//	{
//		int sum = 0;
//		int j = 0;
//		for (j = 0;j < 4;j++)
//		{
//			int k=(int)pow(10, j);//:10**j,结果是doubke类型
//			sum += (num / k) * (num % k);
//		}
//		if (num == sum)
//			printf("%d\t", num);
//	}
//
//	return 0;
//}
