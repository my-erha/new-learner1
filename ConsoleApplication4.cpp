// ConsoleApplication4.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>//�����׼I/O������
double dmin(double n, double m);//����dmin������

int main(void)//������������ֵΪvoid��
{
	double num1, num2;//��������double������
	printf("please enter two float number:(enter q to quit) \n");//��ʾ���롣
	while (scanf("%lf %lf", &num1, &num2) == 2)//��������Ƿ�Ϊdouble���͡�
	{
		printf("the lesser of %lf and %lf is %lf\n", num1, num2, dmin(num1, num2));//����ǣ���%lf����num1��num2��dmin��num1��num2�����档
		printf("please enter two float number:(enter q to quit):  \n");//��ʾ�������롣
	}
	printf("bye.\n");//���������
    return 0;
}

double dmin(double n, double m)//����dmin������
{
	double min;//������СֵΪdouble���͡�
	if (n > m)//�ж�n�Ƿ����m������ǣ���СֵΪn������Ϊm��
		min = m;
	else
		min = n;
	return min;//���ظ�main����minֵ���������á�
}