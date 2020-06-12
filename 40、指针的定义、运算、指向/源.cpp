#include<stdio.h>

void test(int* p1);

int main()
{
	int* p1 = NULL;
	int p = 2333;
	p1 = &p;

	printf("*p1 = %d£¬p1 = %d£¬&p1 = %d£¬&(*p1) = %d \n", *p1, p1, &p1, &(*p1));
	printf("p = %d£¬&p = %d \n\n", p, &p);

	test(p1);

	printf("*p1 = %d£¬p1 = %d£¬&p1 = %d£¬&(*p1) = %d \n", *p1, p1, &p1, &(*p1));
	printf("p = %d£¬&p = %d \n", p, &p);

	return 0;
}

void test(int* p1)
{
	*p1 = 114514;
}