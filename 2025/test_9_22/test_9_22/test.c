#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
//#define _CRT_SECURE_NO_WARNINGS
//二分查找/折半查找
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 27;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz-1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了,下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//		return 0;
//}



//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf_s("%d", &k);
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	while (left <= right)//一定包含=
//	{
//		int mid = (right + left) / 2;//mid一定要在循环内//如果数据很大，最好改为left+(right-left)/2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标为%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到");
//	return 0;
//}



////好玩的
//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//	int left = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int right = sz - 2;//strlen(arr1)-1;----strlen不包含\0;sizeof包含\0（因为是字符串类型，如果是整型则无\0）
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		//清空屏幕
//		system("cls");//system 是一个库函数，可以执行系统命令
//		left++;
//		right--;
//	}
//	printf("welcome to bit!!!!");
//	return 0;
//}



//模拟登录情景
//比较两个字符串是否相等不能使用==，应使用一个库函数：strcmp
//如果返回值是0，说明两个字符串相等
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0;i < 3;i++)
//	{
//		printf("请输入密码:");
//		printf("%s", password);
//		scanf_s("%s", password);//!!!此处不用取地址，因为是数组名
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码均错误，退出程序");
//	}
//
//
//	return 0;
//}

	

//拓宽知识面
//void fun(int a[])
//{
//	printf("%zu", sizeof(a));
//}
//int main()
//{
//	int a[10] = { 0 };
//	printf("%zu\n",sizeof(a));
//	printf("%zu\n", sizeof(a[1]));
//	fun(a);//数组传参时，传递的是：数组首元素的【地址】---X64  8；X84  4
//	return 0;
//}



//电脑产生的随机数（1~100）
//猜数字   猜大了/猜小了  直到猜对了
//void menu()
//{
//	printf("********************\n");
//	printf("*****  1.play  *****\n");
//	printf("*****  0.exit  *****\n");
//	printf("********************\n");
//}

//0~RAND_MAX(32,727)之间的随机数字
//void game()
//{
//	//生成随机数
//	int ret = rand()%100+1;//生成随机数字的函数
//	int guess = 0;
//	//printf("%d\n",ret);
//	//猜数字
//	while (1)
//	{
//		printf("请输入数字:");
//		scanf_s("%d", &guess);
//		if (ret > guess)
//		{
//			printf("猜小了\n");
//		}
//		else if (ret < guess)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜对了");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));//时间戳
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择(0/1)：");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			printf("猜数字\n");
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择！\n");
//			break;
//		}
//	}
//	while (input);
//
//	return 0;
//}