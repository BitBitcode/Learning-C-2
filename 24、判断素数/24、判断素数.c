//《C语言从入门到精通》P167
// 第 6 章 函  数
// 6.2 返回语句
// 24、判断素数

#include<stdio.h>


//【声明】
int judge(int num);	//【函数】判断一个数是否为素数


//【主函数】
int main()
{
	int a;

	printf("请输入要判断的数（整数）：\n");
	scanf_s("%d", &a);

	if (judge(a))	//【调用】作为表达式调用，返回值为 1 时执行 if 之后的语句
	{
		printf("%d 是素数！\n", a);
	}
	else
	{
		printf("%d 不是素数！\n", a);
	}

	return 0;
}


//【定义】
int judge(int num)	//【函数】判断一个数是否为素数
{
	int signal = 1;
	int i;

	if (num <= 1)
	{
		return 0;
	}
	else if (num == 2)
	{
		return 1;
	}
	else
	{
		for (i = 2; i < num / 2; i++)	// 判断是否能整除，能整除则为素数
		{
			if (num % i == 0)
			{
				signal = 0;
				break;
			}
		}
		return signal;
	}
}