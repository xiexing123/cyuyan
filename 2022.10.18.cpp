#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
void xing()
{
	int i = 0, y = 0, z = 0;
	for (i = 100; i <= 200; i++)
	{
		for (z = 2; z <= i - 1; z++)
		{
			y = i % z;
			if (y == 0)
			{
				break;

			}
			else if (z == i - 1)
			{
				printf("%d ", i);
			}

		}

	}

}
int main()
{
	void xing();
	xing();
	
	return 0;
}
