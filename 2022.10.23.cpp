#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 13;
//int b = 0;
//	b =100 / 10;
//	printf("%lf", b);
//}
#include<stdio.h>
int xxx(int x)
{

	if (x <= 2)
	{

		return 1;
	}
	
	return  xxx(x - 1) + xxx(x - 2);

}
int main()
{
	int a = 0;
	int n = 0;
	int i = 0;
	scanf("%d", &n);
	for (i = 1; i<=n; i++)
	{
		a = xxx(i);
		printf("%d ", a);

	}
	return 0;
}