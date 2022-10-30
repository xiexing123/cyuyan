#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void b()
//{
//	char a[100] = {};
//	gets_s(a);
//	void b();
//	char x[100]={};
//	char y[100]={};
//	for (int i = 0; i <= 100; i++)
//	{
//		if (a[i] == ' ')
//		x[100]=a[99];
//		
//	}
//	printf("%s", x[100]);
//}
//int main()
//{
//	void b();
//	b();
//	return 0;
//}
//int main()
//{
//	int F();
//	int j;
//	printf("%d\n",F())
//	return 0;
//
//}
//#include<string.h>  
//int main()
//{
//	void a(char s[]);
//    char s[81];
//	gets_s(s);
//	a(s);
//	return 0;
//}
//void a(char s[])
//{
//	char t[30], temp[30];
//	t[0] = '\0';
//	int len = strlen(s), i = 0, j = 0;
//	for (i = 0; i < len; i++)
//	{
//		j = 0;
//		while (s[i] > 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'z')
//			temp[j++] = s[i++];
//			temp[j] = '\0';
//			if (strlen(t) < strlen(temp))
//			{
//				strcpy(t, temp);
//			}
//	}
//	puts(t);
//}
//void xie(int y[], int n)
//{
//	int i = 0;
//	int t = 0;
//	for (int j = 0; j < n-1; j++)
//	{
//		for (i =j+1; i < n; i++)
//		{
//			if (y[j] > y[i])
//			{
//				t = y[j];
//				y[j] = y[i];
//				y[i] = t;
//			}
//
//		}
//	}
//
//}
//
//int main()
//{
//	int a[10]={};
//	int b = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &b);
//		a[i] = b;
//	}
//	xie(a,10);
//	for (int x = 0; x <= 9; x++)
//	{
//        printf("%d ", a[x]);
//	}
//	return 0;
//}
int main()
{
	int a[8],c=1;   
	for (int i = 1;; i++)
	{
		a[0] = i;
		c = 0;
		for (int j = 1; j <= 7; j++)
		{
			a[j] = 2 * a[j - 1];
			c = c + a[j];
		}
		c = c + a[0];
			if (c == 765)
			{
				printf("%d %d", a[0], a[7]);
				break;
			}
		
	}
	return 0;
}
//#include <stdio.h>
//int main()
//{
//    int a, b, c, d, s;
//    scanf("%d %d %d %d", &a, &b, &c, &d);
//    s = a + b + c + d;
//    if (a < 60 || b < 60 || c < 60 || d < 60 || s < 340)
//
//    {
//        printf("No pass");
//    }
//    else if (s < 370)
//        printf("self-supported student");
//    else
//        printf("Government-supported student");
//    return 0;
//}
//
//}de0
//#include <stdio.h>
//int main(void)
//{
//    float a, b;
//    char c;
//    scanf("%f%c%f", &a, &c, &b);
//    switch (c)
//    {
//    case '+':
//        printf("%0.2f+%0.2f=%0.2f", a, b, a + b); break;
//    case '-':
//        printf("%0.2f-%0.2f=%0.2f", a, b, a - b); break;
//    case '*':
//        printf("%0.2f*%.2f=%0.2f", a, b, a * b); break;
//    case '/':
//        if (0 == b)
//            printf("Divided by 0!");
//        else
//            printf("%0.2f/%0.2f=%0.2f", a, b, a/b); break;
//    default:
//        printf("Invalid operator!");
//    }
//    return 0;
//}
