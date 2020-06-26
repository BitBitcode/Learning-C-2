//《C语言从入门到精通》P197
// 第 6 章 函  数
// 6.7 内部函数与外部函数
// 34、内部函数与外部函数


#include<stdio.h>

// 虽然不声明也没有报错，但是按照规范，在此处应当声明外部文件的函数
void function_A();

int main()
{
	printf("调用外部函数\n");

	function_A();		// 调用“function1.c”文件中的函数


	return 0;
}