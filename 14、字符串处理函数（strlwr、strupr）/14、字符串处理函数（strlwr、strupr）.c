//《C语言从入门到精通》P147
// 第 5 章 数  组
// 5.3 字符数组
// 14、字符串处理函数（strlwr、strupr）

#include<stdio.h>
#include<string.h>

int main()
{
	char str1[10];
	char str2[10];

	// strlwr()将大写字母转换为小写字母，其他字母不变
	printf("请输入一些字母，同时包含大写字母和小写字母：\n");
	gets_s(str1, 10);
	printf("已输入：\n");
	puts(str1);
	printf("\n");

	printf("strlwr()函数将大写字母转换为小写字母：\n");
	_strlwr_s(str1, 10);	// _strlwr_s()函数有变化，要给出字符串的长度
	puts(str1);

	printf("\n");

	// strlwr()将小写字母转换为大写字母，其他字母不变
	printf("请输入一些字母，同时包含大写字母和小写字母：\n");
	gets_s(str2, 10);
	printf("已输入：\n");
	puts(str2);
	printf("\n");

	printf("strupr()函数将小写字母转换为大写字母：\n");	
	_strupr_s(str2, 10);	// _strupr_s()函数有变化，要给出字符串的长度
	puts(str2);

	return 0;
}