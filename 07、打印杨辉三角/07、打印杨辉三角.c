//《C语言从入门到精通》P134
// 第 5 章 数  组
// 5.2 二维数组
// 07、打印杨辉三角

#include<stdio.h>
#define LINE 9			// 宏定义：打印的行数

int main()
{
	int i;
	int j;
	int a[LINE][LINE] = { 0 };	// 初始化
	
	// 首列与对角线元素
	for (i = 0; i < LINE; i++)
	{
		a[i][i] = 1;	// 对角线元素全为 1
		a[i][0] = 1;	// 第一列元素全为 1
	}

	// 其余元素
	for (i = 2; i < LINE; i++)
	{
		for (j = 1; j < i; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}

	// 输出
	for (i = 0; i < LINE; i++)
	{

		for (int k = 1; k < (LINE - i); k++)
		{
			printf("  ");			// 左边打印空格，使原本的直角三角形打印为等腰三角形
		}

		for (j = 0; j < i+1; j++)	// 每行的元素个数刚好等于行下标加 1（即第n行有n个元素）
		{
			printf("%3d ", a[i][j]);
		}

		printf("\n");
	}

	return 0;
}

