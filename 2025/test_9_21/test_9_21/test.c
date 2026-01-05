#include<stdio.h>
#define PI 3.1415926
#define _CRT_SECURE_NO_WARNINGS


//把ASCII码值对应的字符输出
//int main()
//{
//	int arr[] = { 65,66,67,97,98,99 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	while(i<sz)
//	{
//		printf("%c",arr[i]);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf_s("%4d%2d%2d",&year,&month,&day);
//	if (year >= 1990 && year <= 2015)
//		printf("year=%d\n",year);
//	if (12>=month&&0<=month)
//		printf("month=%02d\n", month);
//	if (30>=day&&0<=day)
//		printf("day=%02d\n", day);
//	return 0;
//}

//int main()
//{
//	int xuehao = 0;
//	float C = 0.0f;
//	float shuxue = 0.0f;
//	float yinyu = 0.0f;
//	//输入
//	scanf_s("%d;%f,%f,%f",&xuehao,&C,&shuxue,&yinyu);
//	//输出
//	printf("The each subjuct score of NO. %d is %.2f, %.2f, %.2f.\n",xuehao,C,shuxue,yinyu);
//	return 0;
//}

//int main()
//{
//	printf("printf(\"Hello World!\\n\");\n");//转义字符
//	return 0;
// }

//挑出最大值---法一
//int max(int x,int y)
//{
//	if (x >= y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int A = 0;
//	int B = 0;
//	int C = 0;
//	int D = 0;
//	scanf_s("%d %d %d %d",&A,&B,&C,&D);
//	int mac = max(max(A,B),max(C,D));
//	printf("%d", mac);
//	return 0;
//}

//法二
//int main()
//{
//	int arr[4] = { 0 };//0,1,2,3
//	int i = 0;
//	while (i < 4)
//	{
//		scanf_s("%d", &arr[i]);
//		i++;
//	}
//	int max = arr[0];
//	i = 1;
//	while (i < 4)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		i++;
//	}
//	printf("%d", max);
//	return 0;
//}

//算球的体积
//int main()
//{//输入
//	double v = 0.0;
//	double r = 0.0;//0.0默认是double类型的，加个f为float类型
//	scanf_s("%lf",&r);
////计算
//	v = 4.0 / 3 * PI * r * r * r;
//	printf("%.3lf\n",v);
//	return 0;
//}

//求bmi，保留两位小数，体重(kg)，身高(cm)
//int main()
//{
//	int w = 0;
//	int h = 0;
//	float bmi = 0.0f;
//	scanf_s("%d %d",&w,&h);
//
//	bmi = (w * 100.0 * 100.0) / (h * h);
//	printf("%.2f", bmi);
//	return 0;
//}

//while循环
//int main()
//{
//	int i = 1;//初始化
//
//	while (i <= 10)//循环 判断
//	{
//		printf("%d ",i);
//		i+=3;//调整
//	}
//	return 0;
//}

//for--循环
//for(___;___;___)------初始化；条件判断；调整部分
//	  循环语句
//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 10;i++)
//		printf("%d ",i);
//	return 0;
//}

//int main()
//{
//	for (;;)//若省略，则条件判断恒成立//但最好别省略---你把握不住
//	{
//		printf("hehe\n");
//	}
//	return 0;
//	for (int i = 0;i < 10;i++);//仅C99支持
//	{
//		printf("hehe\n");
//	}
//}

//do...while--至少循环一次---break/continue用法同上。
//do
//		循环语句：
//		while(表达式)：
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//计算n！
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	scanf_s("%d", &n);
//	for (i = 1;i < n+1;i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d", ret);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf_s("%d", &n);
//		for (i = 1;i < n + 1;i++)
//		{
//			ret = ret * i;
//			sum = sum + ret;
//		}
//	printf("%d",sum);
//	return 0;
//}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = 0;
	int left = 0;
	int right = 0;
	int mid = 0;
	scanf_s("%d",n);


	return 0;
}
