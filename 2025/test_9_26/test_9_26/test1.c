#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//函数的调用
//1、传值调用   2、传址调用


//void swap1(int x,int y)
//{
//	int z = 0;
//	z = x;
//	y = x;
//	x = z;
//}
//
//void swap2(int*px, int*py)
//{
//	int z = *px;
//	*py = *px;
//	*px = z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d",&a,&b);
//
//	printf("交换前：a=%d，b=%d", a, b);
//	//传值调用，实参和形参地址不一样，形参不影响实参
//	swap1(a, b);
//	//传址调用，
//	swap2(&a, &b);
//	printf("交换后：a=%d，b=%d",a,b);
//
//	return 0;
//}

//判断是否是素数。
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int i = 0;
//	while (1)
//	{
//		int flag = 1;
//		for (i = 2;i*i < input;i++)//i*i<input; ===> i < sprt(input);
//		{
//			if (input % i != 0)
//			{
//				flag = 1;
//				break;
//			}
//			else
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if(flag == 1)
//		{
//			printf("是素数\n");
//			break;
//		}
//		else
//		{
//			printf("不是素数\n");
//			break;
//		}
//	}
//	return 0;
//}

//用函数判断是不是素数
//int is_prime(int x)
//{
//	int i = 0;
//	for (i = 2;i * i < x;i++)
//	{
//		if (x % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int i = 0;
//	if (is_prime(input) == 1)
//	{
//		printf("是素数\n");
//	}
//	else
//	{
//		printf("不是素数\n");
//	}
//	return 0;
//}

//判断是不是润年
//int main()----法一
//{
//	int year = 0;
//	for (year = 1000;year < 2001;year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//		}
//		if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//int main()---法一优化后
//{
//	int year = 0;
//	for (year = 1000;year < 2001;year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0)||year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//用函数判断是否是闰年---操作系统，高内聚（功能独立），低耦合（尽量和别人没关系）
// 
//int is_ja_ruan(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
//		return 1;
//	return 0;
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000;year <= 2000;year++)
//	{
//		is_ja_ruan(year);
//		if(is_ja_ruan(year) ==1)//最好取名为is_leap_year（润年）
//			printf("%d ",year);
//	}
//	return 0;
//}


//用函数写二分查找
//int binary_search(int arr[],int k,int sz)//形参arr[]看似为数组，实际上只是指针变量，存放arr数组名，为避免存储空间浪费
//{										   //数组传参实际上传递的是数组首元素的地址，而不是整个数组，所以在函数内部计算一个函数参数部分的数组的元素的个数是错误的
//	int left = 0;
//	int right = sz-1;
//
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
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
//			return mid;//找到了返回下标
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	scanf("%d",&k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//找到了返回下标
//	//找不到返回-1(不返回0，是因为易混淆数组中的首元素和0)
//	int ret = binary_search(arr,k,sz);
//	if (ret == -1)
//	{
//		printf("找不到！\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n",ret);
//	}
//	return 0;
//}


//布尔类型（bool）
//内置类型（char short int long long-long float double）
//C99后引入了bool类型

//#include<stdbool.h>
//bool is_prime(int x)
//{
//	int i = 0;
//	for (i = 2;i * i < x;i++)
//	{
//		if (x % i == 0)
//		{
//			return false;//如果使用bool类型，就用false和true，避免使用1/0
//		}
//	}
//	return true;
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	if (is_prime(input))
//	{
//		printf("是素数\n");
//	}
//	else
//	{
//		printf("不是素数\n");
//	}
//	printf("%d\n", sizeof(bool));//1字节，省内存
//	return 0;
//}


//写一个函数，每调用一次，num的值加一

//int ADD(int x)
//{
//	return ++x;
//}
//int main()
//{
//	int num = 0;
//	num = ADD(num);
//	printf("%d",num);
//	return 0;
//}


//函数的嵌套调用
// 但是不能嵌套定义，如下是典型的错误
//int Add(int x,int y)
//{
//	return x + y;
//
//	int Sub(int x,int y)
//	{
//		return x - y;
//	}
//}

//链式访问
//int main()
//{
//	/*int len = strlen("wqriguI");
//	printf("%d",len);*/
//
//	//链式访问--把一个函数的返回值，作为另一个函数的参数
//	//printf("%d",strlen("iuyoiaudc"));
//	printf("%d",printf("%d",printf("%d",43)));//printf返回的是打印字母的个数：43->2->1=4321
//	return 0;
//}

//函数不写返回值时，默认返回类型是int
//不过这种写法 古老且奇怪 可读性低
//Add(int x,int y)
//{
//	return x + y;
//}
//
//int main()//-->main()
//{
//	int a = 30;
//	int b = 20;
//	Add(a,b);
//	printf("%d",Add(a,b);
//	return 0;
//}

//int Add(int x, int y)
//{
//	printf("hehe\n");
//}
//上面的代码在部分编译器中返回的是函数执行过程中最后一条指令执行的结果

//void test()
//{
//	printf("hehe\n");
//}
//
// main(void)明确的说明，main()函数不需要参数
// 
// 本质上main是有参数的（1.int argc  2.char*argv[]  3.char*envp[]）
//int main(void)
//{
//	test(100);//不推荐
//	test();
//
//	return 0;
//}



//函数的声明与定义












//学校作业
//逆序输出4567->7654。
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	printf("%d%d%d%d",a%10,a/10%10,a/100%10,a/1000);
//	return 0;
//}

//保留两位小数的底层原理
//int main()
//{
//	float a = 0;
//	scanf("%f",&a);
//	a = (int)(a * 100 + 0.5) / 100.0;
//	printf("%.2f",a);
//	return 0;
//}
//#define PI 3.1415926
//int main()
//{
//	
//	float V = 0;
//	float S = 0;
//	float r = 0;
//	scanf("%f",&r);
//	S = PI * r * r;
//	V = 4 / 3 * PI * r * r * r;
//	printf("S=%f\nV=%f",S,V);
//	return 0;
//}


//int main()
//{
//	char a, b;
//	scanf("%c     %c", &a, &b);
//	printf("%c%c", a, b);
//	return 0;
//}

