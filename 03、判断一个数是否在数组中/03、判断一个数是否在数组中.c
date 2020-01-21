//《C语言从入门到精通》P125
// 第 5 章 数  组
// 5.1 一维数组
// 03、判断一个数是否在数组中

#include<stdio.h>

int main()
{
	int i;
	int n;
	int m = 10;		// m 需要赋初始值（只要不为下标的数字即可），否则最后的条件判断可能错误
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

lab1:printf("（方法一）输入你想查找的数：\n");
	scanf_s("%d", &n);

// 方法一（原创）：
	for (i = 0; i < 10; i++)
	{
		if (n == a[i])
		{
			printf("（方法一）已找到 a[%d] = %d \n", i, a[i]);
			break;
		}
		else
		{
			continue;
		}
	}
	if (i == 10)	// 注意这里不是“i ==10”，因为i为10的时候由于不满足循环条件，根本不会循环，也就到不了这一步（除非用do while）
		{
			printf("（方法一）没有查找到 %d ！请重新输入：\n\n", n);
			goto lab1;
		}
	printf("\n");

// 方法二（教材）：
lab2:printf("\n（方法二）输入你想查找的数：\n");
	scanf_s("%d", &n);

	for (i = 0; i < 10; i++)
	{
		if (n == a[i])
		{
			m = i;		// 记录下标
		}
	}
	if (m >= 0 && m <= 9)	// 需要保证下标在a[0]~a[9]之间
	{
		printf("（方法二）已找到数字 a[%d] = %d \n", m, a[m]);
	}
	else
	{
		printf("（方法二）没有查找到 %d ！请重新输入：\n\n", n);
		goto lab2;
	}
}
