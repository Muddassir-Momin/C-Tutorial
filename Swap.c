#include<stdio.h>
void main()
{                                                 //With Thired Variable
    int a,b,c;
    printf("Enter Two Numbers:\n");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("Swapped Numbers : a=%d And b=%d ",a,b);
}