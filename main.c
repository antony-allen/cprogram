//1、：printf的应用
//stdio.h位标准输入输出库
//#include <stdio.h>
//#include <windows.h>
////main函数是C语言的入口
//int main(void)
//{
//    SetConsoleOutputCP(65001);
//    printf("Hello, World!\n");
//    printf("你好吗，在哪里呢？\n");
//    return 0;
//}

//2、数据类型
//#include <stdio.h>
//int  main(void)
//{
//    printf("%zu\n",sizeof(char));    //1
//    printf("%zu\n",sizeof(short));   //2
//    printf("%zu\n",sizeof(int));     //4
//    printf("%zu\n",sizeof(long));    //4
//    printf("%zu\n",sizeof(long long)); //8
//    printf("%zu\n",sizeof(float));     //4
//    printf("%zu\n",sizeof(double));    //8
//    return 0;
//
//}

//#include <stdio.h>
//int main()
//{
//    int age = 20;
//    double price = 66.6;
//    printf("%d\n",age);
//    printf("%f\n",price);
//    return 0;
//}

//3、变量和常量

//#include <stdio.h>
//extern int a;                               //调用外部函数值
//int b = 10;                                //全局变量：作用域是整个工程
//int main()
//{
//    int num1 = 2;
//    int num2 = 0;
//    scanf("%d %d",&num1,&num2);
//    int sum = num1 + num2;
//    int age = 20;                         //年龄：局部变量
//    int high = 10;                       //身高
//    double price = 66.6;                //价格
//    printf("%d\n",age);
//    printf("%d\n",high);
//    printf("%f\n",price);
//    printf("%d\n",sum);
//    printf("%d\n",a);
//    return 0;
//}

//4、常量

//4-1字面常量，例如30、'a'字符常量，"hello"字符串常量
//4-2 const修饰的常变量
//#include <stdio.h>
//int main()
//{
//    const int a = 10;    //在C中，本质是变量，但是不能被修改。
//    //a = 20;
//    printf("%d\n",a);
//    return 0;
//}


//5、字符串

//#include <stdio.h>
//int main()
//{
//    char arr1[] = "abcdef";
//    char arr2[] = {'a','b','c','d','e','f','\0'};
//
//    printf("%s\n",arr1);
//    printf("%s\n",arr2);
//    return 0;
//}

//字符串长度

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char arr1[] = "abcdef";
//    char arr2[] = {'a','b','c','d','e','f','\0'};
//
//    int len = strlen("abc");
//    printf("%d\n",len);
//    printf("%llu\n",strlen(arr1));
//    printf("%llu\n",strlen(arr2));
//
//    return 0;
//}

//6、转义字符

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    printf("abcdef\n");
//    printf("%s\n","(are you ok ??)");
//
//    printf("%c\n",'\'');
//    printf("%c\n",'\130');                             //表示1-3位八进制数
//    printf("%c\n",'\x63');                            //表示1-2位十六进制数
//    printf("%d\n",strlen("c:\test\628\test.c"));
//    return 0;
//}

//7、注释

//8、选择语句和循环语句
//8.1 选择语句

//#include <stdio.h>
//#include <windows.h>
//
//int main(void) {
//    SetConsoleOutputCP(65001);  // 可选：如果不需要UTF-8可移除
//    int input = 0;
//    printf("加入比特\n");
//    printf("要好好学习吗(1/0)？\n");
//
//    // 修正scanf_s格式字符串
//    scanf_s("%d", &input);
//
//    if (input == 1) {
//        printf("好offer\n");
//    } else {
//        printf("卖红薯\n");
//    }
//    return 0;
//}

//8.2 循环语句

//#include <stdio.h>
//#include <windows.h>
//int main(void)
//{
//    SetConsoleOutputCP(65001);
//    int line = 0;
//    printf("加入比特\n");
//
//    while (line < 20000)
//    {
//        printf("写代码：%d\n",line);
//        line ++;
//    }
//    if (line >= 20000)
//    {
//        printf("好offer\n");
//
//    }
//    else
//    {
//        printf("继续加油！\n");
//    }
//    return 0;
//
//}

//9、函数

//#include <stdio.h>
//
//int Add(int x,int y)
//{
//    int z = 0;
//    z = x + y;
//    return  z;
//}
//int  main(void)
//{
//    int n1 = 0;
//    int n2 = 0;
//    scanf("%d %d",&n1,&n2);
//    int sum = Add(n1,n2);
//    printf("%d\n",sum);
//    return 0;
//}

//10、数组

//#include <stdio.h>
//int main(void)
//{
//    int arr[] = {0,1,2,3,4,5,6,7,8,9};
//
//   // printf("%d\n",arr[8]);
//    int i = 0;
//    while ( i < 10 )
//    {
//        printf("%d ",arr[i]);
//        i++;
//    }
//    printf("\n");
//    return 0;
//}

//作业1：打印飞机
//#include <stdio.h>
//int main(void)
//{
//    printf("     **\n");
//    printf("     **\n");
//    printf("************\n");
//    printf("************\n");
//    printf("    *  *\n");
//    printf("    *  *\n");
//    return 0;
//}

//作业2
//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//    char arr[] = {'b','i','t'};
//    printf("%d\n",strlen(arr));  //输出是一个随机值，字符串中没有"\0"结束标志
//    return 0;
//}

//初始化数组
//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//    int arr[10] = {0};
//    for (int i = 0; i < 10; i++)
//    {
//        printf("%d ",arr[i]);
//
//    }
//    printf("\n");
//    return 0;
//}


//求两个数的较大值

//#include <stdio.h>
//int max(int x,int y)
//{
//    if (x > y)
//    {
//        return x;
//    }
//
//    else if (x < y)
//    {
//        return y;
//    }
//    else
//    {
//        return x;
//    }
//}
//int main()
//{
//   int a = 0;
//   int b = 0;
//   scanf_s("%d %d",&a,&b);
//   int r = 0;
//   r = max(a,b);
//   printf("%d\n",r);
//   return 0;
//}

//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//    SetConsoleOutputCP(65001);
//    int  x = 0;
//    scanf_s("%d",&x);
//    int y = 0;
//    if ( x < 0 )
//    {
//        y = 1;
//    }
//    else if ( x == 0 )
//    {
//        y = 0;
//    }
//    else
//    {
//        y = -1;
//
//    }
//    printf("%d\n", y);
//    return 0;
//}


//11、操作符
//11.1 除法和取模
//#include <stdio.h>
//int main(void)
//{
//    int a = 7 / 2;                 //打印商的值，两端有一个数是浮点数，就执行浮点数的除法。
//    printf("%d\n",a);
//    int b = 7 % 2;                //打印余数,取模的操作数都是整数
//    printf("%d\n",b);
//    return 0;
//}


//11.2 赋值操作符
//#include <stdio.h>
//int main(void)
//{
//    int a = 0;                          //初始化
//    a = 20;                           //赋值
//
//    a = a + 3;
//    a += 3;
//
//    a = a -3;
//    a -= 3;
//
//    return 0;
//}


//11.3 单目操作符：只有一个操作数的操作符,0表示假。非0表示真。
//#include <stdio.h>
//int main(void)
//{
//    int flag = 0;
//    if (!flag)                           //!表示取反
//    {
//        printf("hehe\n");
//    }

//    int a = -10;
//    int b = -a;
//    printf("%d\n",b);
//    return 0;
//}


//sizeof 是单目运算符
//#include <stdio.h>
//int  main(void)
//{
//    int a = 9;
//    printf("%d\n",sizeof(a));
//    printf("%d\n",sizeof(int));
//    printf("%d\n",sizeof a);


//    int arr[10] = {0};
//    printf("%d\n",sizeof(arr));                     //40，计算整个数组的大小。单位是字节。
//    printf("%d\n",sizeof(arr[0]));                 //4，计算数组第一个元素的大小。
//    printf("%d\n",sizeof(arr)/sizeof(arr[0]));    //数组中元素的个数
//
//
//    return 0;
//}

// 自增自减运算符
//#include <stdio.h>
//int main(void)
//{
//    int a = 10;
//    int b = a++;
//    printf("%d\n",a);
//    printf("%d\n",b);


//    int a = 10;
//    int c = ++a;
//    printf("%d\n",a);
//    printf("%d\n",c);
//
//    return 0;
//}

//()强制类型转换
//#include <stdio.h>
//int main()
//{
//    int a  = (int)3.1415;
//    printf("%d\n",a);
//    return 0;
//}

//11.4 关系操作符
//11.5 逻辑运算符 &&：逻辑与，意为并且      ||：逻辑或，意为或者
//#include <stdio.h>
//int main(void)
//{
//    int a = 0;
//    int b = 20;
//    if ( a || b )
//    {
//        printf("hehe\n");
//    }
//
//    return 0;
//}

//11.6 条件操作符
//#include <stdio.h>
//int main(void)
//{
//    int a = 10;
//    int b = 20;
//    int r = a > b? a : b;
//    printf("%d\n",r);
//    return 0;
//}

//11.7 逗号表达式:从左到右依次计算，整个表达式的结果是最后一个表达式的结果。
//#include <stdio.h>
//int main(void)
//{
//    int a = 10;
//    int b = 20;
//    int c = 0;
//    //       c = 8      a = 28      c = 5
//    int d = (c = a -2 , a = b + c , c - 3);
//    printf("%d\n",d);
//    return 0;
//}

//11.8 函数的调用操作符（）
//#include <stdio.h>
//
//int Add(int x,int y)
//{
//
//    return  x + y;
//}
//int  main(void)
//{
//
//    int sum = Add(2,5);                    //()不能省略
//    printf("%d\n",sum);
//    return 0;
//}

//12、关键字
//13、typedef：类型定义，类型重命名。
//13.1 typedef

//#include <stdio.h>
//typedef unsigned int uint;
//typedef struct Node
//{
//    int data;
//    struct Node* next;
//
//} Node;
//int main(void)
//{
//    unsigned int num = 0;
//    uint num2 = 1;
//    struct Node n;
//    Node n2;
//    return 0;
//}


//13.2 static
//13.2.1、修饰局部变量

//#include <stdio.h>
//void test()                               //void表示不要返回值
//{
//    static int a = 1;                   //static修饰局部变量，出了作用域，其值不销毁，本质上改变了变量的存储位置。
//    a++;
//    printf("%d ",a);
//}
//int main()
//{
//    int i = 0;
//    while( i < 10 )
//    {
//        test();
//        i++;
//    }
//    return 0;
//}

//13.2.2、修饰全局变量

//#include <stdio.h>
//extern int g_val;                                     //声明外部变量
//int main()
//{
//    printf("%d\n",g_val);
//    return 0;
//}


//13.3.3、修饰函数
//#include <stdio.h>
//extern int add(int x,int y);
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int sum = add(a,b);
//    printf("%d\n",sum);
//    return 0;
//}

//补充：register 寄存器

//#include <stdio.h>
//int main()
//{
//    register int num = 1;                             //建议num存储在寄存器中
//    printf("%d\n",num);
//    return 0;
//}

//define 定义常量和宏
//#include <stdio.h>
//#define add(x,y) ((x)+(y))
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int c = add(a,b);
//    printf("%d\n",c);
//    return 0;
//}


//14、指针
//14.1 内存与指针
//#include <stdio.h>
//int main()
//{
//    int a = 10;                                       //向内存申请4个字节
//    //printf("%p\n",&a);
//    int *p = &a;                                    //&为取地址操作符，p为指针变量，存放指针（地址）的变量就是指针变量，*p为解地址操作符，通过p中存放的地址，找到p指向的对象。
//    *p = 20;
//    printf("%p\n",p);
//    printf("%d\n",a);
//    char ch = 'w';
//    char *pc = &ch;
//    printf("%p\n",pc);
//    printf("%c\n",ch);
//    return 0;
//}

//14.2 指针变量的大小：取决于地址的大小，即一个地址存放需要多大的空间，32位机器上为4字节，64位机器上是8字节。

//#include <stdio.h>
//int  main()
//{
//    printf("%d\n",sizeof(char*));
//    printf("%d\n",sizeof(int*));
//    printf("%d\n",sizeof(short*));
//    printf("%d\n",sizeof(long*));
//    printf("%d\n",sizeof(long long*));
//    printf("%d\n",sizeof(float*));
//    printf("%d\n",sizeof(double*));
//    return 0;
//}


//15、结构体：把一些单一类型组合在一起。

//#include <stdio.h>
//#include <windows.h>
//struct stu
//{
//    char name[20];
//    int age;
//    char sex[10];
//    char tele[20];
//};
//void print(struct stu *ps)
//{
//    printf("%s %d %s %s\n",(*ps).name,(*ps).age,(*ps).sex,(*ps).tele);
//    printf("%s %d %s %s\n",ps->name,ps->age,ps->sex,ps->tele);
//}
//int main()
//{
//    SetConsoleOutputCP(65001);
//    struct stu s = {"张三",18,"男","18897559969"};
//    //printf("%s %d %s %s",s.name,s.age,s.sex,s.tele);
//    print(&s);
//    return 0;
//}

//作业1：计算两个整数a,b的整数商和余数。
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf_s("%d %d",&a,&b);
//    int c = 0;
//    int d = 0;
//    c = a / b;
//    d = a % b;
//    printf("%d %d\n",c,d);
//    return 0;
//}

//16、分支语句和循环语句。
//16.1语句
//16.2分支语句（选择结构）
//16.2.1 if语句

//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//    SetConsoleOutputCP(65001);
//    int age = 10;
//    if (age < 18)
//    {
//
//        printf("未成年\n");
//        printf("不能饮酒\n");
//    }
//    else
//    {
//        printf("成年\n");
//    }
//
//    return 0;
//}

//多分支

//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//    SetConsoleOutputCP(65001);
//    int age = 0;
//    printf("请输入年龄： ");
//    scanf_s("%d",&age);
//    if (age < 18)
//    {
//        printf("青少年\n");
//
//    }
//    else if ( age >= 18 && age < 28 )
//    {
//        printf("青年\n");
//    }
//    else if ( age >= 28 && age < 40)
//    {
//        printf("中年\n");
//    }
//    else if ( age >= 40 && age < 60)
//    {
//        printf("壮年\n");
//    }
//    else if ( age >= 60 && age < 100)
//    {
//        printf("老年\n");
//    }
//    else
//    {
//        printf("老寿星\n");
//    }
//    return 0;
//}

//悬空else
//上海贝尔实验室：林锐博士的书籍《高质量的C/C++编程》
//以下代码不够严谨，容易产生误解。

//#include <stdio.h>
//int main()
//{
//
//    int a = 0;
//    int b = 2;
//    if( a == 1)
//            if (b == 2)
//                printf("hehe\n");
//    else
//        printf("haha\n");
//
//}


//判断一个数是否为奇数
//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//    SetConsoleOutputCP(65001);
//    int a = 0;
//    scanf_s("%d",&a);
//    if ( a % 2 == 1)
//    {
//        printf("a是奇数\n");
//    }
//    else
//    {
//        printf("a是偶数\n");
//    }
//    return 0;
//}

//输出1-100的奇数
//for循环实现

//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//    SetConsoleOutputCP(65001);
//    for (int i = 1; i <= 100 ; i++)
//    {
//        if( i % 2 == 1)
//            printf("%d ",i);
//    }
//    printf("\n");
//    return 0;
//}

//while循环实现

//#include <stdio.h>
//#include <windows.h>
//
//int main()
//{
//    SetConsoleOutputCP(65001); // 设置控制台输出编码为 UTF-8
//
//    int i = 1; // 初始化循环变量
//
//    while (i <= 100) // while 循环条件
//    {
//        if (i % 2 == 1) // 检查是否为奇数
//            printf("%d ", i);
//
//        i++; // 更新循环变量
//    }
//    printf("\n");
//    return 0;
//}

//16.2.1 switch语句
//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//    SetConsoleOutputCP(65001);
//    int day = 0;
//    scanf_s("%d",&day);
//    switch (day)
//    {
//        case 1:
//            printf("星期一\n");
//            break;
//        case 2:
//            printf("星期二\n");
//            break;
//        case 3:
//            printf("星期三\n");
//            break;
//        case 4:
//            printf("星期四\n");
//            break;
//        case 5:
//            printf("星期五\n");
//            break;
//        case 6:
//            printf("星期六\n");
//            break;
//        case 7:
//            printf("星期日\n");
//            break;
//    }
//    return 0;
//}

//如果1-5输出“weekday”，6-7输出"weekend",巧用case.

//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//    SetConsoleOutputCP(65001);
//    int day = 0;
//    scanf_s("%d",&day);
//    switch (day)
//    {
//        case 1:
//
//        case 2:
//
//        case 3:
//
//        case 4:
//
//        case 5:
//            printf("weekday\n");
//            break;
//        case 6:
//
//        case 7:
//            printf("weekend\n");
//            break;
//    }
//    return 0;
//}

//16.2.1、default子句
//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//    SetConsoleOutputCP(65001);
//    int day = 0;
//    scanf_s("%d",&day);
//    switch (day)
//    {
//        case 1:
//        case 2:
//        case 3:
//        case 4:
//        case 5:
//            printf("weekday\n");
//            break;
//        case 6:
//        case 7:
//            printf("weekend\n");
//            break;
//        default:
//            printf("输入错误\n");
//            break;
//    }
//    return 0;
//}


//练习
//#include <stdio.h>
//int main()
//{
//    int n = 1;
//    int m = 2;
//    switch (n) {
//        case 1:
//            m++;
//        case 2:
//            n++;
//        case 3:
//            switch (n)
//            {
//                case 1:
//                    n++;
//                case 2:
//                    m++;
//                    n++;
//                    break;
//            }
//        case 4:
//            m++;
//            break;
//        default:
//            break;
//    }
//
//    printf("m=%d n=%d",m,n);
//
//    return 0;
//
//}


