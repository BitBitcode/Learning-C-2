//《C语言从入门到精通》P211
// 第 6 章 函  数
// 6.9 经典范例
// 39、一数三平方


/*
问题：
	有一个 6 位数，
	它本身是一个整数的平方，
	其前 3 位和后 3 位也分别是一个整数的平方
	例如：225,625 = 475^2，而 225 = 15^2，625 = 25^2
*/


#include<stdio.h>
#include<math.h>

int main()
{
	long n, f3, b3;			// 要找的数及其前 3 位和后 3 位
	long s, s1, s2;			// 以上三个数相对应的开方值
	int i = 0;

	for (n = 100000; n <= 999999; n++)	// 遍历所有 6 位数
	{
		
		s = (long)sqrt(n);	// 强制类型转换
		
		if (n == s * s)		// 如果开方后是整数，则强制类型转换后不会丢失数据，平方后等于原来的书
		{
			f3 = n / 1000;	// 取前三位
			b3 = n % 1000;	// 取后三位
			s1 = (long)sqrt(f3);
			s2 = (long)sqrt(b3);
			if (f3 == s1 * s1 && b3 == s2 * s2)	// 和上面计算s的原理相同
			{
				i++;
				printf("【%d】%ld\t", i, n);
				printf("\t%ld = %ld^2", n, s);
				printf("\t\t%ld = %ld^2", f3, s1);
				printf("\t\t%ld = %ld^2", b3, s2);
				printf("\n\n");
			}
		}
	}
	printf("【完成】一共有 %d 个！\n", i);

	return 0;
}