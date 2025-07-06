//18.5.2、扫雷游戏
// Created by 86188 on 25-7-5.
//测试游戏的逻辑

//#include "game1.h"
//
//void menu()
//{
//    printf("***************************\n");
//    printf("*******    1.play   *******\n");
//    printf("*******    0.exit   *******\n");
//    printf("***************************\n");
//}
//
//void game()
//{
//    char mine[ROWS][COLS];   // 存放布置雷的信息
//    char show[ROWS][COLS];  // 排查雷的信息显示给用户
//
//    // 初始化棋盘
//    Initboard(mine, ROWS, COLS, '0');   // 雷区初始化为'0'
//    Initboard(show, ROWS, COLS, '*');  // 显示区初始化为'*'
//
//    //设置雷
//    SetMine(mine,ROW,COL);
//
//    // 显示棋盘（调试时可查看mine，正式游戏应隐藏）
//    //printf("===== 雷区布局（调试用）=====\n");
//    //DisPlayBoard(mine, ROW, COL);
//
//    printf("\n===== 玩家视图 =====\n");
//    DisPlayBoard(show, ROW, COL);
//    //排查雷
//    FindMine(mine,show,ROW,COL);
//
//}
//
//int main()
//{
//    SetConsoleOutputCP(65001);  // 设置控制台编码
//    int input = 0;
//    //设置随机数的生成起点
//    srand((unsigned int)time(NULL));
//
//    do
//    {
//        menu();
//        printf("请选择:>");
//        scanf("%d", &input);
//
//        switch (input)
//        {
//            case 1:
//                game();
//                break;
//            case 0:
//                printf("退出游戏\n");
//                break;
//            default:
//                printf("选择错误\n");
//                break;
//        }
//    } while (input);
//
//    return 0;
//}


