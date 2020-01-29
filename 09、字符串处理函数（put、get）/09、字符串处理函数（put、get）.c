//《C语言从入门到精通》P141
// 第 5 章 数  组
// 5.3 字符数组
// 09、字符串处理函数（puts、gets）

#include<stdio.h>
#include<string.h>		// 字符串处理函数都需要包含头文件“string.h”

int main()
{
	char c1[] = { "hello\tKiana \nhello\tKaslana" };
	puts(c1);			// puts()函数：输出字符数组（直接写字符数组名即可，无需写下标）
	
	char c2[20];
	printf("请输入：\n");
	gets_s(c2,20);		// gets()函数已改版
	puts(c2);

	return 0;
}