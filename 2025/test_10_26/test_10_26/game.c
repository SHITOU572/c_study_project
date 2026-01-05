#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0;i < rows;i++)
	{
		int j = 0;
		for (j = 0;j < cols;j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("----------扫雷----------\n");
	for (j = 0;j <= col;j++)
	{
		printf("%d ", j);
	}
	printf("\n");

	for (i = 1;i <= row;i++)
	{
		printf("%d ", i);
		for (j = 1;j <= col;j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("----------扫雷----------\n");
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if(board[x][y]=='0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	int sum = 0;
	for (i = x - 1;i < x + 1;i++)
	{
		for (j = y - 1;j <= y + 1;j++)
		{
			sum += mine[i][j]-'0';
		}
	}
	return sum;
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while(win<row*col-EASY_COUNT)
	{
		printf("请输入坐标：>");//|==>注意这两玩意一定要放在循环内
		scanf("%d%d", &x, &y);  //|==>不然会一直重复你之前输入的值，陷入死循环
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] == '*')
			{
				if (mine[x][y] == '1')
				{
					printf("您被炸死了，游戏结束\n");
					break;
				}
				else
				{
					win++;
					int count = get_mine_count(mine,x,y)+'0';
					show[x][y] = count;
					DisplayBoard(show, ROW, COL);
				}
			}
			else
			{
				printf("坐标已被查找，请重新输入\n");
				DisplayBoard(show, ROW, COL);
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
			DisplayBoard(show, ROW, COL);
		}
		if (win == row*col-EASY_COUNT)
		{
			printf("WIN!\n");
			DisplayBoard(mine, ROW, COL);
		}
	}
}

