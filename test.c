//18.5.1
// Created by 86188 on 25-7-1.
//测试游戏的逻辑

#include "game.h"

void menu() {
    printf("***********************************\n");
    printf("*********  1.play 0.exit  *********\n");
    printf("***********************************\n");
}

void game() {
    char board[ROW][COL] = {0};
    //初始化棋盘
    InitBoard(board, ROW, COL);
    DisplayBoard(board, ROW, COL);
    //下棋
    while (1) {
        PlayerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        //判断输赢

        ComputerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        //判断输赢
    }
}

int main() {
    SetConsoleOutputCP(65001);
    srand((unsigned int) time(NULL));                          //设置随机数的生成起点的
    int input = 0;
    do {
        menu();                                                 //打印菜单
        printf("请选择:>");
        scanf_s("%d", &input);
        switch (input) {
            case 1:
                game();
                break;
            case 0:
                printf("退出游戏");
                break;
            default:
                printf("选择错误！\n");
                break;
        }

    } while (input);
    return 0;
}

