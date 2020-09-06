//《C语言从入门到精通》P290
// 第 8 章 结构体与共用体
// 8.5 链  表
// 64、链表


#include<stdio.h>


struct Student
{
	char name[20];
	int num;
	float score;
	struct Student* pNext;
};


int i;

struct Student* create()
{
	struct Student* pHead = NULL;
	struct Student* pEnd;
	struct Student* pNew;
	i = 0;
}


int main()
{
	

	return 0;
}