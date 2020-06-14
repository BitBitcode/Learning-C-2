//《C语言从入门到精通》P216
// 第 7 章 指  针
// 7.1 指针相关概念
// 40、指针的定义、运算、指向

#include<stdio.h>

void test(int* p1);

int main()
{
	int a = 0;
	int b = 3;

	//【指针变量的定义】指针变量必须赋值后才能使用
	int* p;			
	p = &a;			//（1）可以定义后赋值（此时不加“*”）
	int* q = &b;	//（2）也可以在定义时就赋值


	//【指针变量的访问】
	printf("\n【指针变量的访问】\n");
	printf("请输入：");
	scanf_s("%d", p);			// 现在明白为什么scanf()函数的参数要加上“&”，即：p = &a
	printf("a = %d \n", *p);	// 使用指针访问变量 a
	

	//【运算符的组合：&*，*&】（&*后跟指针，*&后跟变量）
	printf("\n【组合运算符】\n");
	printf("&*p 实际上是 &(*p)，也就是 &a，即 a 的地址：\t%p \n", &*p);
	printf("*&a 实际上是 *(&a)，也就是 *p，即 a 的值：\t%d \n", *&a);


	//【指针的算数运算】
	printf("\n【指针的算术运算】\n");
	printf("指针 p   = %p \n", p);
	printf("指针 p+1 = %p \n", (p+1));
	printf("Tip：可见指针不是简单地加了 1，而加了 4，这是因为 int 型数据占 4 字节\n");

	
	//【使用指针对变量进行运算】
	printf("\n【使用指针对变量进行运算】\n");
	printf("a + b = %d \n", *p + *q);
	printf("a - b = %d \n", *p - *q);
	printf("a * b = %d \n", *p * *q);	// 请不用担心乘法符号和指针运算符相同，也不需要加括号，因为优先级不同
	printf("a / b = %d \n", *p / *q);


	//【改变指针的指向】
	int t;
	printf("\n【改变指针的指向】\n");
	printf("原先的值及其指针：\n");
	printf("a = %d \tp = %p\n", a, p);
	//printf("a = %d \tp = %p\n", *p, p);
	printf("b = %d \tq = %p\n", b, q);
	t = p;
	p = q;
	q = t;
	printf("改变指针的指向后：\n");
	printf("a = %d \tp = %p\n", a, p);
	printf("b = %d \tq = %p\n", b, q);
	printf("Tip：可见地址交换后变量的值是不变的\n");
	// 将这一部分放在其他部分前面会报错“读取访问权限冲突”，不知道为什么


	//【易混辨析】
	printf("\n【易混辨析】\n");
	int* p1;
	int x = 520;
	p1 = &x;

	printf("*p1 = %d，p1 = %d，&p1 = %d，&(*p1) = %d \n", *p1, p1, &p1, &(*p1));
	printf("x = %d，&x = %d \n\n", x, &x);

	test(p1);

	printf("*p1 = %d，p1 = %d，&p1 = %d，&(*p1) = %d \n", *p1, p1, &p1, &(*p1));
	printf("x = %d，&x = %d \n", x, &x);
}


void test(int* p2)
{
	*p2 = 1314;
}