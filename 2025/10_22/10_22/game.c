#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0;i < row;i++)
	{
		int j = 0;
		for (j = 0;j < col;j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0;i < row;i++)
	{
		//打印数据
		//printf("%c  |%c  |%c  \n", board[i][0], board[i][1], board[i][2]);
		for (i = 0;i < row;i++)
		{
			int j = 0;
			//打印数据
			for (j = 0;j < col;j++)
			{
				printf("%c  ", board[i][j]);
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
			//打印分割行
			for (j = 0;j < col;j++)
			{
				if (j < col)
					printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
		//打印分割行
		if (i < row - 1)
			printf("---|---|---\n");
	}
}

//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0;i < row;i++)
//	{
//		printf("%c  |%c  |%c  \n", board[i][0], board[i][1], board[i][2]);
//		if (i < row - 1)
//			printf("---|---|---\n");
//	}
//}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	while(1)
	{
		printf("玩家下棋\n");
		int x = 0;
		int y = 0;
		printf("请输入坐标：>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x-1][y-1] == ' ')
			{
				board[x-1][y-1] = '*';
				break;
			}
			else
			{
				printf("该位置已被占用，请重新输入\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
}

void ComputMove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋\n");

	int x = 0;
	int y = 0;

	while(1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0;i < row;i++)
	{
		int j = 0;
		for (j = 0;j < col;j++)
		{
			if(board[i][j] =' ');
			return 0;
		}
	}
	return 1;
}
//判断输赢
char Iswin(char board[ROW][COL], int row, int col)
{
	//行
	int i = 0;
	for (i = 0;i < row;i++)
	{
		if (board[i][0] == board[i][1] && board[i][2] == board[i][1] && board[i][1] != ' ')
		{
			return board[i][0];
		}
	}
	//列
	int j = 0;
	for (j = 0;j < row;j++)
	{
		if (board[0][j] == board[1][j] && board[0][j] == board[2][j] && board[0][j] != ' ')
		{
			return board[0][j];
		}
	}
	//对角线
	if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//没人赢
	if (IsFull(board, row, col))
	{
		return 'Q';
	}

	//游戏继续
	return 'C';
}

