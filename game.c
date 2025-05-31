//18.5.1
// Created by 86188 on 25-7-1.
//游戏代码的实现

#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            board[i][j] = ' ';
        }
    }
}

//第一个版本
//void DisplayBoard(char board[ROW][COL],int row,int col)
//{
//    for (int i = 0; i < row; i++)
//    {
//        //打印数据
//        printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
//        //打印分割信息
//        if(i < row-1)
//            printf("---|---|---\n");
//    }
//}

//第二个版本
void DisplayBoard(char board[ROW][COL], int row, int col) {
    for (int i = 0; i < row; i++) {
        //打印数据
        //printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
        for (int j = 0; j < col; j++) {
            printf(" %c ", board[i][j]);
            if (j < col - 1)
                printf("|");
        }
        printf("\n");
        //打印分割信息
        //printf("---|---|---\n");
        if (i < row - 1) {
            for (int j = 0; j < col; j++) {
                printf("---");
                if (j < col - 1)
                    printf("|");
            }
            printf("\n");
        }
    }
}

void PlayerMove(char board[ROW][COL], int row, int col) {
    int x = 0;
    int y = 0;
    printf("玩家下棋:>");
    while (1) {
        printf("请输入坐标:>");
        scanf_s("%d %d", &x, &y);
        //坐标范围合法性判断
        if (x >= 1 && x < row && y >= 1 && y < col) {
            if (board[x - 1][y - 1] == ' ') {
                board[x - 1][y - 1] = '*';
                break;
            } else {
                printf("坐标被占用，不能下棋，请选择其他位置\n");
            }
        } else {
            printf("坐标非法，请重新输入\n");
        }
    }
}

void ComputerMove(char board[ROW][COL], int row, int col) {
    printf("电脑下棋:>");
    int x = 0;
    int y = 0;
    while (1) {
        x = rand() % row;
        y = rand() % col;
        if (board[x][y] == ' ') {
            board[x][y] = '#';
            break;
        }
    }

}
