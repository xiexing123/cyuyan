#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = 0, j = 0,a[10];
//	for (i = 0; i <= 9; i++)
//	{
//		for (j = 1; j <= 10; j++);
//		a[i] = j;
//		printf("%d", a[i]);
//	
//	}
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char a[10];
//	a[0] = 'I';
//	a[1] = ' ';
//	a[2] = 'a';
//	a[3] = 'm';
//	a[4] = ' ';
//	a[5] = 'h';
//	a[6] = 'a';
//	a[7] = 'p';
//	a[8] = 'p';
//	a[9] = 'y';
//	int i = 0;
//	
//	
//   //printf("%s\n", a);
//	
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a1 = 0, b1 = 0;
//    int a2 = 0, b2 = 0;
//    scanf("%d:%d", &a1, &b1);
//    scanf("%d:%d", &a2, &b2);
//    int c = a2 - a1;
//    int d = b2 - b1;
//    if (d < 0) 
//    {
//        d = 60 + d;
//        c--;
//    }
//    printf("时差%d小时 %d分\n", c, d);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//	printf("请输入月份：");
//	int month;
//	scanf("%d", &month);
//	switch (month)
//	{
//	case 1: printf("January\n");
//		break;
//	case 2: printf("February\n");
//		break;
//	case 3: printf("March\n");
//		break;
//	case 4: printf("April\n"); 
//		break;
//	case 5: printf("May\n"); 
//		break;
//	case 6: printf("June\n");
//		break;
//	case 7: printf("July\n"); 
//		break;
//	case 8: printf("August\n"); 
//		break;
//	case 9: printf("September\n"); 
//		break;
//	case 10:printf("October\n");
//		break;
//	case 11:printf("November\n");
//		break;
//	case 12:printf("December\n"); 
//		break;
//	}
//	return 0;
//}
/*#*//*include<stdio.h>
#include<math.h>
int main()
{
    double c = 0.0, b = 0.0, s = 0.0, n = 0.0;
    c = 0;
    printf("请输入信道带宽 信号功率 噪声功率三个参数：");
    scanf_s("%lf %lf %lf", &b, &s, &n);
    if (n != 0)
        c = b * log2(s / n);
    printf("信道容量是：%f\n", c);
}*/
//#include <stdio.h>
//int main()
//{
//	int a;
//	int b = 0;
//	scanf("%d", &a);
//	b++;
//	a /= 10;
//	while (a > 0)
//	{
//		b++;
//		a /= 10;
//	}
//	printf("%d\n",b );
//}
//#include <stdio.h>
//int main()
//{
//	float m1 = -2.5;
//	float m2 = 2.5;
//	int n = 16;
//	float s = (m2 - m1) / n;
//	float a;
//	scanf_s("%f", &a);
//	if (a >= 2.5 || a < -2.5)
//	{
//		printf("超出有效的数据范围，请重新输入一个数值。\n");
//	}
//	else
//	{
//		int i = (a - m1) / s;
//		printf("%f对应的二进制数是：", a);
//		switch (i)
//		{
//		case 0: 
//			printf("0000"); 
//			break;
//		case 1: 
//			printf("0001");
//			break;
//		case 2: 
//			printf("0010"); 
//			break;
//		case 3:
//			printf("0011"); 
//			break;
//		case 4: 
//			printf("0100"); 
//			break;
//		case 5: 
//			printf("0101"); 
//			break;
//		case 6:
//			printf("0110");
//			break;
//		case 7:
//			printf("0111"); 
//			break;
//		case 8:
//			printf("1000"); 
//			break;
//		case 9: 
//			printf("1001");
//			break;
//		case 10: 
//			printf("1010"); 
//			break;
//		case 11: 
//			printf("1011");
//			break;
//		case 12:
//			printf("1100");
//			break;
//		case 13:
//			printf("1101");
//			break;
//		case 14:
//			printf("1110");
//			break;
//		case 15:
//			printf("1111");
//			break;
//		default:
//			break;
//		}
//	}
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    double n1 = 0.0;
//    double n2 = 0.0;
//    char o = 0;
//
//    char a;
//    for (;;)
//    {
//        printf("输入q退出，输入其他值继续\n");
//        a = getchar();
//        if (a == 'q')
//            return 0;
//        {
//            a = getchar();
//            if (a == 'q')
//                return 0;
//            printf("\n输入算式\n");
//            scanf("%lf", &n1);
//            scanf("%c", &o);
//            scanf("%lf", &n2);
//
//            switch (o)
//            {
//            case '+':
//                printf("=%lf\n", n1 + n2);
//                break;
//
//            case '-':
//                printf("=%lf\n", n1 - n2);
//                break;
//
//            case '*':
//                printf("=%lf\n", n1 * n2);
//                break;
//            case '/':
//                if (n2 == 0)
//                    printf("\n\n\a语法错误!\n");
//                else
//                    printf("=%lf\n", n1 / n2);
//                break;
//            case '%':
//                if ((long)n2 == 0)
//                    printf("\n\n\a语法错误!\n");
//                else
//                    printf("=%ld\n", (long)n1 % (long)n2);
//                break;
//            case 'q':
//                printf("已退出");
//                return(0);
//            default:
//                printf("\n\n\a语法错误!\n");
//                break;
//            }
//        }
//    }
//    return 0;
//}#include
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    printf("输入一个数：");
//    scanf("%d", &a);
//    int i = 0;
//    int b = 0;
//    for (i = 1; ; i++)
//    {
//        b = a/ 10;
//        a = b;
//        if (b == 0)
//        {
//            break;
//        }
//       
//    }
//    printf("几位整数：%d", i);
//
//    return 0;
//}
//#/*include<stdio.h>
//#include<math.h>
//int main()
//{
//    double c = 0.0, b = 0.0, s = 0.0, n = 0.0;
//    c = 0.0;
//    printf("信道带宽 信号功率 噪声功率：");
//    scanf("%lf %lf %lf", &b, &s, &n);
//    if (n != 0)
//        c = b * log2(s / n);
//    printf("信道容量：%f\n", c);
//}*/
//#include<stdio.h>
//int main()
//
//{
//    int i = 0;
//    int j = 0;
//    int sum = 0;
//    int m = 1;
//    for (i = 1; i <= 20; i++)
//    {
//        for (j = 1; j <= i; j++)
//        {
//            m = m * j;
//          
//        }
//        sum = sum + m;
//    }
//    printf("sum=%d\n", sum);
//    return 0;
//}
#include<stdio.h>
int main()
{
    int a = 0, b = 0, c = 0;
    printf("输入三个数：");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
            printf("最大值：%d", a);
    }
    if (b > a)
    {
        if (b > c)
            printf("最大值：%d", b);
    }
    else
        printf("最大值：%d", c);
    return 0;
}
