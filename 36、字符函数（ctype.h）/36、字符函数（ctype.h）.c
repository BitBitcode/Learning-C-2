//《C语言从入门到精通》P197
// 第 6 章 函  数
// 6.8 库函数
// 36、字符函数（ctype.h）

#include<stdio.h>
#include<ctype.h>

int main()
{
	char ch;
	int x;

	//【检测字母】
	printf("请输入：");
	scanf_s("%c", &ch, 1);
	x = isalpha(ch);
	printf("%d \n", x);

	//【检测数字】
	printf("请输入：");
	getchar();
	scanf_s("%c", &ch, 1);
	x = isdigit(ch);
	printf("%d \n", x);

	//【检测字母或数字】
	printf("请输入：");
	getchar();
	scanf_s("%c", &ch, 1);
	x = isalnum(ch);
	printf("%d \n", x);

	return 0;
}