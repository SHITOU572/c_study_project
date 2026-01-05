#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#include"game.h"

void qi_pan(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0;i < ROW-1;i++)
	{
		int j = 0;
		for (j = 0;j < ROW-1;j++)
		{
			arr[i][j] = ' ';
		}
	}
}

void qipan(char arr[ROW][COL],int row,int col)
{
	int i = 0;
	for(i=0;i<row;i++)
	{
		if (i < row)
		{
			printf("%c  |%c  |%c  \n",arr[i][0],arr[i][1],arr[i][2]);
		}
		printf("---|---|---\n");
	}
}

void yonghu(char arr[ROW][COL], int row, int col)
{
	printf("玩家下棋\n");
	while(1)
	{
		int i = 0;
		int j = 0;
		printf("输入坐标：>");
		scanf("%d %d", &i, &j);
		if (i >= 1 && i <= 3 && j >= 1 && j <= 3)
		{
			if (arr[i][j] = ' ')
			{
				arr[i][j] = '*';
				break;
			}
			else
			{
				printf("坐标已被占用。请重新输入。\n");
				break;
			}
		}
		else
		{
			printf("输入错误！请重新输入。\n");
			break;
		}
	}
}

void diannao(char arr[ROW][COL], int row, int col)
{
	printf("电脑行棋：>\n");
	while(1)
	{
		int x = rand() % ROW;
		int y = rand() % COL;

		if (arr[x][y]!=' ')
		{
			arr[x][y] == '#';
			break;
		}
	}
}

int Isfull(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0;i < ROW;i++)
	{
		int j = 0;
		for (j = 0;j < ROW;j++)
		{
			if (arr[i][j] != ' ')
				return 1;
		}
	}
		return 0;
}

char Iswin(char arr[ROW][COL], int row, int col)
{
	{
		int i = 0;
		//行
		for (i = 0;i < ROW;i++)
		{
			if (arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2] && arr[i][0] != ' ')
				return arr[i][0];
		}
		//列
		int j = 0;
		for (j = 0;j < COL;j++)
		{
			if (arr[0][j] == arr[1][j] && arr[0][j] == arr[2][j] && arr[0][j] != ' ')
				return arr[0][j];
		}
		//斜
		if (arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2] && arr[1][1] != ' ' || arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0] && arr[1][1] != ' ')
			return arr[1][1];
	}
		return 'C';
}
