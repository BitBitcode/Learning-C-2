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
	struct Missile DF26 = { "", "", 0 };	// 初始化

}