#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//结构体
//define:结构是一些值的集合，这些值称为成员变量。结构的每个成员可以是不同类型的变量
// 
//内置类型：char、short、int、long、long long、float、double 

//结构的声明
//
//人
//声明的结构体类型struct Peo
//struct Peo
//{
//	char name[20];
//	int tele[12];//11位+‘\0’
//	char sex[5];//男 女 保密	一个汉字2字符
//	int hight;
//}p1,p2;//据结构体类型，创建2个变量	又因为放在main外面，是全局变量

//int main()
//{
//	//在内部创建"类型"(不占内存空间)，只能在内部使用，最好最好放在外面
//	struct Peo
//{
//	char name[20];
//	int tele[12];//11位+‘\0’
//	char sex[5];//男 女 保密	一个汉字2字符
//	int hight;
//};
//	struct Peo p1;//创建"结构体变量"，创建变量后占空间
//
//	return 0;
//}

//结构体成员的类型：标量、数组、指针、其他结构体……
//struct Peo
//{
//	char name[20];
//	int tele[12];
//	char sex[5];
//	int hight;
//};
//struct St		//该结构体依赖于Peo结构体，没Peo用不了
//{
//	struct Peo p;
//	int num;
//	float f;
//};

//结构体变量的定义和初始化
//	struct Peo
//{
//	char name[20];
//	char tel[12];
//	char sex[5];
//	int height;
//};
//
//	struct St
//	{
//		struct Peo p;
//		int num;
//		float f;
//	};
//
//int main()
//{
//	struct Peo p1 = { "张三","13505102132","男",178 };//初始化
//	struct St s = { {"lisi","13512347864","女",166},100,3.14 };//初始化
//	struct St z = { {"wangwu","13512739864","男",176},190 };//不完全初始化
//
//	printf("%s %s %s %d\n", p1.name, p1.tel, p1.sex, p1.height);
//	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tel, s.p.sex, s.p.height,s.num,s.f);
//
//	return 0;
//}



//结构体成员的访问
//结构体的成员变量是通过点操作符(.)访问的。点操作符接受两个操作数。
//	struct Peo
//{
//	char name[20];
//	char tel[12];
//	char sex[5];
//	int height;
//};
//
//void print1(struct Peo* sp)//在X64中创建8个字节大小的空间，存储&p1(sp)
//{
//	printf("%s %s %s %d\n", sp->name, sp->tel, sp->sex, sp->height);
//}
//void print2(struct Peo p)//不建议，因为不仅要拷贝数据，还要再开辟一篇空间，造成了时间和空间的双重浪费
//{
//	printf("%s %s %s %d\n", p.name, p.tel, p.sex, p.height);
//}
//int main()
//{
//	struct Peo p1 = { "张三","13505102132","男",178 };
// 
////结构体传参
//	print1(&p1);//指针用"->"	结构体变量->成员变量
//	print2(p1);//对象用"."		结构体变量.成员变量
//	//**首选print1
//
//	return 0;
//}



//结构体作业
//T1、求两个数二进制中不同的个数
////法一
//int countNumOf1(int m, int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0;i < 32;i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	printf("m=");
//	scanf("%d", &m);
//	printf("n=");
//	scanf("%d", &n);
//
//	int count = countNumOf1(m , n);
//	printf("%d\n", count);
//
//	return 0;
//}

////法二
//int main()
//{
//	int m = 0;
//	int n = 0;
//	printf("m=");
//	scanf("%d", &m);
//	printf("n=");
//	scanf("%d", &n);
//
//	int x = m ^ n;
//	int count = 0;
//	while (x)
//	{
//		x = x & (x - 1);
//		count++;
//	}
//	printf("%d\n", count);
//
//	return 0;
//}


////T2、打印二进制的奇数与偶数位
////10--1010(从后往前算：1、2、3、4)
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	//获取奇数位
//	for (i = 30;i >= 0;i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	//获取偶数位
//	for (i = 31;i >= 0;i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	return 0;
//}

////T3、*统计二进制中1的个数(谷歌面试题)
//// 法一
//int countNumOf1(unsigned int x)//***这里的"unsigned int"非常非常NB！！!(-1 强制转换成 非常大的一个数)
//{
//	int count = 0;
//	while (x)
//	{
//		if ((x % 2) == 1)
//			count++;
//		x/= 2;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count=countNumOf1(n);
//	printf("%d\n", count);
//
//	return 0;
//}


////法二
//int countNumOf1(unsigned int x)
//{
//	int count = 0;
//	while(x)
//	{
//		if (x & 1 == 1)
//			count++;
//		x=x >> 1;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count=countNumOf1(n);
//	printf("%d\n", count);
//	return 0;
//}

////法三
//int countNumOf1(int x)
//{
//	int count = 0;
//	while (x)
//	{
//		x = x & (x - 1);//***非常NB，diao!
//		count++;
//	}
//	return count;
//}
// 如果要判断一个数是不是2**n?
// 2^1...10
// 2^2...100
// 2^3...1000
// 2^n....10000...000
// //if(n&(n-1)==0)
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count=countNumOf1(n);
//	printf("%d\n", count);
//	return 0;
//}

////T4、不创建新的变量，交换两个数
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;//a^b^b=a;
//	a = a ^ b;//a^b^a=b;
//	printf("%d %d", a, b);
//
//	return 0;
//}


//C+STL(标准模板库)
//JAVA