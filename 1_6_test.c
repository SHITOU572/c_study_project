#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

////自定义类型：结构体、联合体、枚举


////结构体：

//*匿名结构体类型:创建一次 只能用一次
/*struct
{
	char name[20];
	int age;
}s1;*/

//结构的自引用
/*数据结构(数据在内存中的存储结构)
  线性：数据表[1.2.3.4.5]-(连续存放)、链表(节点-数据域（存放数据），指针域（存放下一个结点的地址）)……
  树形：二叉树……*/

//结构体(可嵌套)的定义，初始化
/*struct score
{
	int n;
	char ch[20];
};
struct stu
{
	char name[20];
	int age;
	struct score s;
};
struct stu s1 = { "zhangsan",18,{100,"fanzui"} };//嵌套结构体用大括号
*/

//***结构体内存对齐
//引子
/*struct s1
{
	int a;//4 -> 0+3
	char b;//1 -> 4
	char c;//1 -> 5
	//(0 -> 5 ==6)=》8
}one;
struct s2
{
	char b;//1 -> 0
	int a;//4 -> 4+3
	char c;//1 -> 8
	//(0 -> 8 ==9)=》12
}two;
int main()
{
	printf("%d %d\n", sizeof(one), sizeof(two));
	return 0;
}*/

//结构体内存对齐规则(why - 空间换时间)
/*1.第一个成员的地址为0：结构体的第一个成员总是存放在偏移量(单位：字节)为0的地址处。
2.其他成员按对齐值对齐：其他成员的地址必须是其自身大小和默认对齐数(VS中为8，其他编译器上为自身大小)中的较小值的整数倍。
3.结构体的总大小为最大对齐值的整数倍：结构体的总大小必须是其所有成员中最大对齐值的整数倍
4.嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整体大小就是所有最大对齐数(含嵌套体的对齐数)的整数倍*/
//如何少浪费一点空间？ - 占用空间小的成员尽量集中

//修改默认对齐数(一般修改为2^n,不修改成奇数字节)
//pragma pack(2^n)  ...pragma pack()
//pragma once   头文件中使用，功能:防止头文件被多次引用
/*#pragma pack(4)
struct S
{
	int i;//0 - 3
	double d;//7 - 15
	//16
}one;
#pragma pack()

#pragma pack(1)
struct S1
{
	char c1;
	int i;
	char c2;
}two;
#pragma pack()

int main()
{
	printf("%d\n", sizeof(one));
	printf("%d\n", sizeof(two));

	return 0;
}*/

//结构体传参(尽量使用传址调用)
/*struct S
{
	int arr[1000];
	int num;
};
void print1(struct S ss)
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", ss.arr[i]);
	}
	printf("%d\n", ss.num);
}
void print2(const struct S* ps)
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	printf("%d\n", ps->num);
}
int main()
{
	struct S s = { {1,2,3},100 };
	print1(s);//传值调用
	print2(&s);//传址调用

	return 0;
}*/

////位段(只能在结构体中使用;可以节省空间)
/*struct A
{
	int a : 2;
	int b : 5;
	int c : 10;
	int d : 30;
};*/

//位段的内存分配
/*1.位段成员可以是char、unsigned int、signed int、 int(属于整形家族)类型的
  2.位段的空间上是按按照需要以4个字节(int)或者1个字节(char)的方式开辟的
  3.位段涉及很多不确定因素，位段是不跨平台的，注重可移植性的程序应该避免使用位段*/
/*struct B
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};
int main()
{
	struct B s = { 0 };
	printf("%d\n", sizeof(struct B));

	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;

	return 0;
}*/

//位段的跨平台问题
/*1.int位段被当成有符号数还是无符号数是不确定的
  2.位段中最大位的数目是不确定的。
  3.位段中的成员在内存中从左往右分配，还是从想左分配标准未定义
  4.当一个结构体包含两个位段，第二个位段成员较大，无法容纳于第一个位段剩余的位时，是舍弃剩余的位还是利用，这是不确定的*/

//练习：contact通讯录[人的信息(名字，年龄，性别，电话，地址)]

////枚举
/*enum Sex
{
	Mal,
	Fem
};*/
/*enum Day
{
	//枚举常量
	Mon,//0  || Mon=1,
	Tues,//1
	Wed,//3
	Thur,
	Fri,
	Sat,
	Sun
};
int main()
{
	enum Day d = Fri;
	printf("%d",d);

	return 0;
}*/

//枚举的优点
/*1.提高可读性和可维护性
  2.与#define对比枚举有类型，更严谨
  3.防止命名污染(封装)
  4.便于调试
  5.使用方便，一次定义多个常量*/

////联合(共用体)
/*union Un
{
	int a;
	char ch;
};
int main()
{
	union Un u ;
	printf("%d\n", sizeof(u));//共用 - 较大一方

	printf("%p\n", &u);
	printf("%p\n", &u.a);
	printf("%p\n", &u.ch);

	u.a = 0x11223344;
	u.ch = 0x00;//可以判断大小端存储

	return 0;
}*/

//复习大小端存储(法一，法二)
/*
int CheckSystem(int x)
{
	//法一
	//return *(char*)&x;

	//法二
	union UN
	{
		int a;
		char ch;
	};
	union UN u;
	u.a = 1;
	return u.ch;

}
int main()
{
	//int a=1;//00 00 00 01
	//小端：01 00 00 00
	//大端：00 00 00 00
	int a = 1;
	int ret = CheckSystem(a);
	if (ret)
		printf("小端\n");
	else
		printf("大端\n");
	return 0;
}*/

//联合体存在对齐
/*union UN
{
	char ch[5];//5
	int a;//4 - 存在对齐( max(1,4)*n(5) -> 8)
}u;
int main()
{
	printf("%d\n", sizeof(u));

	return 0;
}*/

