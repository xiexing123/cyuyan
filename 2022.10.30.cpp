#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//float a, b, cost;
//scanf("%f", &a);
//if (a >= 3 && a <= 20.5)
//{
//	b = a - 3;
//	cost = 3 + b * 2;
//
//	printf("%0.2f", cost);
//
//	if (a > 20.5)
//	{
//		cost = 40;
//
//		printf("%0.2f", cost);
//	}
//	if (a < 3)
//	{
//		cost = 5;
//		printf("%0.2f", cost);
//	}
//}
//return 0;
//}
//
//{
//	void swap(int* p1, int* p2);
//	int* p1, * p2, * p;
//	int a = 0,b = 0;
//	scanf("%d,%d", &a, &b);
//	p1 = &a,p2 =& b;
//	if(a<b)
//	{
//		swap(p1, p2);
//	}
//	else
//	{
//		printf("%d,%d", a, b);
//	}
//	return 0;
//}
//void swap(int* p1, int* p2)
//{
//	int a = 0;
//	int b = 0;
//	int c;
//	c = *p1;
//	*p1 = *p2;
//	*p2 = c;
//	printf("%d,%d", *p1, *p2);
//}
//#include<stdio.h>
//int main()
//{
//	void xxx(int* p1, int* p2);
//	int a, b, c,i; 
//	scanf("%d,%d,%d", &a, &b, &c);
//	int* p1 = &a;
//	int* p2 = &b;
//	int* p3 = &c;
//	if (*p1 < *p2)
//	{
//		xxx(p1, p2);
//	}
//	if (*p1 < *p3)
//	{
//		xxx(p1, p3);
//	}
//	if (*p2 < *p3)
//	{
//		xxx(p2, p3);
//	}
//	printf("%d %d %d", *p1, *p2, *p3);
//}
//void xxx(int* p1, int* p2)
//{
//	int temp;
//	temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//
//}
/*#*//*include<stdio.h>
int main()
{
	int a[4];
	for (int i=0;i<=3; i++)
	{
		scanf("%d", &a[i]);
	}

	
	return 0;
}
void xxx(int a[], int n)
{
	int k = n / 2;
	int t;
	for (int i = 0; i < k; i++)
	{
		int
	}
}*/

#include <stdio.h>
int main()
{
	struct student
	{
		long int num;
		char name[20];
		int score;
	}stu1,stu2;
	scanf("%ld %s %d", &stu1.num, &stu1.name, &stu1.score);
	scanf("%ld %s %d", &stu2.num, &stu2.name, &stu2.score);
	if (stu1.score > stu2.score)
	{
		printf("%ld ", stu1.num);
		printf("%s ", stu1.name);
		printf("%d ", stu1.score);
	}
	if (stu1.score == stu2.score)
	{
		printf("%ld ", stu1.num);
		printf("%s ", stu1.name);
		printf("%d \n", stu1.score);
		printf("%ld ", stu2.num);
		printf("%s ", stu2.name);
		printf("%d ", stu2.score);
	}
	else
	{
		printf("%ld ", stu2.num);
		printf("%s ", stu2.name);
		printf("%d ", stu2.score);
	}

	return 0;
}
