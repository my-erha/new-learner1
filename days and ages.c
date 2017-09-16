#include <stdio.h>
int main(void)
{
	int ages;
	int days;
	printf("Please enter your ages:  ");
	scanf("%d",&ages);
	days = ages * 365;
	printf("So from you birthday to now,it's %.2d days.\n",days);
	return 0;
}
