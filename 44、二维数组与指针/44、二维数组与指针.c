//《C语言从入门到精通》P231
// 第 7 章 指  针
// 7.3 二维数组与指针
// 44、二维数组与指针

#include<stdio.h>

int main()
{
	//【定义二维数组的指针】
	int A[3][5], i, j, * p;
	int B[3][5], k, l, * q;
	
	p = A[0];		// A[0]代表第 0 行的首地址，即：&A[0][0]
	q = &B[0][0];	// 以上两种写法是等价的

	printf("【使用指针输入二维数组】\n");
	printf("请输入 A 数组：\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("A[%d][%d] = ", i, j);
			scanf_s("%d", (A[i] + j));	// 通过数组名访问地址
		}
		printf("\n");
	}
	printf("\n");

	printf("请输入 B 数组：\n");
	for (k = 0; k < 3; k++)
	{
		for (l = 0; l < 5; l++)
		{
			printf("B[%d][%d] = ", k, l);
			scanf_s("%d", q++);			// 通过指针访问地址
		}
		printf("\n");
	}
	printf("\n");

	printf("【使用指针输出整个二维数组】\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("A[%d][%d] = %d \t", i, j, *(A[i]+j));	// 通过数组名调用地址
		}
		printf("\n");
	}
	printf("\n");

	q = B[0];												// 【注意】调用指针输出前一定要先使指针回位！
	for (k = 0; k < 3; k++)
	{
		for (l = 0; l < 5; l++)
		{
			
			printf("B[%d][%d] = %d \t", k, l, *q++);		// 通过指针调用地址
		}
		printf("\n");
	}
	printf("\n");

	return 0;
}