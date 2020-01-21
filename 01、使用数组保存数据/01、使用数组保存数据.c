//《C语言从入门到精通》P125
// 第 5 章 数  组
// 5.1 一维数组
// 01、使用数组保存数据

#include<stdio.h>

int main()
{
	int a[5];
	int i;
	int n;

	// 将元素存入数组
	printf("请依次输入 5 个整数作为数组元素 \n（每输入一个按下回车）\n");
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &a[i]);
		printf("已存入！\n");
	}
	
	// 将数组中的元素输出
	printf("\n 数组中的元素为：\n");
	for (i = 0; i < 5; i++)
	{
		printf("a[%d] = %d; \n", i, a[i]);
	}
	
	// 将数组中元素的顺序调换
	for (i = 0; i < 3; i++)
	{
		n = a[i];
		a[i] = a[4 - i];
		a[4 - i] = n;
	}

	printf("\n 顺序更换后的数组：\n");
	for (i = 0; i < 5; i++)
	{
		printf("a[%d] = %d; \n", i, a[i]);
	}

	return 0;
}
