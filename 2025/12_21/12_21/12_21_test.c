#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<assert.h>
#include<time.h>
#include<string.h>


//T1

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);//ptr==a[1]的地址❌  ==》  整个数组a的地址+1(类型：int(*)[5])  -->  还是&a+1的地址int(*)
//	printf("%d %d\n", *(a + 1), *(ptr - 1));//a[1],a[0]的地址
//
//	//数组名的两个例外（1.&arr  2.sizeof(arr)）
//
//	return 0;
//}

//T2

//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p=(struct Test*)0x100000;
////假设p的值为0x100000，如下表表达式的值分别是多少？
////已知，结构体Test的类型的变量大小是20个字节
//int main()
//{
//	printf("%p\n", p + 0x1);//0x1000014✔
//	//0x100000+20 --> 0x100014
//	printf("%p\n", (unsigned long)p + 0x1);//0x100028❌  ==》0x100001
//	//1048576+1 -->1048577 -->0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100014❌  ==》0x100004
//	//0x100000+4(指针的步长) -->0x100004
//
//	return 0;
//}

//T3

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);//int(*)[4]  a的地址+4*4  强制转换成int*类型
//	int* ptr2 = (int*)((int)a + 1);//int  a的地址+1   强制转换为int*类型
//	//假设&a:0x0012ff40
//	//若：(int)a+1 ==>0x0012ff41    若： a+1 ==>0x0012ff44
//	printf("%x,%x", ptr1[-1], *ptr2);//&a(a[3]),2❌  ===》但是*ptr==2 00 00 00?
//	//小端存储：低地址-->高地址
//	//01 00 00 00| 02 00 00 00| 03 00 00 00| 04 00 00 00
//
//	return 0;
//}

//T4

//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//被坑了，初始化应该是{{0，1}，{2，3}，{4，5}}  但真实的数组是{1,3,0,0,0,0};
//	int* p;
//	p = a[0];//a第一行的地址
//	printf("%d\n", p[0]);//第一行第一个元素=0❌  第一行第一个元素=1
//
//	return 0;
//}

//T5

//int main()
//{
//	int a[5][5];//a -> int(*)[5]
//	int(*p)[4];//int(*)[4]
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//p[4][2] ->*(*(p+4)+2)
//	//-4：%p 11111111 11111111 11111111 11111100 补码 -> FFFFFFFC					%d -> -4
//
//	return 0;
//}

//T6

//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);//int(*)[2][5] -> int*
//	int* ptr2 = (int*)(*(aa + 1));//int(*)[5] -> int*
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));//a,a[0]
//
//	return 0;
//}

//T7

//int main()
//{
//	char* a[] = { "work","at","alibaba" };//char(*)[3] a:指针数组
//	char** pa = a;//&a
//	pa++;//&a[1]
//	printf("%s\n", *pa);//&"at"即*a[1]✔
//
//	return 0;
//}

//T8***

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };///&c[3],&c[2],&c[1],&c[0]
//	char*** cpp = cp;//&&c[3]
//	printf("%s\n", **++cpp);//c[2] -> point ✔
//	printf("%s\n", *--*++cpp+3);//*(*(cpp+1)-1)+3 ->不会 ==》er
//	printf("%s\n", *cpp[-2]+3);//*(*(cpp-2))+3 ->不会 ==》st
//	printf("%s\n", cpp[-1][-1]+1);//(*(cpp-1)-1)+3 ->不会 ==》ew
//
//	return 0;
//}