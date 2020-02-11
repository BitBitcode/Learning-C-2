//《C语言从入门到精通》P181
// 第 6 章 函  数
// 6.4 函数的调用
// 29、递归函数

#include<stdio.h>


//【声明】
void DisplayName(char** NameArray);


//【主函数】
int main()
{
	char* NameList[] = { "Kiana", "Mei", "Brynoa", "end" };

	DisplayName(NameList);		//【调用】

	return 0;
}


//【定义】
void DisplayName(char** NameArray) 
{
	if (*NameArray == "end")
	{
		return;
	}
	else
	{
		DisplayName(NameArray + 1);
		printf("%s \n", *NameArray);
	}
}