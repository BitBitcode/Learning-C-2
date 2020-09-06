//《C语言从入门到精通》P267
// 第 8 章 结构体与共用体
// 8.1 结构体
// 58、结构体变量的定义与引用


#include<stdio.h>


// 【结构体变量的定义】
// 【1】先声明结构体类型，再定义变量
// 在规模较大的程序中，通常将结构体类型的声明放在一个头文件中，源文件中包含该头文件即可，这样便于修改与维护
struct Missile
{
	char Name[10];
	char Type[20];
	int Range;
	int a[5];
	char b[20];
};
struct Missile DF26;
struct Missile DF41 = { "东风-26", "弹道导弹", 4000 };	//（1）在给出结构体变量列表的时候初始化


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


// 另外：结构体的定义可以嵌套，即在一个结构体的定义中再定义另一个结构体变量（详见 8.4 包含结构的结构）
// 【注意】结构体定义的位置不同，则作用域（或者说对函数的可见性）不同，具体参考变量的作用域


int main()
{
	// 【结构体变量的初始化】
	// 【注意】只有在初始化的时候才能对结构体变量进行整体赋值
	struct Missile DF26 = { "东风-26", "弹道导弹", 4000, {1,2,3,4,5}, "abcd" };	//（2）在定义结构体变量的时候初始化

	printf("未赋值的数组\n");
	printf("%s\n", DF26.b);

	// 【结构体变量成员的引用】
	// 对结构体变量的成员的引用与之前对普通数据类型变量的引用方法是完全一致的。当然，数组还需用循环赋值，不能整体赋值
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


//【注意】字符数组的只能在定义时进行初始化的整体赋值，否则之后不能进行整体赋值（scanf("%s", str)函数除外）
