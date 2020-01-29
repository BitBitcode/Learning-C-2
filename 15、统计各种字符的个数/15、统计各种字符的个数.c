//《C语言从入门到精通》P148
// 第 5 章 数  组
// 5.3 字符数组
// 15、统计各种字符的个数

// 复习：
// ASCII码值在48~57之间：数字
// ASCII码值在65~90：大写字母
// ASCII码值在97~122：小写字母
// 除此之外是特殊字符

#include<stdio.h>

int main()
{
	char c;				// 字符变量
	int letters = 0;	// 字母的个数
	int spaces = 0;		// 空格的个数
	int digit = 0;		// 数字的个数
	int others = 0;		// 其他
	
	printf("请输入一个字符串：\n");
	//c = getch();
	while ((c = getchar) != '\n')
	{
		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		{
			letters++;	// 统计字母
		}
		else if (c == ' ')
		{
			spaces++;	// 统计空格
		}
		else if (c >= '0' && c <= '9')
		{
			digit++;	// 统计数字
		}
		else
		{
			others++;	// 统计其他字符
		}
	}

	printf("字母：%3d \n空格：%3d \n数字：%3d \n其他：%3d \n", letters, spaces, digit, others);

	return 0;
}