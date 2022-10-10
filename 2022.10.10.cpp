#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 56;
//	int b = 0;
//	b = a / 10;
//	printf("%d", b);
//	return 0;
//
//}
#include<stdio.h>
int main()
{
	int a[10];
	int i = 0;
	int j = 0;
	printf(" ‰»Î£∫");
	for (i = 0; i < 10;i++)
	{
		scanf("%d", &a[i]);
	}
	
	for (j = 1; j <= 9; j++)
	{
		for (i = 0; i <= 9; i++)
		{
			if (a[i] < a[i + 1])
			{
				int k = 0;
				k = a[i];
				a[i] = a[i + 1];
				a[i + 1] = k;
			}

		}
	}
	printf(" ‰≥ˆ£∫");
	for(i=0;i<=9;i++)
	{
		
		printf("%d ", a[i]);
	}
	return 0;

}
