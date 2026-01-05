//#include<stdio.h>
//int main()
//{
//	int* p;
//	//char*p;
//	//不管什么指针，都是指针变量，其大小取决与一个地址存放所需的空间
//	//32位电脑--32byte(4字节)    64位--64byte(8字节)
//	printf("%d",sizeof(int*));//sizeof最好用%zd/%zu
//char*与char *的区别：char*在编译器中直接识别为指针类型，char *p1,*p2,p3(仅P1P2指针，p3不是)
//	return 0;
//}

////结构体   复杂对象--自定义类型--其中一种名为：结构体（struct）(单一类型组合在一起的做法)
//#include<stdio.h>
//
//struct student
//{
//	//成员
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//
//void print(struct student* zz)
//{
//	printf("%s\n",(*zz).name );
//}
//int main()
//{
//	struct student z = {"张三",20,"男","13505102132"};
//	//printf("%s %d %s %s\n", z.name, z.age, z.sex, z.tele);//用.来访问成员名（z.巴拉巴拉）
//	print(&z);
//	return 0;
//}
#include<stdio.h>
int main()
{
	printf("hello world");
	return 0;
}