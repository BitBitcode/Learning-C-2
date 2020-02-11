//《C语言从入门到精通》P187
// 第 6 章 函  数
// 6.5 局部变量与全局变量
// 32、局部变量与全局变量


// 观察输出的值，理解不同变量作用域的范围

#include<stdio.h>


//【全局变量】
int A;


//【主函数】
int main()
{
	A = 1;
	int B = 2;
	printf("全局变量 A = %d \n", A);
	printf("主函数内 B = %d \n", B);
	printf("\n");

	if (B == 2)
	{
		A = 3;
		int B = 4;			// 语句块内允许同名变量（作用域不同）
		printf("全局变量 A = %d \n", A);
		printf("语句块内 B = %d \n", B);
		printf("\n");

		if (B == 4)
		{
			A = 5;
			int B = 6;		// 语句块内允许同名变量（作用域不同）
			printf("全局变量 A = %d \n", A);
			printf("嵌套语句块内 B = %d \n", B);
			printf("\n");
		}
	}

	printf("全局变量 A = %d \n", A);
	printf("语句块外 B = %d \n", B);

	return 0;
}


// 注意：函数内定义的变量不能被其他函数调用，如下列是错误的
/*
void funcion(int a)
{
	int b;
	a = 8;
	b = 9;
}

int main()
{
	printf("%d, %d", a ,b);		// 错误！！！
}
*/