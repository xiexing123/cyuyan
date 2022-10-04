#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	double p = 0;
	int n = 0;
	double pai = 0;
	for (n = 3; (static_cast<double>(1) / n) >= (0.000006); n += 2)
	{
		if ((n + 1) % 4 == 0)
		{
			p = p - static_cast<double>(1) / n;
		}
		else 
		{
			p = p + static_cast<double>(1) / n;
		}
	}
	pai =(p+1)* 4;
	printf("pai=%lf", pai);
	return 0;
}