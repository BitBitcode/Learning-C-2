//《C语言从入门到精通》P156
// 第 6 章 函  数
// 6.1 函数的简介
// 20、函数的声明、定义与调用


#include<stdio.h>
#include"function_paint.h"


// 【函数的声明】（结尾需要加上分号）
void move();
void build();
void worker();


// 【主函数部分】（主函数可以调用其他函数，但其他函数不能调用主函数）
int main()
{
	move();		//【调用】定义在其他C文件中的函数 不需要 写“#inclde"XXX.c”的预处理语句”
	printf("\n");
	build();	//【调用】调用函数：build()
	printf("\n");
	paint();	//【调用】定义在头文件中的函数 需要 写“#inclde"XXX.h”的预处理语句”
	printf("\n");
	
	// 注意：不能嵌套函数定义语句，即定义不能放在函数体中
	return 0;
}


// 【函数的定义】（结尾不加分号）
void build()
{
	worker();	// 【调用】下层函数可以相互调用
	printf("执行建造功能 \n");
}

void worker()
{
	printf("召集工人 \n");
}
