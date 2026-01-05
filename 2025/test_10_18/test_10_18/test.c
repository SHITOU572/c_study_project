#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



//1、字符串逆序(逆向输出而不是逆向打印：'qwerty'---->'ytrewq')
////法一：循环
//int main()
//{
//	char arr[] = "abcdefg";
//	int left = 0;
//	int right = (sizeof(arr) / sizeof(arr[0]))-2;
//	while (1)
//	{
//		if ((right - left) >= 2)
//		{
//			char* tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//		else
//		{
//			break;
//		}
//	}
//	printf("%s\n", arr);
//
//	return 0;
//}


////法二：函数
//void paixu(char arr[], int left, int right)
//{
//	char* tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = tmp;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 2;
//	while(1)
//	{
//		if ((right - left) >= 2)
//		{
//			paixu(arr, left,right);
//			left++;
//			right--;
//		}
//		else
//			break;
//	}
//
//	printf("%s\n", arr);
//
//	return 0;
//}

////法三：递归(单参数，多参数)
//void paixu(char arr[], int left, int right)
//{
//	char* tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = tmp;
//
//	if ((right - left) >= 2)
//	{
//		paixu(arr, left+1, right-1);
//	}
//}
//int main()
//{
//	char arr[] = "abcdefgh";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 2;
//
//	paixu(arr, left, right);
//
//	printf("%s\n", arr);
//
//	return 0;
//}


////2、计算一个数每位之和
//int jisuan(int x)
//{
//	if (x > 9)
//	{
//		return jisuan(x / 10) + x % 10;
//	}
//	else
//		return x;
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//
//	int sum=jisuan(input);
//
//	printf("%d\n", sum);
//
//	return 0;
//}




////3、计算n的k次方
//double jisuan(int n, int k)
//{
//	if (k > 0)
//		return n * jisuan(n, k - 1);
//	else if (k == 0 && n != 0)
//		return 1;
//	else if (k < 0)
//		return (1 / jisuan(n, -k));
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//
//	double ret=jisuan(n, k);
//
//	printf("%lf\n", ret);
//
//	return 0;
//}



//int main()
//{
//	//int num = 10;
//	//int arr[10] = { 0 };//arr类型是：int [](或者char [].......)
//	//printf("%d\n", sizeof(arr));
//	//printf("%d\n", sizeof(int[10]));//int [10]中10不可以省略
//
//
//	//sizeof是一个操作符：计算变量/数组(类型)...所占内存空间的大小(单位是：字节，不关注内存的存放内容)
//	//strlen是一个库函数：专门计算字符串长度的，只针对字符串；从参数给出的地址，向后找'\0',统计'\0'出现的字符的个数
//
//	return 0;
//}

////交换两个数组内容
//int main()
//{
//	int arr1[] = { 1,2,3,4,7,5,6 };//0`6
//	int arr2[] = { 2,4,6,8,0,12,13 };//0`6
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	printf("arr1=");
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	printf("arr2=");
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr2[i]);
//	}	
//	printf("\n");
//
//	return 0;
//}



////init函数初始化		reverse函数倒置
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void reverse(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (right>left)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		right--;
//		left++;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,8,7};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//
//	printf("原来arr=");
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	reverse(arr,sz);
//
//	printf("后来arr1=");
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	init(arr,sz);
//
//	printf("后来arr2=");
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	return 0;
//}




////变长数组
//int main()
//{
//	//int arr[10]={0};
//	//支持变长数组的编译器(gcc...)上，数组的大小可以是变量
//
//	int n = 0;
//	scanf("%d", &n);//n=5？ n=10?.....
//	int arr[n];//这个数组不能初始化(语法规定，不存在操作空间)
//	int i = 0;
//	//输入
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//输出
//	for (i = 0;i < n;i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//编辑器
//配置插件 实现编译的效果
