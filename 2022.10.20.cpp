#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fac(int n)
{
	if (n == 0 || n == 1)
	{
		return(1);
	}
	else
	{
		int i = 0, x = 1;
		for (i = 1; i <= n; i++)
		{
			x = x * i;
			if (i == n)
			{
				return(x);
			}

		}
	}

}
int main()

{
	int fac(int n);
	int a = 0, b = 0, y = 0;
	scanf("%d", &a);
	b = fac(a);
	printf("%d ", b);
	return 0;
} 