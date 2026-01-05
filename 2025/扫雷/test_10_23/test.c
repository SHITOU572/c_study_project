#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

//扫雷(最基础的功能)
//扩展
//1、标记功能(标记雷的位置)
//2、展开一片(展开函数+递归)
// 当排查(x,y)坐标时：|
// 改坐标不是'0'	  |
// 该坐标周围不是'0'  |===>展开一片
// 该坐标没有被排查过 |
//3、难度选择
void menu()
{
	printf("*****************\n");
	printf("**** 0、exit ****\n");
	printf("**** 1、play ****\n");
	printf("*****************\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };//存放 布置好的雷的信息
	char show[ROWS][COLS] = { 0 };//存放 排查出的雷的信息
	//初始化数组的内容为指定内容
	//mine 数组在没布置雷的时候，都为‘0’
	InitBoard(mine, ROWS, COLS,'0');
	//show 数组在没排查雷的时候，都是‘*’
	InitBoard(show, ROWS, COLS,'*');

	
	//设置雷
	SetMine(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//DisplayBoard(mine, ROW, COL);//-----雷咋能让你看到捏（滑稽）
	//排查雷
	FindMine(mine,show, ROW, COL);
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择(0/1):>");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出游戏\n");
			break;
		case 1:
			game();
			printf("扫雷\n");
			break;
		default:
			printf("输入错误,请重新输入\n");
			break;
		}
	} 
	while (input);

	return 0;
}