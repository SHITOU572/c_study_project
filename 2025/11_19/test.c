#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

// //课堂
// 计算sum=1+2+3+……+n
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	for (i = 1;i < n + 1;i++)
//	{
//		sum += i;
//
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//计算sum=1*2*3……*n
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 1;
//
//	for (i = 1;i < n + 1;i++)
//	{
//		sum = sum * i;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//计算sum=1!+2!+3!+……+n!
//int main()
//{
//	int i = 0;
//	long sum = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1;i < n + 1;i++)
//	{
//		int j = 0;
//		int sum_ = 1;
//		for (j = 1;j < i + 1;j++)
//		{
//			sum_ = sum_ * j;
//		}
//		sum += sum_;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//小练习1
//int main()
//{
//	int i = 1;
//	for (i = 1;i < 5;i++)
//	{
//		int j = 1;
//		for (j = i;j < 5;j++)
//		{
//			printf("%-4d", i*j);//这里的“%-4d”指左对齐，让输出更美观
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

////素数
////法一
//int main()
//{
//	int n = 0;//判断n是不是素数
//	scanf("%d", &n);
//	int num = 0;//num是n的能整除的数的个数
//
//	int i = 0;
//	for (i = 2;i < sqrt(n)+1;i++)
//	{
//		if (n % i == 0)
//			num++;
//	}
//	if (num)
//		printf("%d不是素数\n", n);
//	else
//		printf("%d是素数\n", n);
//
//	return 0;
//}
//
////法二
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int i = 0;
//	for (i = 2;i < sqrt(n) + 1;i++)
//	{
//		if (n % i == 0)
//			i++;
//	}
//	if (i > sqrt(n)+1)
//		printf("%d不是素数\n", n);
//	else
//		printf("%d是素数\n", n);
//
//	return 0;
//}



//野指针：指针指向位置是不可知的(随机的、不正确的、没有明确限制的)
// 
//野指针的成因
//1、指针未初始化
//int main()
//{
//	int* p;
//	//p没有初始化，就意味着没有明确的指向
//	//一个局部变量不初始化的话，放的是随机值：0xac872a89d
//	*p = 10;//非法访问内存了
//
//	return 0;
//}
//2、指针越界访问
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0;i <= 10;i++)
//	{
//		*p = i;
//		p++;
//		//当指针指向的范围超过arr的范围是，p就是野指针
//	}
//
//	return 0;
//}
//3、指针指向的空间释放
//有关动态内存开辟，之后再学
//int* test()
//{
//	int a = 10;//a的空间是局部的，出了test()函数就销毁了
//	return &a;
//}
//int main()
//{
//	int* p = test();//*p访问的是其他内存
//
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
	//int a = 10;
	//int* p = &a;//明确的初始化
	//*p = 20;
	
	//NULL->0
	//int* p2 = NULL;	//0地址不允许访问，即*p2没有指向有效的空间
	//*p2 = 100;		//error

	//int* p3 = NULL;
	//if (p3 != NULL)
	//{
	//	*p3 = 100;		//right
	//}

	//int* p = test();
	//printf("hehe\n");//放的前后位置不一样，*p输出值不一样

	//if(p!=NULL)
	//{
	//	printf("%d\n",*p);//如果&a的没被覆盖，*p=10，如果被覆盖，就不一定了
	//}

	//return 0;
//}

//如何规避野指针
//1、指针初始化
//2、小心指针越界
//3、指针指向空间释放，即使置NULL
//4、避免返回局部变量的地址
//5、指针使用前检查有效性



//指针运算

// //1、指针+-整数
//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	for (vp = &values[0];vp < &values[N_VALUES];)
//	{
//		*vp++=0;//*vp=0;	vp++;	地址++
//		//(*vp)++; ===> 先解引用，再++ ==> 解引用对象++
//	}
//
//	return 0;
//}

//int main()
//{
//	//数组初始化
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//1、数组下标的写法
//	//for (i = 0;i < sz;i++)
//	//{
//	//	arr[i] = 1;
//	//}
//
//	//2、指针的写法
//	//int* p = arr;
//	//for (i = 0;i < sz;i++)
//	//{
//	//	*p++ = 1;//(*P+i)=1;
//	//}
//
//	return 0;
//}

// //2、指针-指针	指针+指针无意义
// 前提：指向同一块空间的两个指针才能相减(否则错误)
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);//指针-指针的绝对值==>指针和指针之间元素的个数
//
//	return 0;
//}

////1、循环写法
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str!='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

////2、递归写法
//int my_strlen(char* str)
//{
//	int count = 0;
//	if (*str == '\0')
//		return 0;
//	return 1+my_strlen(str +1);
//}

////3、指针写法
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return (str - start);
//}
//int main()
//{
//	//int len = strlen("nbafse");//strlen是地址传参
//	//printf("%d\n", len);
//	int len = my_strlen("nbafse");//n b a f s e \0
//	printf("%d\n", len);
//
//	return 0;
//}

////3、指针的关系运算
//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	//法一
//	/*for (vp = &values[N_VALUES];vp > &values[0];)
//	{
//		*--vp=0;
//	}*/
//	
//	//法二
//	/*for (vp = &values[N_VALUES-1];vp > &values[0];vp--)
//	{
//		*vp = 0;
//	}*/
//
//	//虽然法二的可读性高，但是应避免这么写，因为标准不保证ta可行
//	//标准：允许指向数组元素的指针与指向数组最后一个元素后面那个内存位置的指针比较
//	//		但不允许与指向第一个元素之前的那个内存位置的指针进行比较
//
//	return 0;
//}

//int main()
//{
//
//
//	return 0;
//}
