//《C语言从入门到精通》P190
// 第 6 章 函  数
// 6.6 变量的存储类别
// 33、变量的存储类别


/*
	变量存储类别：
	·两种形式：（1）动态存储；（2）静态存储；
	·四大类别：（1）自动【auto】；（2）静态【static】；（3）寄存器【register】；（4）外部【extern】
*/


//【声明】
void function_A();
void function_B();


#include<stdio.h>


int main()
{
	auto char i = 'a';		// 我们平时定义的其实都是“auto型”，即未说明视为省略了“auto”
	printf("for之外定义的 i = %d \n\n", i);

	printf("【函数内的变量是auto型】\n");
	for (int i = 1; i <= 5; i++)	// 允许重名定义
	{
		printf("第%d次循环：", i);
		function_A();
	}

	printf("\n");

	printf("【函数内的变量是static型】\n");
	for (int i = 0; i < 5; i++)		// 允许重名定义
	{
		printf("第%d次循环：", (i + 1));
		function_B();
	}
}


void function_A()
{
	int a = 1;
	int sum = 0;		// auto型不保留计算结果，下一次调用时 sum 仍然是 0
	sum += a;
	a++;
	printf("sum = %d \n", sum);
}


void function_B()
{
	int a = 1;
	static int sum = 0;	// static型保留计算结果，下一次调用时 sum 为上一次的结果
	sum += a;
	a++;
	printf("sum = %d \n", sum);
}


// 需要注意的是：虽然static型不释放内存，但函数之外的语句也不能调用这个变量，即作用域不变