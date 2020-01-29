//《C语言从入门到精通》P143
// 第 5 章 数  组
// 5.3 字符数组
// 11、字符串处理函数（strcpy）

#include<stdio.h>
#include<string.h>

int main()
{
	char str1[20];
	char str2[10];

	printf("请输入 str1：\n");
	gets_s(str1, 20);
	printf("请输入 str2：\n");
	gets_s(str2, 10);
	printf("\n");

	printf("str1 已输入：\n");
	puts(str1);
	printf("str2 已输入：\n");
	puts(str2);
	printf("\n");

	// 字符串复制函数，将后一个字符串复制到前一个字符串
	strcpy_s(str1, 20, str2);	// strcat()函数有变化，要给出第一个字符串的长度
	printf("让我们看看现在的 str1：\n");
	puts(str1);

	return 0;
}