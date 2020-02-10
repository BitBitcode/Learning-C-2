//《C语言从入门到精通》P176
// 第 6 章 函  数
// 6.4 函数的调用
// 28、函数的三种调用方式
#include<stdio.h>
#include<math.h>

int main()
{
	float a, b;

	printf("请输入：\n");
	scanf_s("%f", &a);						//【函数语句调用】
	b = abs(a);								//【函数表达式调用】
	printf("%.2f 开方等于：%.3f \n",a ,sqrt(b));	//【函数参数调用】

	return 0;
}