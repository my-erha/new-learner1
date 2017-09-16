#include <stdio.h>
int main(void)
{
	int a = 1;
	int b = 100;
	while(b < 200)
	{
		a++;
		b = b + 10;
	}
	printf("%d,%d", a, b);
	return 0;
} 
