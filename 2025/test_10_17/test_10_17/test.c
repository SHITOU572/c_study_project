#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



////1、打印一个数的每一位
//int input(int x)
//{
//	if(x>9)
//	{
//		int y = 0;
//		y = x / 10;
//		input(y);
//		printf("%d ", x % 10);
//	}
//	if (x < 10)
//		printf("%d ", x);
//
//	return x%10;
//}
//
//int main()
//{
//	int a = 0;
//	int i = 0;
//	scanf("%d", &a);
//	input(a);
//
//	return 0;
//}


////2、求阶乘
//int jiecheng(int input)
//{
//	if (input > 1)
//		return input * jiecheng(input - 1);
//	else
//		return input;
//}
//
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	jiecheng(input);
//	int ret=jiecheng(input);
//	printf("%d\n", ret);
//
//	return 0;
//}


//3、strlen的模拟(递归和非递归)
////1、递归
//
//int my_strlen(char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return my_strlen(str + 1);
//}
//
//int main()
//{
//	char arr[] = "jbaodioi";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//
//	return 0;
//}

////2、非递归
//int my_strlen(char* str)
//{
//	int i = 0;
//	int count = 0;
//	while (1)
//	{
//		if (*str != '\0')
//		{
//			count++;
//			str++;
//		}
//		else
//		{
//			return count-1;
//			break;
//		}
//	}
//}
//int main()
//{
//	char arr[] = "oiqjbadi";
//	int ret = my_strlen(arr);
//
//	printf("%d\n", ret);
//
//	return 0;
//}


////4、字符串逆序(反向排序而不是逆序打印:'qwerty'---->'ytrewq')
//1、循环
//int main()
//{
//	char arr[] = "abcdef";
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int i = 0;
//	int left = 0;
//	int right=sz - 2;
// 	//int right =strlen(arr)-1;
//	while (right > left)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
// 
//		left++;
//		right--;
//	}
//	printf("%s\n", arr);
//	return 0;
//}

////2、函数
//void reverse(char arr[])
//{
//	int left = 0;
//	int right =strlen(arr)-1;//函数内部无法使用sizeof
//	while (right > left)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//	
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "qwerty";
//
//	reverse(arr);
//
//printf("%s\n",arr)
//	return 0;
//}

//3、递归
// int my_strlen()//如果不能使用库函数的话，自己写一个strlen的函数(原题目要求)
// {
//	int count=0;
// while(*str!='\0');
// {
//		count++;
//		str++;
// }
// return count;
// }
//void reverse(char* str)
//{
//	char tmp=*str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str + 1) >= 2)
//		reverse(str + 1);
//	*(str + len - 1) = tmp;
////}
//void reverse(char arr[], int x, int y)
//{
//	char tmp1 = arr[x];
//	arr[x] = arr[y];
//	arr[y] = tmp1;
//
//	if ((y-x)>=2)
//	{
//		reverse(arr, x+1, y-1);//函数自己调用自己--->递归
//	}
//
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, 0, sz - 2);
//
//	printf("%s\n", arr);
//
//	return 0;
//}



////5、计算一个数每位之和(递归实现)
//int my_sum(int x)//1234
//{
////	int count = 0;
////	int a = x%10;
////	count = count + a;
////	x = x / 10;
////	if(x>=10)
////	{
////		my_sum(x / 10);//'4'+123--->'4'+'3'+12--->'4'+'3'+'2'+'1'==10
////	}
////
////	return count;
//
//	if (x > 9)
//		return my_sum(x / 10) + x % 10;
//	else
//		return x;
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int ret=my_sum(input);
//	printf("%d\n",ret);
//
//	return 0;
//}



////6、用递归实现n的k次方
//double Pow(int n, int k)
//{
//	if (k > 0)
//		return n * Pow(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else
//		return 1.0/Pow(n,-k);
//
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret=Pow(n, k);//Pow--次方
//
//	printf("%lf\n", ret);
//
//	return 0;
//}



////复习下冒泡排序
//void bubble(int arr[], int sz)
//{
//	int i = 0;//几趟？
//	for (i = 0;i < sz;i++)
//	{
//		int j = 0;
//		for (j = 0;j < sz-1;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = {1,24,45,67,34,6,85,34,864};
//	//scanf("%s", arr);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble(arr,sz);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d	", arr[i]);
//	}
//	return 0;
//}