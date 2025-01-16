#include<stdio.h>
void main()
{
    int r,i,j;
    printf("Enter The row:");
    scanf("%d",&r);
    for(i=r+1;i>0;i--)
    {
        for(j=1;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}