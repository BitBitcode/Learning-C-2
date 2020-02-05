//《C语言从入门到精通》P174
// 第 6 章 函  数
// 6.3 函数参数
// 26、求字符串中字符的个数

#include<stdio.h>


//【声明】
int length_A(char string[]);
int length_B(char *p);


//【主函数】
int main()
{
	int i;
	char str[100];

	printf("请输入一个字符串（100个字符以内）：\n");
	gets_s(str, 100);

	// 注意：输出“\0”时，其中的“\”需要使用转义字符“\\”
	printf("字符串的长度为（不包含“\\0”）：%d \n", length_A(str));
	printf("字符串的长度为（不包含“\\0”）：%d \n", length_B(str));

	return 0;
}


//【定义】
int length_A(char string[])	// 定义参数为可变长度的字符型数组
{
	int i;
	int n = 0;

	for (i = 0; i < 100; i++)
	{
		if (string[i] != '\0')
		{
			n++;
			continue;
		}
		else if (string[i] == '\0')
		{
			break;
		}
		else
		{
			printf("ERROR!");
			break;
		}
	}

	return n;
}


//【拓展】
// 教材上是用指针写的（但还没有学到指针，所以就用自己的方法写了上面的函数）

int length_B(char* p)	// 定义参数为指针
{
	int i;
	int n = 0;

	while (*p != '\0')
	{
		n++;
		p++;	// 指针向后移动一位
	}

	return n;
}