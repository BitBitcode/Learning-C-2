//《C语言从入门到精通》P231
// 第 7 章 指  针
// 7.2 一维数组与指针
// 43、逆序存放数组元素

#include<stdio.h>


//【声明】
int invert(int* x, int n);


//【主函数】
int main()
{
	int i;
	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };

	printf("原数组：");
	for (i = 0; i < 10; i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");

	invert(a, 10);			//【调用】

	printf("现数组：");
	for (i = 0; i < 10; i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");

	return 0;
}


//【定义】
int invert(int* x, int n)
{
	int* p, * i, * j;
	int temp, m;

	m = (n - 1) / 2;
	i = x;				// 数组首地址
	j = x + n - 1;		// 数组末地址
	p = x + m;			// 数组中间元素地址

	for (; i <= p; i++, j--)	// 左边往右走，右边往左走
	{
		temp = *i;
		*i = *j;
		*j = temp;
	}
}
