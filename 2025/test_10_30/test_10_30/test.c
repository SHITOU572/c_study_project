#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>                                                                                                                                          

//下标引用和函数调用、结构成员

//下标引用
//int main()
//{
//	int arr[10] = { 0 };
//	arr[7] = 8;//[]:下标引用	arr 7:操作数
//	7[arr] = 8;//交换律
//	*(arr + 7) = 8;//arr是首元素的地址	//arr+7就是跳过7个元素，指向了第八个元素(即arr[7])
//	*(7 + arr);//交换律
//
//	return 0;
//}

//函数调用

//函数定义
//int ADD(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);//操作数(ADD,a,b),函数调用，"()"---函数调用操作符(不可省略)
//
//	return 0;
//}

//结构体
struct Stu
{
	char name[20];
	int age;
	double score;
};
void set_stu(struct Stu*ps)
{
//错误的写法
//	strcpy(*ps.name, "zhangsan");//不能使用ss.name="zhangsan",因为ss.name是个地址(常量)，无法容纳字符串，要调用其空间
//	*ps.age = 20;
//	*ps.score = 100.0;

	////啰嗦的写法
	//strcpy((*ps).name,"zhangsan");
	//(*ps).age = 20;
	//(*ps).score = 100.0;

	strcpy(ps->name, "zhangsan");//指针体结构->成员(ps->age		等价于	   (*ps).age)
	ps->age = 20;
	ps->score = 100.0;
}
void print_stu(struct Stu ss)
{
	printf("%s	%d	%lf\n", ss.name, ss.age, ss.name);//结构体对象.成员
}
int main()
{
	struct Stu s = { 0 };
	set_stu(&s);
	print_stu(s);//此处不写成*s，是因为节省空间

	return 0;
}