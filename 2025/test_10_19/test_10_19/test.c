#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#include"game.h"


//1、三子棋
void meun()
{
	printf("*******************\n");
	printf("*** 1、开始游戏 ***\n");
	printf("*** 0、退出游戏 ***\n");
	printf("*******************\n");
}

void game()
{
	char arr[ROW][COL] = { 0 };

	//初始化棋盘
	qi_pan(arr, ROW, COL);
	//打印棋盘
	qipan(arr,ROW,COL);

	//下棋
	while(1)
	{
		//用户行棋
		yonghu(arr[ROW][COL],ROW,COL);
		//打印棋盘
		qipan(arr[ROW][COL], ROW, COL);
		//赢？
		int ret1 = Isfull(arr[ROW][COL], ROW, COL);
		char ret2 = Iswin(arr[ROW][COL], ROW, COL);
		
		if (ret2 == '*')
			printf("玩家获胜！\n");
		else if (ret2 == '#')
			printf("电脑获胜！\n");
		else if (ret2 == 'Q'&&ret1==1)
			printf("平局。\n");
		



		////电脑行棋
		//void yonghu(char arr[ROW][COL], int row, int col);
		////打印棋盘
		//qipan(arr[ROW][COL], ROW, COL);
		////赢？
		//Iswin(arr[ROW][COL], ROW, COL);
	}

}

int main()
{
	srand((unsigned)time(NULL));
	int input = 0;
	do
	{
		meun();
		printf("请输入您的选择(1/0)：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("游戏开始。\n");
			game();
			break;
		case 0:
			printf("退出游戏。\n");
			break;
		default:
			printf("选择错误，请重新输入。\n");
			break;
		}

	} while (input);
	return 0;
}


////2、冒泡函数
//void bubble(int arr[], int sz)
//{
//	int i = 0;//几趟？
//	for (i = 0;i < sz-1;i++)
//	{
//		int j = 0;//一趟几次？
//		for (j = 0;j < sz -1-i;j++)
//		{
//			if(arr[j]>arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//
//}
//int main()
//{
//	int arr[] = { 2,3,76,34,87,98 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int z = 0;
//
//	bubble(arr,sz);
//
//	for (z = 0;z < sz;z++)
//	{
//		printf("%d ", arr[z]);
//	}
//
//	return 0;
//}