/*

��Kiana ϵ�п⡿

 ������Kiana_math.h
 ��飺
	��Kiana ϵ��ͷ�ļ��� BitBitcode �Զ��庯���ķ�װ��
	��Kiana_Math.h ���й�һЩ��ѧ����Ŀ�
 ��꣺
	��PAI 3.1415926
	��E 2.7182818
 �⺯����
	��int is_prime_number(int num)���ж�һ�����Ƿ�Ϊ����
	��float average_array(float number[], int n)���������ƽ��ֵ
	��int gcd(int a, int b)�������Լ��
	��int lcm(int a, int b)������С������
	��void reduction(int numerator, int denominator)��Լ��
 ������Ϣ��
	���������䣺smilewwc@qq.com
	��������ҳ��https://bitbitcode.github.io/
	����Դ��ַ��https://github.com/BitBitcode
 �������ڣ�2020.2.13
 ������־��

 Copyright (c) BitBitcode. All rights reserved.

 */


//����׼���ļ���
#include<stdio.h>
#include<math.h>


//���Զ���꡿
// ��������ѧ�г��õ�һЩ������Ĭ��С����� 7 λ�����������С����� 6 λ����������Ϊ 7 λ��������Ҫ��
#define PAI 3.1415926		// ���С�Բ����
#define E 2.7182818			// ��e����Ȼ����


//���������ж�һ�����Ƿ�Ϊ������Prime Number��
//����Դ��Learning-C-24
//�����������ͣ�������жϵ���
//������ֵ������������ 1�������������� 0
int is_prime_number(int num)
{
	int signal = 1;
	int i;

	if (num <= 1)
	{
		return 0;
	}
	else if (num == 2)
	{
		return 1;
	}
	else
	{
		for (i = 2; i < num / 2; i++)	// �ж��Ƿ�����������������Ϊ����
		{
			if (num % i == 0)
			{
				signal = 0;
				break;
			}
		}
		return signal;
	}
}


//���������������ƽ��ֵ
//����Դ��Learning-C-27
//�������������ͣ��ɱ䳤�����飻���ͣ����鳤��
//������ֵ�������ͣ�ƽ��ֵ
float average_array(float number[], int n)
{
	int i;
	float average_value;
	float sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += number[i];
	}

	average_value = sum / n;

	return average_value;
}


//�������������Լ����Greatest_Common_Divisor��
//����Դ��Learning-C-30
//�����������ͣ�����a�����ͣ�����b
//������ֵ�����ͣ����Լ��
int gcd(int a, int b)
{
	return b ? gcd(b, a % b) : a;
}


//������������С��������Least_Common_Multiple��
//����Դ��Learning-C-30
//�����������ͣ�����a�����ͣ�����b
//������ֵ�����ͣ���С������
int lcm(int a, int b)
{
	return a / gcd(a, b) * b;
}


//��������Լ�֣�Reduction��
//����Դ��Learning-C-30
//�����������ͣ����ӣ����ͣ���ĸ
//������ֵ��������
void reduction(int numerator, int denominator)
{
	int Greatest_Common_Divisor;							// �������ͱ��������Լ��

	Greatest_Common_Divisor = gcd(numerator, denominator);	// ������ӷ�ĸ�����Լ��

	numerator /= Greatest_Common_Divisor;					// ���ӳ������Լ��
	denominator /= Greatest_Common_Divisor;					// ��ĸ�������Լ��
	printf("Լ�ֺ�Ϊ��%d/%d \n", numerator, denominator);
}