//18.5.2、扫雷游戏
// Created by 86188 on 25-7-5.
//游戏代码的实现

//#include "game1.h"
//
//void Initboard(char board[ROWS][COLS], int rows, int cols, char set)
//{
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            board[i][j] = set;
//        }
//    }
//}
//
//void DisPlayBoard(char board[ROWS][COLS], int row, int col)
//{
//    printf("-------扫雷游戏------\n");
//    // 打印列号（从0开始）
//    for (int j = 0; j <= col; j++)
//    {
//        printf("%d ", j);
//    }
//    printf("\n");
//
//    // 打印棋盘内容
//    for (int i = 1; i <= row; i++)
//    {
//        printf("%d ", i);  // 行号（添加额外空格对齐）
//        for (int j = 1; j <= col; j++)
//        {
//            printf("%c ", board[i][j]);
//        }
//        printf("\n");
//    }
//    printf("-------扫雷游戏------\n");
//}
//
//void SetMine(char board[ROWS][COLS],int row,int col)
//{
//    int count = EASY_COUNT;
//    while(count)
//    {
//        int x = rand() % row + 1;
//        int y = rand() % col + 1;
//
//        if(board[x][y] == '0')
//        {
//            board[x][y] = '1';
//            count--;
//        }
//    }
//}
//
//int get_mine_count(char board[ROWS][COLS],int x,int y)
//{
//    return (board[x-1][y]+
//    board[x-1][y-1]+
//    board[x][y-1]+
//    board[x+1][y-1]+
//    board[x+1][y]+
//    board[x+1][y+1]+
//    board[x][y+1]+
//    board[x-1][y-1] - 8*'0');
//}
//void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
//{
//    int x = 0;
//    int y = 0;
//    int win = 0;               //找到非雷的个数
//    while (win < row * col - EASY_COUNT)
//    {
//        printf("请输入要排查的坐标:>");
//        scanf("%d %d",&x,&y);
//        if(x >=1 && x <= row && y >= 1 && y <= col)
//        {
//            if(show[x][y] != '*')
//            {
//                printf("该坐标被排查过了，不能重复排查\n");
//            }
//            else
//            {
//                //如果是雷
//                if(mine[x][y] == '1')
//                {
//                    printf("很遗憾，游戏结束\n");
//                    DisPlayBoard(mine, ROW, COL);
//                    break;
//                }
//                    //如果不是雷，统计周围的坐标有几个雷
//                else
//                {
//                    win++;
//                    //统计mine数组中x,y坐标周围有几个雷
//                    int count = get_mine_count(mine,x,y);
//                    show[x][y] = count + '0';       //转换为数字字符
//                    DisPlayBoard(show, ROW, COL);
//                }
//            }
//
//        }
//        else
//        {
//            printf("输入坐标非法，请重新输入\n");
//        }
//    }
//    if(win == row * col - EASY_COUNT)
//    {
//        printf("恭喜你，排雷成功\n");
//        DisPlayBoard(mine, ROW, COL);
//    }
//}


//基础功能
//1.标记功能
//2.展开一片的功能

