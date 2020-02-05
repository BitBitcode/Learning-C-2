//《C语言从入门到精通》P171
// 第 6 章 函  数
// 6.3 函数参数
// 25、数组作为函数的参数

#include<stdio.h>


//【声明】
void print_number_A(int num);		// 【函数】形式参数为普通变量
void print_number_B(int num[5]);	// 【函数】形式参数为数组


//【主函数】
int main()
{
	int i;
	int array[5];

	printf("请输入一个数组（5个元素）：\n");
	
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &array[i]);
	}
	printf("已存入！\n\n");

	//【方式1】直接将数组的元素作为实际参数 依次 传入函数（本质上和之前学过的没有区别，多次调用而已）
	printf("【方式1】直接将数组的元素作为参数传入函数：\n");
	for (i = 0; i < 5; i++)
	{
		print_number_A(array[i]);	//【调用】形式参数为普通变量，实际参数为数组元素
	}
	printf("\n");

	//【方式2】调用数组作为实际参数 整体 传入函数（形式参数为数组，实际参数也为数组，传入的是整个数组）
	printf("【方式2】调用数组名作为参数传入函数：\n");
	print_number_B(array);		// // 【函数】形式参数为数组，实际参数直接写数组名即可

	return 0;
}


//【定义】
void print_number_A(int num)	// 【函数】形式参数为普通变量
{
	printf("输入的数字为：%d \n", num);
}


void print_number_B(int num[5])	// 【函数】形式参数为数组
{
	int i;	// 注意：这里的“i”是函数的内部参数，可以和其他函数中的参数重名（作用域的知识在后续会学习）
	
	for (i = 0; i < 5; i++)
	{
		printf("输入的数字为：%d \n", num[i]);
	}
}
// 【拓展】如果定义函数时省略数组长度，则参数为可变长度数组