//《C语言从入门到精通》P184
// 第 6 章 函  数
// 6.4 函数的调用
// 31、递归解分鱼问题


/* 
问题：
	五个人捕鱼，
	A将鱼分成5份，多余了1条扔掉，拿走自己的一份；
	B将鱼分成4份，多余了1条扔掉，拿走自己的一份；
	。。。 。。。
	问一共有多少鱼？
*/


#include<stdio.h>


//【声明】
int solution(int n);


//【主函数】
int main()
{
	int total;

	total = solution(5);
	printf("总共有 %d 条鱼 \n", total);
	
	return 0;
}


//【定义】
int solution(int n)
{
	if (n == 1)
	{
		int i = 0;
		do
		{
			i++;
		} 
		while (i % 5 != 0);
		return (i+1);
	}
	else
	{
		int t;
		do
		{
			t = solution(n = 1);
		} 
		while (t % 4 != 0);
		return (t / 4 * 5 + 1);
	}
}