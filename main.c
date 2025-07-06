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


//16.3 循环语句
//16.3.1、while循环
//打印 1-10十个数字
//break的使用：用于永久的终止循环
//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//    SetConsoleOutputCP(65001);
//    int i = 1;
//    while ( i <= 10 )
//    {
//        if ( i == 5 )
//        {
//            break;
//        }
//        printf("%d ",i);
//        i++;
//    }
//    printf("\n");
//
//    return 0;
//}

//continue的使用：跳过本次循环后面的代码，直接去判断部分，进行下一次循环的判断。
//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//    SetConsoleOutputCP(65001);
//    int i = 1;
//    while ( i <= 10 )
//    {
//        i++;
//        if ( i == 5 )
//        {
//            continue;
//        }
//        printf("%d ",i);
//
//    }
//    printf("\n");
//
//    return 0;
//}

//getchar
//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//    SetConsoleOutputCP(65001);
//    int ch = 0;
//    while ( (ch = getchar()) != EOF )                      //清理输入缓冲区
//    {
//        putchar(ch);
//    }
//
//    return 0;
//}

//举例说明

//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//    SetConsoleOutputCP(65001);
//    char passeord[20] = { 0 };
//    printf("请输入密码:>");
//    scanf("%s",passeord);
//    //getchar();     //读取了\n
//    int ch = 0;
//    while ( (ch = getchar()) != '\n' )
//    {
//        ;
//    }
//    printf("请确认密码(Y/N):>");
//    int ret = getchar();
//    if ( ret == 'Y')
//    {
//        printf("yes\n");
//    }
//    else
//    {
//        printf("no\n");
//    }
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    char ch = '\0';
//    while ( (ch = getchar()) != EOF )
//    {
//        if(ch < '0' || ch > '9')                //只打印数字字符
//            continue;
//        putchar(ch);
//    }
//    return 0;
//}


//作业1：转换ASCII码
//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//    SetConsoleOutputCP(65001);
//    int arr[] = {73,32,99,97,110,32,100,111,32,105,116,33};
//    for (int i = 0; i < 11; i++)
//    {
//        printf("%c",arr[i]);
//    }
//    printf("\n");
//    return 0;
//}


//作业2：出生日期输入输出
//#include <stdio.h>
//int main()
//{
//    int year = 0;
//    int month = 0;
//    int date = 0;
//    scanf("%4d%2d%2d",&year,&month,&date);
//
//    printf("year=%d\n",year);
//    printf("month=%02d\n",month);
//    printf("date=%02d\n",date);
//
//    return 0;
//}

//作业3：学生信息输入输出

//#include <stdio.h>
//int main()
//{
//    int id = 0;
//    float c = 0.0f;
//    float math = 0.0f;
//    float eng = 0.0f;
//    scanf("%d;%f,%f,%f",&id,&c,&math,&eng);
//    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.\n",id,c,math,eng);
//    return 0;
//}

//作业4：printf的返回值
//#include <stdio.h>
//int main()
//{
//    int n =printf("Hello world!");
//    printf("\n%d\n",n);
//    return 0;
//
//}

//#include <stdio.h>
//int sum(int a)
//{
//    int c = 0;
//    static int b = 3;
//    c += 1;
//    b += 2;
//    return (a + b +c);
//}
//int main()
//{
//    int a = 2;
//    for (int i = 0; i < 5; i++)
//    {
//        printf("%d, ",sum(a));
//    }
//    return 0;
//}


//作业：程序设计基础
//#include <stdio.h>
//
//int main()
//{
//    printf("printf(\"Hello world!\\n\");");
//    printf("\ncout<<\"Hello world!\"<<endl;\n");
//    return 0;
//}

//作业：找出4个数字中的最大数

//#include <stdio.h>
//int main()
//{
//    int arr[4] = {0};
//    int i = 0;
//    while ( i < 4 )
//    {
//        scanf("%d",&arr[i]);
//        i++;
//    }
//    int max = arr[0];
//    i = 1;
//    while ( i < 4 )
//    {
//        if ( arr[i] > max )
//        {
//            max = arr[i];
//        }
//        i++;
//    }
//    printf("%d\n",max);
//    return 0;
//}


//作业：计算球体的体积
//#include <stdio.h>
//int main()
//{
//    double r = 0.0;
//    double V = 0.0;
//    scanf("%lf",&r);
//    V = 4/3.0*r*r*r*3.1414926;
//    printf("%.3lf",V);
//    return 0;
//}

//作业：计算BMI指数
//#include <stdio.h>
//int main()
//{
//    int weight = 0;
//    int high = 0;
//    scanf("%d %d",&weight,&high);
//    float bmi = weight / (high / 100.0) / (high / 100.0);
//    printf("%.2f\n",bmi);
//    return 0;
//}


//16.3.2、for循环
//打印1-10
//#include <stdio.h>
//int main()
//{
//    for (int i = 1; i <= 10; i++)
//    {
//        if (i == 5)
//            break;
//        printf("%d ",i);
//    }
//    return 0;
//}

//用数组打印
//#include <stdio.h>
//int main()
//{
//    int arr[] = {1,2,3,4,5,6,7,8,9,10};
//    int i = 0;
//    for ( i = 0; i < 10; i++ )
//    {
//        printf("%d ",arr[i]);
//    }
//    return 0;
//}

//16.3.3、do while循环

//#include <stdio.h>
//int main()
//{
//    int i = 1;
//    do
//    {
//
//        if ( i == 5 )
//            continue;
//        printf("%d ",i);
//        i++;
//    } while ( i <= 10 );
//    printf("\n");
//    return 0;
//}

//16.3.4、练习
//16.3.4.1、计算n的阶乘
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d",&n);
//    int ret = 1;
//    for (int i = 1; i <= n; i++)
//    {
//        ret = ret * i;
//
//    }
//    printf("ret=%d\n",ret);
//    return 0;
//}

//16.4.2、计算1!+2!+3!+...+10!

//#include <stdio.h>
//
//int main() {
//    int n = 10;
//    int i = 1;
//    int ret = 1;
//    int sum = 0;
//    for (i = 1; i <= n; i++)
//    {
//        ret = ret * i;
//        sum = sum + ret;
//    }
//    printf("%d\n", sum);
//    return 0;
//}

//16.4.3、在一个有序数组中查找某个数
//方法一

//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//    SetConsoleOutputCP(65001);
//    int arr[] = {1,2,3,4,5,6,7,8,9,10};
//    int k = 17;
//    int i = 0;
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    for ( i = 0; i < sz; i++)
//    {
//        if ( arr[i] == k )
//        {
//            printf("找到了，下标是：%d\n",i);
//            break;
//        }
//    }
//    if  ( i == sz )
//        printf("找不到\n");
//
//    return 0;
//}

//方法二：用二分法查找
//#include <stdio.h>
//#include <windows.h>
//int  main()
//{
//    SetConsoleOutputCP(65001);
//    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    int k = 7;
//    int i = 0;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int left = 0;
//    int right = sz - 1;
//    while ( left <= right )
//    {
//        //int mid = (left + right) / 2;
//        int mid = left + ( right - left ) / 2;
//        if ( arr[mid] < k )
//        {
//            left = mid + 1 ;
//        }
//        else if ( arr[mid] > k )
//        {
//            right = mid - 1;
//        }
//        else
//        {
//            printf("找到了，下标是：%d\n",mid);
//            break;
//        }
//
//    }
//    if ( left > right )
//    {
//        printf("找不到\n");
//    }
//    return 0;
//}

//16.4.4、演示多个字符从两端移动，向中间汇聚。
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <windows.h>
//int main()
//{
//    SetConsoleOutputCP(65001);
//    char arr1[] = "welcome to bit !!!!";
//    char arr2[] = "###################";
//
//    int left = 0;
//    int right = strlen(arr1) - 1;
//
//    while ( left <= right )
//    {
//        arr2[left]   =  arr1[left];
//        arr2[right]  =  arr1[right];
//        printf("%s\n",arr2);
//        Sleep(1000);                 //休眠1秒
//        system("cls");                 //清空屏幕
//        left++;
//        right--;
//
//    }
//
//    return 0;
//}

//16.4.5、模拟用户登录场景，只能登录3次。
//（只允许用户输入3次密码，如果密码正确，提示登录成功；三次输入错误，退出程序）。
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//int main()
//{
//    SetConsoleOutputCP(65001);
//    int i = 0;
//    char password[20] = {0};
//    for ( i = 0; i < 3; i++ )
//    {
//        printf("请输入密码:>");
//        scanf("%s",password);
//        if ( strcmp(password,"abcdef") == 0 )
//        {
//            printf("登录成功\n");
//            break;
//        }
//        else
//        {
//            printf("密码错误\n");
//        }
//    }
//    if ( i == 3 )
//        printf("三次密码均输入错误，退出程序\n");
//    return 0;
//}

//16.4.6、猜数字游戏：电脑产生一个随机数（1-100）
//猜数字：比随机数大，反馈猜大了；比随机数小，反馈猜小了，直到猜对，结束程序。
//#include <stdio.h>
//#include <windows.h>
//#include <stdlib.h>
//#include <time.h>
//
//void menu() {
//
//    printf("############################\n");
//    printf("##########   1.pay   #######\n");
//    printf("##########   0.exit  #######\n");
//    printf("############################\n");
//
//}
//
//void game() {
//    int guess = 0;
//    int ret = rand() % 100 + 1;
//    //printf("%d\n",ret);
//    while (1) {
//        printf("请猜数字:>");
//        scanf("%d", &guess);
//        if (guess < ret) {
//            printf("猜小了\n");
//        } else if (guess > ret) {
//            printf("猜大了\n");
//        } else {
//            printf("恭喜你，猜对了\n");
//            break;
//        }
//    }
//}
//
//int main() {
//    SetConsoleOutputCP(65001);
//    int input = 0;
//    srand((unsigned int) time(NULL));
//    do {
//        menu();
//        printf("请选择:>");
//        scanf("%d", &input);
//        switch (input) {
//            case 1:
//                game();                       //猜数字的整个逻辑
//                break;
//            case 0:
//                printf("退出游戏\n");
//                break;
//            default:
//                printf("选择错误，重新选择！\n");
//                break;
//        }
//    } while (input);
//    return 0;
//}

//16.5 goto语句
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//int main()
//{
//    SetConsoleOutputCP(65001);
//    char input[20] = {0};
//    system("shutdown -s -t 60");
//    again:
//    printf("请注意，你的电脑在60秒内关机，如果输入：我是猪，就取消关机。\n");
//    scanf("%s",input);
//    if( strcmp(input,"我是猪") == 0 )
//    {
//        system("shutdown -a");
//    }
//    else
//    {
//        goto again;
//    }
//    return 0;
//}


//17、 函数
//17.1 函数的定义
//17.2 函数的分类
//17.2.1、库函数
//复制字符串
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char arr1[20] = { 0 };
//    char arr2[]  = "hello bit";
//
//    strcpy(arr1,arr2);
//    printf("arr1 = %s\n",arr1);
//    return 0;
//}

//内存设置
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char arr[20] = "hello world";
//    memset(arr,'x',5);
//    printf("%s\n",arr);
//    return 0;
//}

//17.2.2、自定义函数
//返回两个数的较大值

//#include <stdio.h>
//int get_max(int x,int y)
//{
//    return ( x > y ? x : y );
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d",&a,&b);
//    int m = get_max(a,b);
//    printf("%d\n",m);
//    return 0;
//}


//交换两个整型变量的值

//#include <stdio.h>
//#include <windows.h>
//void Swap( int *px,int *py )                    //形式参数，当实参传递给形参的时候，形参的改变不影响实参的改变。
//{                                              //当实参传递给形参的时候，形参是实参的一份临时拷贝。
//    int z = *px;
//    *px = *py;
//    *py = z;
//}
//int main()
//{
//    SetConsoleOutputCP(65001);
//    int a = 0;
//    int b = 0;
//    scanf("%d %d",&a,&b);
//    printf("交换前：a = %d b = %d\n",a,b);
//    Swap(&a,&b);                               //实参
//    printf("交换后：a = %d b = %d\n",a,b);
//    return 0;
//}

//17.3、函数的参数
//17.3.1、实际参数
//17.3.2、形式参数

//#include <stdio.h>
//#include <windows.h>
//
//void Swap(int *px, int *py)                    //形式参数，当实参传递给形参的时候，形参的改变不影响实参的改变。
//{
//    int z = *px;
//    *px = *py;
//    *py = z;
//}
//
//int add(int x, int y)
//{
//    int z = 0;
//    z = x + y;
//    return z;
//}
//
//int main()
//{
//    SetConsoleOutputCP(65001);
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int c = add(a, b);
//    printf("交换前：a = %d b = %d\n", a, b);
//    Swap(&a, &b);                                                    //实参
//    printf("交换后：a = %d b = %d\n", a, b);
//    printf("c = %d\n", c);
//    return 0;
//}

//17.4、函数的调用
//17.4.1、传值调用
//17.4.2、传址调用

//#include <stdio.h>
//#include <windows.h>
//
//void Swap(int *px, int *py)                    //传址调用
//{
//    int z = *px;
//    *px = *py;
//    *py = z;
//}
//
//int add(int x, int y)                        //传值调用：对形参的改变不会影响实参。
//{
//    int z = 0;
//    z = x + y;
//    return z;
//}
//
//int main()
//{
//    SetConsoleOutputCP(65001);
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int c = add(a, b);
//    printf("交换前：a = %d b = %d\n", a, b);
//    Swap(&a, &b);                                                    //实参
//    printf("交换后：a = %d b = %d\n", a, b);
//    printf("c = %d\n", c);
//    return 0;
//}

//17.4.3、练习
//17.4.3.1、判断一个数是不是素数
//方法一
//#include <stdio.h>
//int main()
//{
//    int count = 0;
//    for (int i = 100; i <= 200; i++)
//    {
//        int flag = 1;                                       //是1，表示是素数。
//        for (int j = 2; j <= i-1; j++)
//        {
//            if( i % j == 0)
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if( flag == 1)
//        {
//            count++;
//            printf("%d ",i) ;
//        }
//    }
//    printf("\ncount = %d\n",count);
//    return 0;
//}

//方法二

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int count = 0;
//    for (int i = 101; i <= 200; i+=2)
//    {
//        int flag = 1;                                       //是1，表示是素数。
//        for (int j = 2; j <= sqrt(i); j++)
//        {
//            if( i % j == 0)
//            {
//                flag = 0;
//                break;
//            }
//        }
//        if( flag == 1)
//        {
//            count++;
//            printf("%d ",i) ;
//        }
//    }
//    printf("\ncount = %d\n",count);
//    return 0;
//}

//用函数实现以上功能

//#include <stdio.h>
//#include <math.h>
//int is_Prime( int n )
//{
//
//    for (int j = 2; j <= sqrt(n); j++)
//    {
//        if( n % j == 0)
//        {
//            return 0;
//        }
//    }
//    return 1;
//
//}
//int main()
//{
//    int count = 0;
//    for (int i = 101; i <= 200; i+=2)
//    {
//       if( is_Prime(i) )
//       {
//           count++;
//           printf("%d ",i);
//       }
//    }
//    printf("\ncount = %d\n",count);
//    return 0;
//}

//17.4.3.2、写一个函数，判断一年是不是闰年
//方法一

//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//    SetConsoleOutputCP(65001);
//    for ( int year = 1000; year <= 2000; year++ )
//    {
//         if( year % 4 == 0 )
//         {
//             if( year % 100 != 0)
//             {
//                 printf("%d ",year);
//             }
//         }
//          if( year % 400 == 0 )
//         {
//             printf("%d ",year);
//         }
//
//    }
//    return 0;
//}

//简化版本

//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//    SetConsoleOutputCP(65001);
//    for ( int year = 1000; year <= 2000; year++ )
//    {
//       if( ((year % 4 == 0)&&(year % 100 != 0))  || (year % 400 == 0) )
//       {
//           printf("%d ",year);
//       }
//    }
//    return 0;
//}

//用函数实现
//#include <stdio.h>
//#include <windows.h>
//int is_leap_year(int y)
//{
//    if( ((y % 4 == 0)&&(y % 100 != 0))  || (y % 400 == 0) )
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
//}
//int main()
//{
//    SetConsoleOutputCP(65001);
//    for ( int year = 1000; year <= 2000; year++ )
//    {
//        if( is_leap_year(year) )
//        {
//            printf("%d ",year);
//        }
//    }
//    return 0;
//}

//17.4.3.3、写一个函数，实现一个整型有序数组的二分查找

//#include <stdio.h>
//#include <windows.h>
//int binary_search(int arr[],int k,int sz)                    //数组传参实际上传递的是数组的首地址
//{                                                           //形参arr看上去是数组，实际上是指针
//    int left = 0;
//    int right = sz-1;
//    while( left <= right )
//    {
//        int mid = left + ( right - left ) / 2;
//        if( arr[mid] < k )
//        {
//            left = mid + 1;
//        }
//        else if( arr[mid] > k )
//        {
//            right = mid - 1;
//        }
//        else
//        {
//            return mid;
//        }
//    }
//    return -1;
//}
//int main()
//{
//    SetConsoleOutputCP(65001);
//    int arr[] = {1,2,3,4,5,6,7,8,9,10};
//    int k = 1;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int ret = binary_search(arr,k,sz);
//    if( ret == -1 )
//    {
//        printf("找不到\n");
//    }
//    else
//    {
//        printf("找到了，下标是：%d\n",ret);
//    }
//    return 0;
//}

//17.4.3.4、写一个函数，每调用一次，num增加1。

//#include <stdio.h>
//void add(int *p)
//{
//    (*p)++;
//}
//int main()
//{
//    int num = 0;
//    add(&num);
//    printf("%d\n",num);
//    add(&num);
//    printf("%d\n",num);
//    add(&num);
//    printf("%d\n",num);
//    add(&num);
//    printf("%d\n",num);
//    return 0;
//}

//17.5、函数的嵌套调用和链式访问
//17.5.1、函数的嵌套调用

//#include <stdio.h>
//void new_line()
//{
//    printf("hehe\n");
//}
//void three_line()
//{
//    for (int i = 0; i < 3; i++)
//    {
//        new_line();
//    }
//}
//int main()
//{
//    three_line();
//    return 0;
//}

//17.5.2、函数的链式访问

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    int len = strlen("abcdef");
//    printf("%d\n",len);
//    printf("%d\n", strlen("abcdef"));
//    printf("%d", printf("%d", printf("%d",43)));
//    return 0;
//}

//17.6、函数的声明和定义
//17.6.1、函数的声明
//17.6.2、函数的定义

//#include <stdio.h>
//int add(int x,int y);                                      //函数的声明
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d",&a,&b);
//    int sum = add(a,b);
//    printf("%d\n",sum);
//    return 0;
//}
//int add(int x,int y)                                //函数的定义
//{
//    return x + y;
//}


//#include <stdio.h>
//#include "add.h"
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d",&a,&b);
//    int sum = add(a,b);
//    printf("%d\n",sum);
//    return 0;
//}

//17.7、函数的递归
//17.7.1、函数的递归的定义
//17.7.2、递归的两个必要条件
//17.7.2.1、接收一个无符号整型，按顺序打印每一位。

//#include <stdio.h>
//int main()
//{
//    unsigned int num = 0;
//    scanf("%u",&num);
//    while(num)
//    {
//        printf("%d ",num % 10);
//        num /= 10;
//    }
//    return 0;
//}

//递归的实现

//#include <stdio.h>
//void print( unsigned int n )
//{
//    if( n > 9 )
//    {
//        print( n / 10 );
//    }
//    printf("%d ",n % 10);
//}
//int main()
//{
//    unsigned int num = 0;
//    scanf("%u",&num);
//    print(num);
//    return 0;
//}

//17.7.2.2、编写一个函数，不允许创建临时变量，求字符串长度。

//#include <stdio.h>
//#include <string.h>
//int my_strlen( char *str )
//{
//    int count = 0;                                       //计数，count是临时变量
//    while ( *str != '\0' )
//    {
//        count++;
//        str++;
//    }
//    return count;
//}
//int main()
//{
//    char arr[] = "abcdef";
//    int len = my_strlen(arr);
//    printf("%d\n",len);
//    return 0;
//}

//不创建临时变量，实现求字符串长度，用递归求解

//#include <stdio.h>
//
//int my_strlen( char *str )
//{
//    if( *str != '\0' )
//    {
//        return 1+ my_strlen( str + 1 );
//    }
//    else
//    {
//        return 0;
//    }
//}
//int main()
//{
//    char arr[] = "abcdef";
//    int len = my_strlen(arr);
//    printf("%d\n",len);
//    return 0;
//}


//17.7.3、递归与迭代

//17.7.3.1、求n的阶乘，用递归实现
//递归实现
//#include <stdio.h>
//int fac(int n)
//{
//    if( n <= 1 )
//    {
//        return 1;
//    }
//    else
//    {
//        return n*fac(n-1);
//    }
//}
//int main()
//{
//    int n = 0;
//    scanf("%d",&n);
//    int ret = fac(n);
//    printf("ret = %d\n",ret);
//    return 0;
//}

//迭代实现

//#include <stdio.h>
//int fac(int n)
//{
//    int ret = 1;
//    for (int i = 1; i <= n ; i++)
//    {
//        ret *= i;
//    }
//    return ret;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d",&n);
//    int ret = fac(n);
//    printf("ret = %d\n",ret);
//    return 0;
//}

//17.7.3.2、求斐波那契数列的第n项

//用递归实现
//#include <stdio.h>
//#include <windows.h>
//int count = 0;
//int fib(int n)
//{
//    if( n == 3)
//    {
//        count++;
//    }
//    if( n <= 2 )
//    {
//        return 1;
//    }
//    else
//    {
//        return fib(n-1)+fib(n-2);
//    }
//}
//int main()
//{
//    SetConsoleOutputCP(65001);
//    int n = 0;
//    scanf("%d",&n);
//    int ret = fib(n);
//    printf("ret = %d\n",ret);
//    printf("%d\n",count);
//    return 0;
//}

//用迭代实现
//#include <stdio.h>
//#include <windows.h>
//
//int fib(int n)
//{
//    if (n <= 2)  // 处理前两项
//        return 1;
//
//    int a = 1;
//    int b = 1;
//    int c = 0;
//    while (n >= 3)
//    {
//        c = a + b;  // 移除重复声明（去掉前面的 int）
//        a = b;
//        b = c;
//        n--;
//    }
//    return c;
//}
//
//int main()
//{
//    SetConsoleOutputCP(65001);
//    int n = 0;
//    scanf("%d", &n);
//    int ret = fib(n);
//    printf("ret = %d\n", ret);
//    return 0;
//}

//练习题，分支语句

//#include <stdio.h>
//int main()
//{
//    for (int i = 0; i < 10; i++)
//    {
//        if( i = 5 )                                //不是判断，是赋值。
//            printf("%d ",i);
//
//    }
//    return 0;
//}

//
//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//    SetConsoleOutputCP(65001);
//    int n = 0;
//    scanf("%d",&n);
//    switch (n)
//    {
//        case 1:
//            printf("1\n");
//            break;
//        case 2:
//            printf("2\n");
//            break;
//        default:
//            printf("呵呵\n");
//            break;
//    }
//    return 0;
//}

//写一个代码，将三个整数从大到小输出

//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf_s("%d %d %d",&a,&b,&c);
//    int tmp = 0;
//    if( a < b )
//    {
//        tmp = a;
//        a = b;
//        b = tmp;
//    }
//    if( a < c )
//    {
//        tmp = a;
//        a = c;
//        c = tmp;
//    }
//    if( b < c )
//    {
//        tmp = b;
//        b = c;
//        c = tmp;
//    }
//    printf("%d %d %d",a,b,c);
//    return 0;
//}


//用函数的方法实现

//#include <stdio.h>
//void swap(int *px,int *py)
//{
//    int tmp = *px;
//    *px = *py;
//    *py = tmp;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf_s("%d %d %d",&a,&b,&c);
//
//    if( a < b )
//    {
//        swap(&a,&b);
//    }
//    if( a < c )
//    {
//        swap(&a,&c);
//    }
//    if( b < c )
//    {
//       swap(&b,&c);
//    }
//    printf("%d %d %d",a,b,c);
//    return 0;
//}

//写一个代码，打印1~100之间所有3的倍数。

//#include <stdio.h>
//int main()
//{
//    int count = 0;
//    for (int i = 1; i <= 100; i++)
//    {
//        if( i % 3 == 0 )
//        {
//            count++;
//            printf("%d ",i);
//        }
//    }
//    printf("\n%d\n",count);
//    return 0;
//}

//给定两个数，打印两个数的最大公约数
//暴力求解算法

//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d",&a,&b);
//    int min = (a < b)? a : b;
//    int m = min;
//    while (1)
//    {
//       if(a % m == 0 && b % m == 0)                          //暴力求解，算法效率不够高。
//       {
//           break;
//       }
//       m--;
//    }
//    printf("%d\n",m);
//    return 0;
//}

//辗转相除法


//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf_s("%d %d",&a,&b);
//    while (c = a % b)
//    {
//       a = b;
//       b = c;
//    }
//    printf("%d\n",b);
//    return 0;
//}


//打印1000~2000之间的闰年

//打印100~200之间的素数

//判断以下代码的输出值

//#include<stdio.h>
//int main()
//{
//    int a = 0, b = 0;
//    for (a = 1, b = 1; a <= 100; a++)
//    {
//        if (b >= 20)  break;
//        if (b % 3 == 1)
//        {
//            b = b + 3;
//            continue;
//        }
//        b = b - 5;
//    }
//    printf("%d\n", a);
//    return 0;
//}

//编写一个程序，计算1~100中所有整数中，包含9的个数。

//#include <stdio.h>
//int main()
//{
//    int count = 0;
//    for (int i = 1; i <= 100; i++)
//    {
//        if(i % 10 == 9)
//        {
//            count++;                        //判断个位数是否为9
//        }
//        if(i / 10 == 9)
//        {
//            count++;                     //判断十位数是否为9
//        }
//    }
//    printf("count = %d\n",count);
//    return 0;
//}

//计算1/1-1/2+1/3-1/4+...+1/99-1/100的数值

//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    double sum = 0;
//    int flag = 1;
//    for ( i = 1; i <= 100; i++)
//    {
//        sum = sum + flag*(1.0 / i);
//        flag = -flag;
//    }
//    printf("%f\n",sum);
//    return 0;
//}

//求10个整数的最大值

//#include <stdio.h>
//int main()
//{
//    int arr[10] = { 0 };
//    for (int i = 0; i < 10; i++)
//    {
//        scanf_s("%d",&arr[i]);
//    }
//    int max = arr[0];
//    for (int i = 1; i < 10; i++)
//    {
//        if(arr[i] > max)
//        {
//            max = arr[i];
//        }
//
//    }
//    printf("%d\n",max);
//    return 0;
//}

//打印99乘法表

//#include <stdio.h>
//int main()
//{
//    for (int i = 1; i <= 9; i++)
//    {
//        for (int j = 1; j <= i; j++)
//        {
//            printf("%d*%d=%-2d ",i,j,i*j);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//18.数组：一组相同类型元素的集合
//18.1、一维数组的创建和初始化
//18.1.1、数组的创建

//#include <stdio.h>
//int main()
//{
//    int arr[10];
//    char ch[5];
//    double data[20];
//
//    return 0;
//}

//18.1.2、数组的初始化

//#include <stdio.h>
//int main()
//{
//    int arr[10] = {1,2,3};
//    int arr1[10] = {1,2,3,4,5,6,7,8,9,0};
//    int arr2[] = {1,2,3};
//
//    char ch1[10] = {'a','b','c'};
//    char ch2[10] = "abc";
//    char ch4[] = {'a','b','c'};
//    char ch5[] = "abc";
//
//    return 0;
//}

//18.1.3、一维数组的使用

//#include <stdio.h>
//int main()
//{
//    int arr[] = {1,2,3,4,5,6,7,8,9,10};
//    printf("%d\n",arr[4]);
//    int sz = sizeof(arr)/ sizeof(arr[0]);
//    for (int i = 0; i < sz; i++)
//    {
//        printf("%d ",arr[i]);
//    }
//    return 0;
//}

//18.1.4、一维数组在内存中的存储

//#include <stdio.h>
//int main()
//{
//    int arr[] = {1,2,3,4,5,6,7,8,9,10};
//    int sz = sizeof(arr)/ sizeof(arr[0]);
//    for (int i = 0; i < sz; i++)
//    {
//        printf("&arr[%d]=%p\n",i,&arr[i]);
//    }
//    return 0;
//}

//18.2、二维数组的创建和初始化
//18.2.1、二维数组的创建

//#include <stdio.h>
//int main()
//{
//    int arr1[3][4];
//    char arr2[5][10];
//
//    return 0;
//}

//18.2.2、二维数组的初始化

//#include <stdio.h>
//int main()
//{
//    int arr1[3][4] = {1,2,3,4,2,3,4,5,3,4,5,6};
//    int arr2[3][4] ={{1,2},{3,4},{5,6}};
//    int arr3[][4] = {{1,2,3,4,},{5,6}};
//    char arr4[5][10];
//    return 0;
//}

//18.2.3、二维数组的使用

//#include <stdio.h>
//int main()
//{
//    int arr1[3][4] = {1,2,3,4,2,3,4,5,3,4,5,6};
//
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 4; j++)
//        {
//            printf("%d ",arr1[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//18.2.4、二维数组在内存中的存储

//#include <stdio.h>
//int main()
//{
//    int arr1[3][4] = {1,2,3,4,2,3,4,5,3,4,5,6};
//
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 4; j++)
//        {
//            printf("&arr[%d][%d] = %p ",i,j,&arr1[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//18.3、数组越界
//一维数组越界
//#include <stdio.h>
//int main()
//{
//    int arr[] = {1,2,3,4,5,6};
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for (int i = 0; i < sz; i++)
//    {
//        printf("%d ",arr[i]);
//    }
//    return 0;
//}

//二维数组越界

//#include <stdio.h>
//int main()
//{
//    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j <= 4; j++)
//        {
//            printf("%d ",arr[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

//18.4、数组作为函数参数
//18.4.1、冒泡排序函数的错误设计

//#include <stdio.h>
//#include <windows.h>
//void bubble_sort(int arr[],int sz)                      //形参是数组的形式
//{
//    //趟数
//    for (int i = 0; i < sz-1; i++)
//    {
//        //一趟的冒泡排序
//        for (int j = 0; j < sz-1-i; j++)
//        {
//            if(arr[j] > arr[j+1])
//            {
//                //交换
//                int tmp = arr[j];
//                arr[j] = arr[j+1];
//                arr[j+1] = tmp;
//            }
//        }
//    }
//}
//int main()
//{
//    SetConsoleOutputCP(65001);
//    int arr[] = {9,8,7,6,5,4,3,2,1,0};
//    //用冒泡排序算法，对数组进行排序。
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    bubble_sort(arr,sz);
//    for (int i = 0; i < sz; i++)
//    {
//        printf("%d ",arr[i]);
//    }
//    return 0;
//}

//18.4.2数组名：表示数组名的首地址，但有两个例外。
//一维数组。
//1.sizeof数组名表示整个数组，计算的是整个数组的大小，大小是字节
//2.&数组名，这里的数组名表示整个数组，取出的是整个数组的地址。

//#include <stdio.h>
//int main()
//{
//    int arr[10] = {0};
//    printf("%p\n",arr);                          //arr就是首元素的地址
//    printf("%p\n",arr+1);
//    printf("----------------------------\n");
//    printf("%p\n",&arr[0]);                    //首元素地址
//    printf("%p\n",&arr[0]+1);
//    printf("----------------------------\n");
//    printf("%p\n",&arr);                      //数组的地址
//    printf("%p\n",&arr+1);
//
//
//    int n = sizeof(arr);                            //40字节
//    printf("%d\n",n);
//    return 0;
//}

//二维数组

//#include <stdio.h>
//int main()
//{
//    int arr[3][4] = {0};
//    printf("%d\n",sizeof(arr)/sizeof(arr[0]));
//    printf("%d\n",sizeof(arr[0])/sizeof(arr[0][0]));
//
//    printf("%p\n",arr);
//    printf("%p\n",arr+1);
//
//    int sz = sizeof(arr);
//    printf("%d\n",sz);
//    return 0;
//}

//18.4.3、冒泡排序函数的正确设计
//18.5、数组应用实例
//18.5.1、三子棋

//递归练习题

//#include <stdio.h>
//int fun(int n)
//{
//    if (n == 5)
//        return 2;
//    else
//        return 2*fun(n+1);
//}
//int main()
//{
//    int ret = fun(2);
//    printf("%d\n",ret);
//    return 0;
//}

//打印一个数的每一位
//求阶乘
//strlen模拟

//字符串逆序（递归实现）

//方法一

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char arr[] = "abcdefg";
//
//    //int sz = sizeof(arr)  / sizeof(arr[0]);
//    int left = 0;
//
//    //int right = sz - 2;
//
//    int right = strlen(arr)-1;
//    while (left <= right)
//    {
//        char tmp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = tmp;
//
//        left++;
//        right--;
//    }
//    printf("%s\n",arr);
//    return 0;
//}


//函数实现

//#include <stdio.h>
//#include <string.h>
//void reverse (char arr[])
//{
//    int left = 0;
//
//    //int right = sz - 2;
//
//    int right = strlen(arr)-1;
//    while (left <= right)
//    {
//        char tmp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = tmp;
//
//        left++;
//        right--;
//    }
//    printf("%s\n",arr);
//}
//int main()
//{
//    char arr[] = "abcdefg";
//
//    //int sz = sizeof(arr)  / sizeof(arr[0]);
//    reverse(arr);
//    return 0;
//}

//用递归的方式实现

//#include <stdio.h>
//#include <string.h>
//int my_strlen(char *str)
//{
//    int count = 0;
//    while (*str != '\0')
//    {
//        count++;
//        str++;
//    }
//    return count;
//}
//void reverse (char *str)
//{
//    char tmp = *str;
//    int len = my_strlen(str);
//    *str =  *(str + len - 1);
//    *(str + len - 1) = '\0';
//    if(my_strlen(str) >= 2)
//        reverse(str+1);
//    *(str + len - 1) = tmp;
//}
//int main()
//{
//    char arr[] = "abcdefg";
//    reverse(arr);
//    printf("%s\n",arr);
//    return 0;
//}

//简化版本

//#include <stdio.h>
//int my_strlen(char *str)
//{
//    int count = 0;
//    while (*str != '\0')
//    {
//        count++;
//        str++;
//    }
//    return count;
//}
//void reverse (char arr[],int left,int right)
//{
//    if(left < right)
//    {
//        char tmp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = tmp;
//        reverse(arr, left + 1, right - 1);
//    }
//}
//int main()
//{
//    char arr[] = "abcdefg";
//    int left = 0;
//    int right = my_strlen(arr)-1;
//    reverse(arr,left,right);
//    printf("%s\n",arr);
//    return 0;
//}

//计算每个数的每位之和
//例如输入1234，返回1+2+3+4

//#include <stdio.h>
//int  digitsum(unsigned int n)
//{
//    if(n > 9)
//        return digitsum(n / 10) + n % 10;
//    else
//        return n;
//}
//int main()
//{
//    unsigned int n = 0;
//    scanf_s("%u",&n);
//    int sum = digitsum(n);
//    printf("%d\n",sum);
//    return 0;
//}

//编写一个函数，实现n的k次方

//#include <stdio.h>
//double pow(int n, int k)
//{
//    if (k > 0)
//        return n * pow(n, k - 1);
//    else if (k == 0)
//        return 1;
//    else
//        return 1.0 / pow(n, -k);
//}
//
//int main()
//{
//    int n = 0;
//    int k = 0;
//    scanf("%d %d", &n, &k);
//    double ret = pow(n, k);
//    printf("%lf\n", ret);
//    return 0;
//}

//数组作业

//#include <stdio.h>
//int main()
//{
//    int arr[] = {1,2,(3,4),5,};
//    printf("%d\n",sizeof(arr));
//    return 0;
//}


//#include <stdio.h>
//#include <string.h>
//
//
////h e l l o _ b i t \0
////sizeof是一个操作符，用来计算变量(类型)所占内存空间的大小，不关注内存中放置的具体内容。
////strlen是一个库函数，是专门求字符串长度的，只能针对字符串。
////从参数给定的地址向后找\0，统计\0之前出现的字符的个数。
//
//int main()
//{
//    char arr[] = "hello bit";
//    printf("%d %d\n",sizeof(arr),strlen(arr));
//    return 0;
//}

//将数组A中的内容和数组B中的内容进行交换，数组一样大。

//#include <stdio.h>
//int main()
//{
//    int arr1[] = {1,3,5,7,9};
//    int arr2[] = {2,4,6,8,0};
//    int sz = sizeof(arr1) / sizeof(arr1[0]);
//    for (int i = 0; i < sz; ++i)
//    {
//        int tmp = arr1[i];
//        arr1[i] = arr2[i];
//        arr2[i] = tmp;
//    }
//    for (int i = 0; i < sz; ++i)
//    {
//        printf("%d ",arr1[i]);
//    }
//    printf("\n");
//
//    for (int i = 0; i < sz; i++)
//    {
//        printf("%d ",arr2[i]);
//    }
//    printf("\n");
//    return 0;
//}

//创建一个整型数组，完成以下操作
//实现函数init，初始化数组全为0；
//实现print函数，打印数组的每个元素；
//实现函数reverse，完成数组元素的逆置。

//#include <stdio.h>
//void init(int arr[],int sz)
//{
//    for (int i = 0; i < sz; i++)
//    {
//        arr[i] = 0;
//    }
//}
//void print(int arr[],int sz)
//{
//    for (int i = 0; i < sz; i++)
//    {
//        printf("%d ",arr[i]);
//    }
//    printf("\n");
//}
//
//void reverse(int arr[],int sz)
//{
//    int left = 0;
//    int right = sz-1;
//    while(left < right)
//    {
//        int tmp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = tmp;
//
//        left++;
//        right--;
//
//    }
//
//}
//int main()
//{
//    int arr[] = {1,2,3,4,5,6,7,8,9,0};
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    print(arr,sz);
//    reverse(arr,sz);
//    print(arr,sz);
//    init(arr,sz);
//    print(arr,sz);
//    return 0;
//}

//18.5.2、扫雷

//19、操作符
//19.1操作符的分类
//19.2、算术操作符  + - * / %
// %操作符的两端必须是整数

//#include <stdio.h>
//int main()
//{
//    int a = 7 % 2;
//    int b = 7 / 2;
//    printf("%d\n",a);
//    printf("%d\n",b);
//    return 0;
//}

//19.3、移位操作符
//19.3.1、左移操作符
//正数

//#include <stdio.h>
//int main()
//{
//    int a = 7;
//    //左移操作符
//    //移动的是二进制位
//    int b = a << 1;
//    printf("a = %d\n",a);
//    printf("b = %d\n",b);
//    return 0;
//}

//负数
//#include <stdio.h>
//int main()
//{
//    int a = -7;
//    //左移操作符
//    //移动的是二进制位，相当于乘以2。
//    int b = a << 1;
//    printf("a = %d\n",a);
//    printf("b = %d\n",b);
//    return 0;
//}

//19.3.2、右移操作符
//算术右移操作符：右边丢弃，左边补原符号位。
//逻辑右移操作符：右边丢弃，左边补0。

//#include <stdio.h>
//int main()
//{
//    int a = -7;
//    //右移操作符
//    //移动的是二进制位，相当于除以2。
//    int b = a >> 1;
//    printf("a = %d\n",a);
//    printf("b = %d\n",b);
//    return 0;
//}


//19.4、位操作符

// & -按（二进制）位与
// | -按（二进制）位或
// ^ -按（二进制）位异或

// &的用法

//#include <stdio.h>
//int main()
//{
//    int a = 3;
//    int b = -5;
//    int c = a & b;
//    printf("c = %d\n",c);
//    return 0;
//}

// |的用法

//#include <stdio.h>
//int main()
//{
//    int a = 3;
//    int b = -5;
//    int c = a | b;
//    printf("c = %d\n",c);
//    return 0;
//}

// ^的用法：相同为0，相异为1。

//#include <stdio.h>
//int main()
//{
//    int a = 3;
//    int b = -5;
//    int c = a ^ b;
//    printf("c = %d\n",c);
//    return 0;
//}

//不创建临时变量，实现两个数的交换。

//#include <stdio.h>
//#include <windows.h>
//int main()
//{
//    SetConsoleOutputCP(65001);
//    int a = 3;
//    int b = 5;
//    printf("交换前：a = %d b = %d\n",a,b);
//    a = a ^ b;            //a = 3^5
//    b = a ^ b;           //b = 3^5^5 -->3
//    a = a ^ b;          //a = 3^5^3 --> 5
//    printf("交换后：a = %d b = %d\n",a,b);
//    return 0;
//}

//编写代码，求一个整数存储在内存中的二进制1的个数

//19.5、赋值操作符

//#include <stdio.h>
//int main()
//{
//    int a = 3;                  //初始化
//
//    int b = 0;
//    b = 20;                   //赋值
//
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int a = 3;                  //初始化
//    a  = a + 5;
//    a += 5;
//
//    a = a >> 1;
//    a >>= 1;
//
//    return 0;
//}

//19.6、单目操作符
//19.6.1、单目操作符介绍
// !的应用

//#include <stdio.h>
//int main()
//{
//    int flag = 0;
//    //flag为真，进入if。
//    if(flag)
//    {
//        printf("hehe\n");
//    }
//    //flag为假，进入if。
//    if(!flag)
//    {
//        printf("haha\n");
//    }
//    return 0;
//}

// &的应用
//#include <stdio.h>
//int main()
//{
//    int a = 5;
//    printf("%p\n",&a);
//    int *p = &a;
//
//    return 0;
//}

//sizeof的应用。

//#include <stdio.h>
//int main()
//{
//    int a = 10;
//    int n = sizeof(a);
//    printf("n = %d\n",n);
//    return 0;
//}

// ~的应用

//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    // ~表示按（二进制）位取反
//    // 00000000000000000000000000000000    -补码
//    // 11111111111111111111111111111111    -取反以后的补码
//    // 11111111111111111111111111111110    -反码
//    // 10000000000000000000000000000001    -原码
//    // -1
//    printf("%d\n",~a);
//    return 0;
//}

// ++ --的使用

//#include <stdio.h>
//void test(int n)
//{
//    printf("%d\n",n);
//}
//int main()
//{
//    int a  = 10;
//    test(a--);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int sum1 = 0;
//    int sum2 = 0;
//    for (int i = 0; i < 10; i++)
//    {
//        sum1 += i;
//    }
//    for (int i = 0; i < 10; ++i)
//    {
//        sum2 += i;
//    }
//    printf("%d\n",sum1);
//    printf("%d\n",sum2);
//    return 0;
//}

// *(解引用操作符)的使用
//#include <stdio.h>
//int main()
//{
//    int a = 10;
//    int *p = &a;
//    *p = 20;
//    printf("%d\n",a);
//    return 0;
//}

// (类型) 强制类型转换

//#include <stdio.h>
//int main()
//{
//    int  a = (int)3.14;
//    printf("%d\n",a);
//    return 0;
//}

//#include <stdio.h>
//void test1(int arr[])
//{
//    printf("%d\n",sizeof(arr));
//}
//void test2(char ch[])
//{
//    printf("%d\n",sizeof(ch));
//}
//int main()
//{
//    int arr[10] = {0};
//    char ch[10] = {0};
//    printf("%d\n",sizeof(arr));
//    printf("%d\n",sizeof(ch));
//    test1(arr);
//    test2(ch);
//    return 0;
//}

//19.7、关系操作符
// < > == !=

//19.8、逻辑操作符
//逻辑与 && ：都为真，就为真；有一个为假，就为假。（并且）
//逻辑或 || ：有一个为真，就为真。（或者）

//#include <stdio.h>
//int main()
//{
//    int a = 3;
//    int b = 0;
//    int c = a && b;
//    int d = a || b;
//    printf("%d\n",c);
//    printf("%d\n",d);
//
//    return 0;
//}

//&& 左边为假，右边不在计算。
//|| 左边为真，右边不在计算。

//#include <stdio.h>
//int main()
//{
//    int i = 0,a = 1,b = 2,c = 3,d = 4;
//    //i = a++ && ++b && d++;
//    i = a++ || ++b || d++;
//    printf("a = %d\nb = %d\nc = %d\nd = %d\n",a,b,c,d);
//    return 0;
//}

//19.9、条件操作符：三目操作符
// 表达式1 ? 表达式2 : 表达式3
//#include <stdio.h>

//int main()
//{
//    int a = 3;
//    int b = 0;
//    if(a > 5)
//        b = 3;
//    else
//        b = -3;
//
//    (a > 5) ? (b = 3) : (b = -3);
//    b = (a > 5 ? 3 : -3);
//    return 0;
//}

//19.10、逗号表达式

//#include <stdio.h>
//int main()
//{
//    int a = 1;
//    int b = 2;
//    int c = (a > b, a = b + 10,a,b = a + 1);
//    printf("c = %d\n",c);
//    return 0;
//}

//19.11、下标引用、函数调用和结构成员
//19.11.1下标引用
//19.11.2、函数调用

//#include <stdio.h>
//int add(int x,int y)
//{
//    return x + y;
//}
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int c = add(a,b);            // () -->函数调用操作符
//    printf("%d\n",c);
//    return 0;
//}

//19.11.3、结构成员

//#include <stdio.h>
//#include <string.h>
//struct stu
//{
//    char name[20];
//    int age;
//    double score;
//};
//void set_stu(struct stu *ps)
//{
//    strcpy((*ps).name , "zhangsan");
//    (*ps).age = 20;
//    (*ps).score = 100.0;
//}
//void print_stu(struct stu *ps)
//{
//    printf("%s %d %lf",ps->name,ps->age,ps->score);
//}
//int main()
//{
//    struct stu s = {0};
//    set_stu(&s);
//    print_stu(&s);
//    return 0;
//}

//19.12、表达式求值。（优先级和结合性）
//19.12.1、隐式类型转换（整型提升）。

//#include <stdio.h>
//int main()
//{
//    char a = 5;
//    //00000000000000000000000000000101
//    //00000101 -a
//    char b = 126;
//    //00000000000000000000000001111110
//    //01111110 -b
//    char c = a + b;
//    //00000000000000000000000000000101 -a
//    //00000000000000000000000001111110 -b
//    //00000000000000000000000010000011 -c
//    //10000011 -c
//    //11111111111111111111111110000011 -补码
//    //11111111111111111111111110000010 -反码
//    //10000000000000000000000001111101 -原码
//    printf("%d\n",c);
//    return 0;
//}

//例1

//#include <stdio.h>
//int main()
//{
//    char a = 0xb6;
//    short b = 0xb600;
//    int c = 0xb6000000;
//    if(a == 0xb6)
//        printf("a");
//    if(b == 0xb600)
//        printf("b");
//    if(c == 0xb6000000)
//        printf("c");
//    return 0;
//}

//例2

//#include <stdio.h>
//int main()
//{
//    char c = 1;
//    printf("%u\n",sizeof(c));
//    printf("%u\n",sizeof(+c));
//    printf("%u\n",sizeof(-c));
//    return 0;
//}

//19.12.2、算术转换。
//19.12.3、操作符的属性。

//#include <stdio.h>
//int main()
//{
//    int a = 1;
//    int b = (++a) + (++a) + (++a);
//    printf("%d\n",b);
//    return 0;
//}

//习题讲解
//1、青蛙跳台阶（n个台阶，一次可以选择跳1个或者2个，共有多少眺法。）

//#include <stdio.h>
//int fib(int n)
//{
//    if(n <= 2)
//
//    {
//        return n;
//    }
//    else
//    {
//        return fib(n-1) + fib(n-2);
//    }
//}
//int main()
//{
//    int n = 0;
//    scanf("%d",&n);
//    int m = fib(n);
//    printf("%d\n",m);
//    return 0;
//}

//2、不改变整数序列，删除指定的整数。

//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    scanf_s("%d",&n);
//    int arr[n];
//    for (int i = 0; i < n; i++)
//    {
//        scanf_s("%d ",&arr[i]);
//    }
//    int del = 0;
//    scanf_s("%d",&del);
//    int j = 0;
//    for (int i = 0; i < n; i++)
//    {
//        if(arr[i] != del)
//        {
//            arr[j] = arr[i];
//            j++;
//        }
//    }
//    for (int i = 0; i < j; i++)
//    {
//        printf("%d ",arr[i]);
//    }
//    return 0;
//}

//3、输入n个整数，输出做高分的最低分的差值。

//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    scanf_s("%d",&n);
//    int arr[n];
//    for (int i = 0; i < n; i++)
//    {
//        scanf_s("%d ",&arr[i]);
//    }
//    int max = arr[0];
//    for (int i = 1; i < n; i++)
//    {
//        if(arr[i] > max)
//        {
//            max = arr[i];
//        }
//    }
//    int min = arr[0];
//    for (int i = 1; i < n; i++)
//    {
//        if(arr[i] < min)
//        {
//            min = arr[i];
//        }
//    }
//    printf("%d\n",max-min);
//    return 0;
//}

//简化版本

//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    scanf_s("%d",&n);
//    int arr[n];
//    for (int i = 0; i < n; i++)
//    {
//        scanf_s("%d ",&arr[i]);
//    }
//    int max = arr[0];
//    int min = arr[0];
//    for (int i = 1; i < n; i++)
//    {
//        if(arr[i] > max)
//        {
//            max = arr[i];
//        }
//        if(arr[i] < min)
//        {
//            min = arr[i];
//        }
//    }
//
//    printf("%d\n",max-min);
//    return 0;
//}

//进阶版本

//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d",&n);
//    int arr[n];
//    int max = 0;
//    int min = 100;
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d",&arr[i]);
//        if(arr[i] > max)
//        {
//            max = arr[i];
//        }
//        if(arr[i] < min)
//        {
//            min = arr[i];
//        }
//    }
//    printf("%d\n",max-min);
//    return 0;
//}

//4、字母大小写转换

//#include <stdio.h>
//
//int main() {
//    char ch = 0;
//    // 使用标准 scanf 或正确使用 scanf_s
//    while (scanf(" %c", &ch) == 1)
//    {  // 注意空格：跳过空白字符
//        if (ch >= 'a' && ch <= 'z')
//        {
//            printf("%c\n", ch - 32);  // 小写转大写
//        }
//        else if (ch >= 'A' && ch <= 'Z')
//        {
//            printf("%c\n", ch + 32);  // 大写转小写
//        }
//        else
//        {
//            printf("%c\n", ch);  // 非字母字符原样输出
//        }
//        // 移除了 getchar()
//    }
//    return 0;
//}

//5、判断是不是字母。
//方法1：

//#include <stdio.h>
//int main()
//{
//    char ch = 0;
//    while (scanf("%c",&ch) == 1)
//    {
//        if((ch >= 'a' && ch <= 'z')||(ch >= 'A' && ch <= 'Z'))
//        {
//            printf("%c is an alphabet.\n",ch);
//        }
//        else
//        {
//            printf("%c is not an alphabet.\n",ch);
//        }
//    }
//    getchar();
//    return 0;
//}

//方法2
//#include <stdio.h>
//int main()
//{
//    char ch = 0;
//    //%c前面的空格的作用是，跳过下一个字符之前的所有空白字符。
//    while (scanf(" %c",&ch) == 1)
//    {
//        if((ch >= 'a' && ch <= 'z')||(ch >= 'A' && ch <= 'Z'))
//        {
//            printf("%c is an alphabet.\n",ch);
//        }
//        else
//        {
//            printf("%c is not an alphabet.\n",ch);
//        }
//    }
//    return 0;
//}

//6、最高分数

//#include <stdio.h>
//int main()
//{
//    int max = 0;
//    int score = 0;
//    for (int i = 0; i < 3; i++)
//    {
//        scanf("%d",&score);
//        if(score > max)
//        {
//            max = score;
//        }
//    }
//    printf("%d\n",max);
//    return 0;
//}

//7、变种水仙花数
// 655 = 6*55 + 65*5
//1461 = 1*146 + 14*61 + 146 *1

//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    for (int i = 10000; i <= 99999; i++)
//    {
//        int sum = 0;
//        for (int j = 1; j <= 4; j++)
//        {
//            int k = (int)pow(10,j);
//            sum += (i % k) * (i / k);
//        }
//        if (sum == i)
//            printf("%d ",i);
//    }
//    printf("\n");
//    return 0;
//}

//20、指针
//20.1、指针的定义

//#include <stdio.h>
//int main()
//{
//    int a = 10;
//
//    int *pa = &a;
//    //pa是一个指针变量，用来存放地址。
//    //本质上指针就是地址.
//    //口语中的指针，其实是指针变量，指针变量是一个变量，用来存放地址的变量。
//    printf("%p\n",pa);
//    return 0;
//}

//20.2、指针和指针类型
//20.2.1、指针+-整数。
//20.2.2、指针类型的意义。

//#include <stdio.h>
//int main()
//{
//    char *pc = NULL;
//    short *ps = NULL;
//    int *pi = NULL;
//    double *pd = NULL;
//
//    printf("%zu\n",sizeof(pc));
//    printf("%zu\n",sizeof(ps));
//    printf("%zu\n",sizeof(pi));
//    printf("%zu\n",sizeof(pd));
//    return 0;
//}

//指针类型的意义1。

//#include <stdio.h>
//int main()
//{
//    int  a = 0x11223344;
//    int *pa = &a;
//    *pa = 0;
//
////    char *pc = (char *)&a;
////    *pc = 0;
//    return 0;
//    //结论：
//    //指针类型决定了指针再被解引用的时候访问几个字节。
//    //如果是int*，解引用访问4个字节。
//    //如果是char*，解引用访问1个字节。
//}

//指针类型的意义2。

//#include <stdio.h>
//int main()
//{
//   int a = 0x11223344;
//   int *pa = &a;
//   char *pc = (char*)&a;
//
//    printf( "pa = %p\n",pa);
//    printf( "pa + 1 = %p\n",pa+1);
//    printf( "pc = %p\n",pc);
//    printf( "pc + 1 = %p\n",pc+1);
//
//    //结论2：
//    //指针类型决定了指针+-1操作的时候，跳过几个字节。
//    return 0;
//}

//79
