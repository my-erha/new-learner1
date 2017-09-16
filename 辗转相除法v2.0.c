#include <stdio.h>
int main(void)
{
	int a, b;
	int x;
	printf("please enter two number:(enter q to quit)  \n");
	while(scanf("%d %d",&a,&b) != 'q')
	{
		if(a > b)
		{
			x = a % b;
			if(x > b)
			
				a = x;
			else
				b = x;
		}
		else
		{
			x = b % a;
			if(x > a)
				b = x;
			else
				a = x;
		}
		if(x != 0)
		if(x == 0&&a > b)
			printf("%d\n",b);
		else
			printf("%d\n",a);
	}
	printf("bye.");
	return 0;
}		
