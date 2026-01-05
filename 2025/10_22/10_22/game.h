#pragma once
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3

//初始化棋盘
void InitBoard(char board[ROW][COL],int row,int col);

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);

//用户下棋
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑下棋
void ComputMove(char board[ROW][COL], int row, int col);

//棋盘满了吗？
int IsFull(char board[ROW][COL], int row, int col);

//谁赢了？
//棋手--‘*’
//电脑--‘#’
//平局--‘Q’
//继续--‘C’
char Iswin(char board[ROW][COL], int row, int col);
