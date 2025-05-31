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

#include <stdio.h>
int main(void)
{
    int arr[] = {0,1,2,3,4,5,6,7,8,9};

   // printf("%d\n",arr[8]);
    int i = 0;
    while ( i < 10 )
    {
        printf("%d ",arr[i]);
        i++;
    }

    return 0;
}










