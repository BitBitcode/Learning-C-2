//《C语言从入门到精通》P245
// 第 8 章 结构体与共用体
// 8.1 结构体
// 58、结构体变量的定义与引用


#include<stdio.h>


// 【结构体变量的定义】
// 【1】先声明结构体类型，再定义变量
struct Missile
{
	char Name[10];
	char Type[20];
	int Range;
	int a[5];
	char b[20];
};
struct Missile DF26;
struct Missile DF41;
// 在规模较大的程序中，通常将结构体类型的声明放在一个头文件中，源文件中包含该头文件即可，这样便于修改与维护

// 【2】在声明结构体类型的同时定义变量
struct Aircraft
{
	char Name[10];
	char Type[10];
	int Generation[10];
	int CombatRadius[10];
}J20, Y20;

// 【3】直接定义结构体类型变量
struct
{
	char Name[10];
	char Type[10];
	int Generation[10];
	int CombatRadius[10];
}DDG052D, DDG055;

// 另外：结构体的定义可以嵌套，即在一个结构体的定义中再定义另一个结构体变量


int main()
{
	struct Missile DF26 = { "", "", 0, {1,2,3,4,5}, "abcd" };	// 初始化

	printf("未赋值的数组\n");
	printf("%s\n", DF26.b);

	for (int i = 0; i < 5; i++)
	{
		DF26.a[i] = 1;
	}
	for (int i = 0; i < 4; i++)
	{
		DF26.b[i] = 'a';
	}
	printf("\n");

	printf("赋值后的数组\n");
	printf("%s\n", DF26.b);
	printf("\n");

	printf("请输入：\n");
	scanf_s("%s", &DF26.b, 20);
	printf("输入后的数组\n");
	printf("%s\n", DF26.b);
}