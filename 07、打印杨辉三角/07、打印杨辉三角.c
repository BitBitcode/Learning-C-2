//《C语言从入门到精通》P134
// 第 5 章 数  组
// 5.2 二维数组
// 07、打印杨辉三角

#include<stdio.h>

int main()
{
	int i;
	int j;
	int a[11][11];
	
	for (i = 0; i < 11; i++)
	{
		a[i][i] = 1;
		a[i][0] = 1;
	}

	for (i = 3; i < 11; i++)
	{
		for (j = 2; j < i-1; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}

	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < 11; j++)
		{
			printf("%d，", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}

