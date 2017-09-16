#include <stdio.h>
int main(void)
{
	int num;
	for(num = 1;num <=20;num++)
	    printf("%d,%4d\n",num, num * num * num);
	printf("that'all.");
	return 0;
}
