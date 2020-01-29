//《C语言从入门到精通》P126
// 第 5 章 数  组
// 5.1 一维数组
// 02、一维数组的初始化

#include<stdio.h>

int main()
{
	int i;
	int j;
	
	// 全部初始化
	int a[5] = { 1, 2, 3, 4, 5 };
	printf("全部初始化之后的结果：\n");
	for (i = 0; i < 5; i++)
	{
		printf("a[%d] = %d \n", i, a[i]);
	}
	printf("\n");

	// 部分初始化
	int b[5] = { 1, 2, 3 };
	printf("部分初始化之后的结果：\n");
	for (j = 0; j < 5; j++)
	{
		printf("b[%d] = %d \n", j, b[j]);
	}
	printf("\n");

	// 小技巧：隔位输出
	printf("隔 1 位输出一个元素（计数变量加 2 即可）\n");
	for (i = 0; i < 5; i += 2)
	{
		printf("a[%d] = %d \n", i, a[i]);
	}
	printf("\n");
	printf("隔 2 位输出一个元素（计数变量加 3 即可）\n");
	for (j = 0; j < 5; j += 3)
	{
		printf("b[%d] = %d \n", j, b[j]);
	}

	return 0;
}
