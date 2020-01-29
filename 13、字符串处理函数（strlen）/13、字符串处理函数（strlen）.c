//《C语言从入门到精通》P146
// 第 5 章 数  组
// 5.3 字符数组
// 13、字符串处理函数（strlen）

#include<stdio.h>
#include<string.h>

int main()
{
	char str1[10];
	int length;

	printf("请输入：\n");
	gets_s(str1, 10);

	length = strlen(str1);		// 返回值为字符串的长度，不包含“\0”
	printf("该字符串的长度为：%d\n", length);

	return 0;
}
