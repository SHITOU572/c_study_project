#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void menu()
{
	printf("*********************\n");
	printf("****** 0、exit ******\n");
	printf("****** 1、game ******\n");
	printf("*********************\n");
}

void game()
{
	char show[ROWS][COLS] = { 0 };
	char mine[ROWS][COLS] = { 0 };
	//初始化
	InitBoard(show, ROWS, COLS, '*');
	InitBoard(mine, ROWS, COLS, '0');
	//打印棋盘？
	DisplayBoard(show, ROW, COL);
	//设置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//查找雷
	FindMine(mine, show, ROW, COL);
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择(0/1)：>");
		scanf("%d", &input);
		switch(input)
		{
			case 0:
			{
				printf("退出游戏\n");
				break;
			}
			case 1:
			{
				printf("扫雷\n");
				game();
				break;
			}
			default:
				printf("输入错误，请重新输入\n");
		}
	} 
	while (input);

	return 0;
}