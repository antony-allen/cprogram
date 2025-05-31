//18.5.1
// Created by 86188 on 25-7-1.
//游戏代码的声明（函数的声明、符号定义）
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

#ifndef CPROGRAM_GAME_H
#define CPROGRAM_GAME_H
#define ROW 3
#define COL 3

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑下棋
//找没有下棋的位置随机下棋
void ComputerMove(char board[ROW][COL], int row, int col);


#endif //CPROGRAM_GAME_H


