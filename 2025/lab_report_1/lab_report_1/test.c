#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void menu()
{
	printf("*************************************\n");
	printf("*				主菜单				*\n");
	printf("*************************************\n");
	printf("\n");
	printf("***** 1、成绩输入 2、成绩删除   *****\n");
	printf("***** 3、成绩查询 4、成绩排序   *****\n");
	printf("***** 5、最高低分 6、统计平均分 *****\n");
	printf("***** 7、显示成绩 8、退出系统   *****\n");

}
int paixu(int x, int y, int z)
{
	if (x >= y && x >= z && y >= z)
		printf("%d %d %d", x, y, z);
	else if (x >= y && x >= z && z >= y)
		printf("%d %d %d", x, z, y);
	else if (x <= y && x >= z && z <= y)
		printf("%d % d % d", y,x, z);
	else if (x <= y && x <= z && z <= y)
		printf("%d %d %d", y,z, x);
	else if (x >= y && x <= z && z >= y)
		printf("%d %d %d", z,x, y);
	else
		printf("%d %d %d", z,y, x);
}
int max_min(int x, int y, int z)
{
	if (x >= y && x >= z && y >= z)
		printf("max=%d min=%d", x, z);
	else if (x >= y && x >= z && z >= y)
		printf("max=%d min=%d", x, y);
	else if (x <= y && x >= z && z <= y)
		printf("max=%d min=%d", y, z);
	else if (x <= y && x <= z && z <= y)
		printf("max=%d min=%d", y, x);
	else if (x >= y && x <= z && z >= y)
		printf("max=%d min=%d", z, y);
	else
		printf("max=%d min=%d", z, x);
}

	struct student
	{
		char name[3];
		int score;
	};

	FindName()
	{
	struct student stu[3];
	char findName[3];
	int i;
	for (i = 0;i < 3;i++)
	{
		scanf("%s %d", stu[i].name, &stu[i].score);
	}
	scanf("%s", findName);
	for (i = 0;i < 3;i++)
	{
		if (strcmp(stu[i].name, findName) == 0)
		{
			printf("%d %d\n", stu[i+1].score, stu[i + 2].score);
			break;
		}
	}

	}
int main()
{
	menu();

	while (1)
	{
		int input = 0;
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			printf("1、成绩输入\n");
			break;
		case 2:
			printf("2、成绩删除\n");
			break;
		case 3:
			printf("3、成绩查询\n");
			break;
		case 4:
			printf("4、成绩排序\n");
			break;
		case 5:
			printf("5、最高低分\n");
			break;
		case 6:
			printf("6、统计平均分\n");
			break;
		case 7:
			printf("7、显示成绩\n");
			break;
		case 8:
			printf("8、退出系统\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	}

	return 0;
}