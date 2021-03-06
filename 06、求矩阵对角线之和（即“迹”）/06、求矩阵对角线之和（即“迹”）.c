﻿//《C语言从入门到精通》P133
// 第 5 章 数  组
// 5.2 二维数组
// 06、求矩阵对角线之和（即“迹”）【部分原创】

// 注意：必须是方阵

#include<stdio.h>
#define MAX 15						// 矩阵的最大行数/列数（宏定义方便修改）

int main()
{
	int i, j;						// A 矩阵的行、列下标
	int m;							// 用户输入的矩阵阶数
	int a[MAX][MAX];
	int sum = 0;

	printf("---------- 欢迎来到超级矩阵APP ----------\n\n");
tag:printf("请输入原矩阵的阶数（≤ %d）：", MAX);
	scanf_s("%d", &m);
	if (m > MAX)
	{
		printf("阶数超过预设限制（最大为%d），请重新输入！\n\n", MAX);
		goto tag;
	}
	printf("\n");

	printf("请按提示输入每个元素的值：\n");
	for (i = 0; i < m; i++)			// 对行的操作
	{
		for (j = 0; j < m; j++)		// 对列的操作
		{
			printf("a[%d,%d] = ", i, j);
			scanf_s("%d", &a[i][j]);
		}
		printf("\n");
	}
	// 上面的嵌套循环实际执行的顺序为【先列后行】：
	// 第 0 行：第 0 列、第 1 列、第 2 列 ... 第 j 列
	// 第 1 行：第 0 列、第 1 列、第 2 列 ... 第 j 列
	//   ...							  ...
	// 第 i 行：第 0 列、第 1 列、第 2 列 ... 第 j 列


	// 打印输入的数组
	printf("您输入矩阵 A 为（不显示序号）：\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");			// 打印一行换一行，可以实现矩阵的显示效果
	}

	// 计算对角线之和
	for (i = 0; i < m; i++)
	{
		j = i;
		sum = sum + a[i][j];
	}

	// 教材的方法：
	/*
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (i == j)
			{
				sum = sum + a[i][j];
			}
		}
	}
	*/

	printf("\n正在处理中，请稍后。。。\n\n");
	printf("该矩阵对角线之和为：\n");
	printf("a[0,0] + a[1,1] + a[2,2] + ... + a[%d,%d] = %d \n", m, m, sum);

	return 0;
}
