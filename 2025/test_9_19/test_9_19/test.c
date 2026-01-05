#include<stdio.h>
//int main()
//{
//	//{}代码块
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hh\n");
//	else
//			printf("haha\n");//else与最近的if组队	
//return 0;
//}

//
//int main()
//{
//	int x;
//	float y;
//	scanf_s("%3d%f",&x,&y);
//	printf("%d %f",x,y);
//	return 0;
//}

//int main()
//{
	/*char firstname[20] = { 0 };
	char first_name[20] = { 0 };
	char FirstName;*/

	////输入
	//int r;
	//float s = 0;
	////计算
	//printf("请输入r的值：");
	//scanf_s("%d",&r);
	//s = r * r * PI;
	////输出
	//printf("s的值为：%f",s);

	//输入
	//double a, b, c;
	//double x1, x2, p;
	//printf("输入a,b,c的值");
	//scanf_s("%lf %lf %lf",&a,&b,&c);
	//
	////计算
	//p = b * b - 4*a * c;
	//x1 = (-b + sqrt(p))/(2*a);
	//x2 = (-b - sqrt(p))/(2*a);

	//输出
	//printf("x1=%f,x2=%f\n",x1,x2);
//}

//变量的命名（有意义，规范）
//--int num=5
//if( num == 5 )和( 5 == num )的区别
//#include<stdio.h>
//int main()
//{	//判断一个数是否为奇数
//	//输入
//	int num = 0;
//	scanf_s("%d",&num);
//	//判断
//	if (num % 2 == 1)
//		printf("奇数");
//	else
//		printf("偶数");
//
//	return 0;
//}

//1-100所有的奇数
//#include<stdio.h>
//int main()
//{
//	int num = 1;
//	while (num >= 1 && num <= 100)
//	{
//		if (num % 2 == 1)
//			printf("%d ", num);
//		num++;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	/*int day = 0;
//	scanf_s("%d", &d);
//	if (1 == day);
//	printf("星期一");
//	else if (2 == day);
//	printf("星期二");*/
//
//	int day = 0;
//	scanf_s("%d",&day);
//	switch (day)//day()是整型
//	{
//	case 1://case后面是常量整型
//			printf("星期一\n");
//			break;
//	case 2:
//			printf("星期二\n");
//			break;
//	case 3:
//			printf("星期三\n");
//			break;
//	case 4:
//			printf("星期四\n");
//			break;
//	}
//
//	return 0;
//}

//switch语句---判断语句
//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf_s("%d",&day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("上班");
//		break;
//	case 6:
//	case 7:
//		printf("爽爽爽");
//		break;
// default://default子句
//		printf("选择错误");
//		break;
//	}
//
//	return 0;
//}

//循环语句（for while do...while）
//耐心一点，好吗？		理清循环顺序，梳理程序运行规律。
//#include<stdio.h>
//int main()
//{
//	int num = 1;
//	while (10 >= num)//切记语句后面别加 ';' !!!
//	{	
//		num++;
//		if (5 == num)
//			continue;//continue会跳过本次循环的后续代码，返回判断部分，进行下一循环の判断
//					//break用于永久终止循环
//		printf("%d ",num);
//	}
//	return 0;
//}

//int main()
//{
//	//EOF;//end of file--代表（-1），如果用char类型放不下，故用int类型
//	//int ch = getchar();
//	//printf("%c\n", ch);//表示方法1
//	//prtchar(ch);//表示方法2
//
//	char password[20] = { 0 };
//	printf("请输入密码:");
//	scanf_s("%s",password);
//
//	int ch = 0;
//	while (( ch = getchar () )!='\n')
//	{
//		;
//	}
//	printf("请确定密码(Y/N)：");
//	int ret = getchar();
//	if ('Y' == ret)
//	{
//		printf("Yes\n");
//	}
//	else
//		printf("No\n");
//	return 0;
//}

#include<stdio.h>
int main()
{

	return 0;
}