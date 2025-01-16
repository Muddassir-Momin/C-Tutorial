#include<stdio.h>
void main()
{
int k,a=0,b=1,i;
printf("Fibonacci Series: ");
for (i=1;i<=10;i++)
{
    printf("%d\n",a);
    k=a+b;
    a=b;
    b=k;
}
}