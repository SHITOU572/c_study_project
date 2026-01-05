#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"

void menu()
{
	printf("*************************\n");
	printf("****** 0、退出游戏 ******\n");
	printf("****** 1、开始游戏 ******\n");
	printf("*************************\n");
}

void game()
{
	char board[ROW][COL] = { 0 };
	char ret ;
	//初始化棋盘
	InitBoard(board,ROW,COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);

	while(1)
	{
		//棋手下棋
		PlayerMove(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		{
			if (ret != 'C')
			{
				if (ret =='*')
				{
					printf("玩家赢了\n");
					DisplayBoard(board, ROW, COL);
				}
				else if (ret =='#')
				{
					printf("电脑赢了\n");
					DisplayBoard(board, ROW, COL);
				}
				else if (ret =='Q')
				{
					printf("平局\n");
					DisplayBoard(board, ROW, COL);
				}
				break;
			}
		}
		DisplayBoard(board, ROW, COL);

		ComputMove(board, ROW, COL);
		if (ret != 'C')
		{
			if (ret =='*')
			{
				printf("玩家赢了\n");
				DisplayBoard(board, ROW, COL);
			}
			else if (ret =='#')
			{
				printf("电脑赢了\n");
				DisplayBoard(board, ROW, COL);
			}
			else if (ret =='Q')
			{
				printf("平局\n");
				DisplayBoard(board, ROW, COL);
			}
			break;
		}
		DisplayBoard(board, ROW, COL);
	}
}
int main()
{
	srand((unsigned)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请输入(0/1)：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);

	return 0;
}