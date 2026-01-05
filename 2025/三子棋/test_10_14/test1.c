#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#include"game.h"



//实现三子棋
//test1.c(测试游戏的逻辑)

//game.c(游戏代码的实现)
//game.h(游戏代码的声明，符号定义)

void meun()
{
	printf("*****************\n");
	printf("***** 1.play ****\n");
	printf("***** 0.exit ****\n");
	printf("*****************\n");
}


void game()
{
	char board[ROW][COL] = { 0 };
	char ret;
	//初始化棋盘的函数
	InitBoard(board,ROW,COL);
	DispalyBoard(board,ROW,COL);
	//下棋
	while(1)
	{
		PlayerMove(board,ROW,COL);
		//判断输赢
		ret = Iswin(board, ROW, COL);
		{
			if (ret != 'C')
			{
				if (ret = '*')
				{
					printf("玩家赢了\n");
					DispalyBoard(board, ROW, COL);
				}
				else if (ret = '#')
				{
					printf("电脑赢了\n");
					DispalyBoard(board, ROW, COL);
				}
				else if (ret = 'Q')
				{
					printf("平局\n");
					DispalyBoard(board, ROW, COL);
				}
				break;
			}

			//if (ret = '*')
			//{
			//	printf("玩家赢了\n");
			//}
			//else if (ret = '#')
			//{
			//	printf("电脑赢了\n");
			//}
			//else if (ret = 'Q')
			//{
			//	printf("平局\n");
			//}
		}
		DispalyBoard(board, ROW, COL);

		ComputerMove(board, ROW, COL);
		//判断输赢
		if (ret != 'C')
		{
			if (ret = '*')
			{
				printf("玩家赢了\n");
				DispalyBoard(board, ROW, COL);
			}
			else if (ret = '#')
			{
				printf("电脑赢了\n");
				DispalyBoard(board, ROW, COL);
			}
			else if (ret = 'Q')
			{
				printf("平局\n");
				DispalyBoard(board, ROW, COL);
			}
			break;
		}
		DispalyBoard(board, ROW, COL);

		/*	if (ret = '*')
			{
				printf("玩家赢了\n");
			}
			else if (ret = '#')
			{
				printf("电脑赢了\n");
			}
			else if (ret = 'Q')
			{
				printf("平局\n");
			}*/
		//}
	}
}

int main()
{
	srand((unsigned)time(NULL));//设置随机数的生成起点
	int input = 0;
	do
	{
		meun();//打印菜单
		printf("请选择(0/1)：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋\n");
			game();//核心
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} 
	while (input);

	return 0;
}