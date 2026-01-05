#pragma once

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define ROW 3
#define COL 3

//初始化棋盘
void qi_pan(char arr[ROW][COL], int row, int col);

//打印棋盘
void qipan(char arr[ROW][COL], int row, int col);

//选手行棋
void yonghu(char arr[ROW][COL], int row, int col);

//电脑行棋
void diannao(char arr[ROW][COL], int row, int col);

//是否满了？
int Isfull(char arr[ROW][COL], int row, int col);

//判断输赢
char Iswin(char arr[ROW][COL], int row, int col);
