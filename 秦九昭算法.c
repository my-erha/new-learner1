#include <stdio.h>
#include <math.h>  
float qin(float a[],int n,float x)  
{  
    float r=0;  
    int i;  
    for(i=n; i>=0; i--)     r=r*x+a[i];  
    return r;  
}  
main()  
{  
    float a[50],x,r=0;  
    int n,i;  
    do  
    {  
        printf("Input frequency:");  
        scanf("%d",&n);  
    }  
    while(n<1);  
    printf("Input value:");  
    for(i=0; i<=n; i++)  
        scanf("%f",&a[i]);  
    printf("Input frequency:");  
    scanf("%f",&x);  
    r=qin(a,n,x);  
    printf("Answer:%f",r);  
    getch();  
}  
