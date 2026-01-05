//define 不是关键词，是预处理指令
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int	b = 0;
//	scanf_s("%d %d", &a, &b);
//	/*int n = a / b;
//	int m = a % b;*/
//	printf("%d %d\n", a/b, a%b);
//	return 0;
//}

//语句（表达式语句，函数调用，控制，复合，空）
//控制语句（顺序结构，选择--if--switch，循环--for--while--do...while）---转向语句：break goto continue return
//#include<stdio.h>
//struct stu
//{
//	int age;
//	char name[12];
//	char tele[12];
//	char sex[12];
//
//};
//int main()
//{
//	struct stu a = { 10,"zahngsan","7628625781","male" };
//
//	printf("%d %s %s %s",a.age,a.name,a.sex,a.tele);
//	return 0;
//}
#include<stdio.h>
int main()
{
	/*int a = 223;
	printf("%05d",a);*///0作为占位相，5是位数

	//printf("%6.2f",622.246);//自动约分
	//int arr[10] = { "1","2","\0" };
	//int a = sizeof(arr);
	//printf("%d",a);

	/*printf("%o\n",10);//八进制
	printf("%x\n",10);//十六进制
	printf("%s\n","love");*/

	/*int age;
	scanf_s("%d", &age);
	if (age <= 10);
	{
		printf("青少年\n");
		printf("禁止喝酒\n");

	}
    if (age < 18 && age > 10)
		{
		printf("未成年\n");
		}
	
	else
	{
		printf("为所欲为，do you know?\n");
	}*/

	//int a, b, c, d;
	//scanf_s("%d%d",&a,&b);
	//c = a + b;
	//d = a * b;
	//printf("c=%d d=%d",c,d);

	//printf("%5d%-5d%6.2f%05d",12,23,24,24);

	/*int age;
	scanf_s("%d",&age);
	if (age < 18)
		printf("青少年\n");
	else if (age >= 18 && age < 28)
		printf("青年\n");
	else if (age >= 28 && age < 40)
		printf("壮年\n");
	else if (age >= 40 && age < 60)
		printf("老登\n");//多条语句需加大括号
	else if (age >= 60 && age < 100)
		printf("老头");
	else
		printf("老寿星");*/






		return 0;
}