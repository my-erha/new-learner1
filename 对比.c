#include <stdio.h>
 
int gcd(int x,int y)
{
    int i;
    int max,min;
    (x>y)?(max=x,min=y):(max=y,min=x);
    if(i=max%min!=0)
        do{
            i=min;
            min=max%min;
            max=i;
        }while(min!=0);
    return max;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n",gcd(a,b));
    return 0;
}
