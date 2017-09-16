// ConsoleApplication4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>//定义标准I/O函数。
double dmin(double n, double m);//定义dmin函数。

int main(void)//主函数，返回值为void。
{
	double num1, num2;//定义两个double变量。
	printf("please enter two float number:(enter q to quit) \n");//提示输入。
	while (scanf("%lf %lf", &num1, &num2) == 2)//检查输入是否为double类型。
	{
		printf("the lesser of %lf and %lf is %lf\n", num1, num2, dmin(num1, num2));//如果是，在%lf处用num1，num2，dmin（num1，num2）代替。
		printf("please enter two float number:(enter q to quit):  \n");//提示重新输入。
	}
	printf("bye.\n");//程序结束。
    return 0;
}

double dmin(double n, double m)//调用dmin函数。
{
	double min;//定义最小值为double类型。
	if (n > m)//判断n是否大于m，如果是，最小值为n，否则为m。
		min = m;
	else
		min = n;
	return min;//返回给main函数min值，结束调用。
}