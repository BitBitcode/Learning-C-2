//《C语言从入门到精通》P242
// 第 7 章 指  针
// 7.5 指针作函数参数
// 51、指针变量作为函数参数

#include<stdio.h>


void swap_A(int *a,int* b);
void swap_B(int* a, int* b);


void f(int x)
{
	x = 0;
}

int main()
{
	int x, y;
	int* p_x = &x, * p_y = &y;

	printf("请依次输入两个数\n");
	scanf_s("%d", p_x);
	scanf_s("%d", p_y);

	printf("你输入的两个数为：\n");
	printf("x = %d\n", x);
	printf("y = %d\n", y);

	f(x);

	swap_A(p_x, p_y);

	printf("交换变量后两个数为：\n");
	printf("x = %d\n", x);
	printf("y = %d\n", y);
	swap_A(p_x, p_y);	// 为了下一步演示再换回来

	swap_B(p_x, p_y);

	printf("交换指针后两个数为：\n");
	printf("x = %d\n", x);
	printf("y = %d\n", y);

	return 0;
}


// 函数的参数为指针，利用指针交换两个变量的数值（真正意义上的交换）
void swap_A(int* a, int* b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}


// 函数参数也是指针，交换了两个变量的指针（实际上没有交换变量的值）
void swap_B(int* a, int* b)
{
	int* t;
	t = a;
	a = b;
	b = t;
}
