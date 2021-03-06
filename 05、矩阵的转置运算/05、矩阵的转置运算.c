﻿//《C语言从入门到精通》P132
// 第 5 章 数  组
// 5.2 二维数组
// 05、矩阵的转置运算【部分原创】

#include<stdio.h>
#define MAX 15						// 矩阵的最大行数/列数（宏定义方便修改）

int main()
{
	int i, j;						// A 矩阵的行、列数
	int m, n;						// B 矩阵的行、列数
	int h, l;						// 用户输入的行、列数
	int a[MAX][MAX];				// 原矩阵：A
	int b[MAX][MAX];				// 转置矩阵：B
	char c;							// 用于选择菜单的字符变量

	printf("---------- 欢迎来到超级矩阵APP ----------\n\n");
tag:printf("请输入原矩阵的行数（≤ %d）：", MAX);
	scanf_s("%d", &h);

	printf("请输入原矩阵的列数（≤ %d）：", MAX);
	scanf_s("%d", &l);
	printf("\n");

	printf("请按提示输入输入每个元素的值：\n");
	for (i = 0; i < h; i++)			// 对行的操作
	{
		for (j = 0; j < l; j++)		// 对列的操作
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

	
	// 打印输入的数组，让用户确认
	printf("让我们来确认您输入的矩阵\n");

	printf("是否显示元素序号？显示请输入'y'，不显示请输入'n'：\n");
re1:scanf_s("%c", &c, 1);
    //c = getche(); 可以避免输入函数自动将缓存中“回车”输入的情况
	if (c == 'y')
	{
		printf("您输入矩阵 A 为（显示序号）：\n");
		for (i = 0; i < h; i++)
		{
			for (j = 0; j < l; j++)
			{
				printf("a[%d,%d] = %d\t", i, j, a[i][j]);
			}
			printf("\n");			// 打印一行换一行，可以实现矩阵的显示效果
		}
	}
	else if (c == 'n')
	{
		printf("您输入矩阵 A 为（不显示序号）：\n");
		for (i = 0; i < h; i++)
		{
			for (j = 0; j < l; j++)
			{
				printf("%d\t", a[i][j]);
			}
			printf("\n");			// 打印一行换一行，可以实现矩阵的显示效果
		}
	}
	else if (c == '\n')
	{
		goto re1;					// 处理输入函数自动将缓存中“回车”输入的情况
	}
	else
	{
		printf("错误！请输入“y”或“n”：");
		goto re1;
	}
	printf("\n");
	
	printf("确认无误请输入'y'，重新输入请输入'n'：\n");
re2:scanf_s("%c", &c, 1);
    //c = getche(); 可以避免输入函数自动将缓存中“回车”输入的情况
	if (c == 'y')
	{
		printf("\n");
		printf("正在处理中，请稍后。。。\n");
	}
	else if (c == 'n')
	{
		printf("\n \n");
		goto tag;
	}
	else if (c == '\n')
	{
		goto re2;					// 处理输入函数自动将缓存中“回车”输入的情况
	}
	else
	{
		printf("错误！请输入“y”或“n”：\n");
		goto re2;
	}


	// 转置运算
	i = 0;
	j = 0;
	for (m = 0; m < l; m++)			// h 行转置后变为 l 行
	{
		for (n = 0; n < h; n++)		// l 列转置后变为 h 列
		{
			b[m][n] = a[i][j];		// 例如：b[1,3] = a[3,1]
			i++;
		}
		j++;
		i = 0;						// 当一行的数值赋值完成后，i 为 (h-1)，需要重置为 0
	}

	// 【教材方案】
	// 思维上稍微需要思考，但是代码大大简洁了：
	/*
	for (i = 0; i < h; i++)
	{
		for (j = 0; j < l; j++)
		{
			b[j][i] = a[i][j];
		}
	}
	*/

	// 显示转置结果
	printf("让我们来看看转置后的结果\n");

	printf("是否显示元素序号？显示请输入'y'，不显示请输入'n'：\n");
re3:scanf_s("%c", &c, 1);
	//c = getche(); 可以避免输入函数自动将缓存中“回车”输入的情况
	if (c == 'y')
	{
		printf("转置后的矩阵 B 为（显示序号）：\n");
		for (m = 0; m < l; m++)
		{
			for (n = 0; n < h; n++)
			{
				printf("b[%d,%d] = %d\t", m, n, b[m][n]);
			}
			printf("\n");			// 打印一行换一行，可以实现矩阵的显示效果
		}
	}
	else if (c == 'n')
	{
		printf("转置后的矩阵 B 为（不显示序号）：\n");
		for (m = 0; m < l; m++)
		{
			for (n = 0; n < h; n++)
			{
				printf("%d\t", b[m][n]);
			}
			printf("\n");			// 打印一行换一行，可以实现矩阵的显示效果
		}
	}
	else if (c == '\n')
	{
		goto re3;
	}
	else
	{
		printf("错误！请输入“y”或“n”：\n");
		goto re3;
	}

	return 0;
}