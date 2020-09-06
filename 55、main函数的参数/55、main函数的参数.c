//《C语言从入门到精通》P256
// 第 7 章 指  针
// 7.8 main函数的参数
// 55、main函数的参数

#include<stdio.h>

int main(int argc, char* argv[])
{
	printf("命令名称：\n");
	printf("%s\n", *argv);
	printf("参数个数：\n");
	printf("%d\n", argc);
	return 0;
}


/*
【控制台输出内容】
==========开  始==========
命令名称：
C:\Github\Learning-C-2\x64\Debug\55、main函数的参数.exe
参数个数：
1
==========结  束==========

经测试，将命令内容直接输入到控制台中，依然可以运行该程序
*/