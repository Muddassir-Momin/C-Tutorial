#include<stdio.h>
void pyramid(int a)
{
    int i,j;                 //Two Integer for Loop
    for(i=a;i>0;i--)     // i = number of Rows
    {
        for(j=1;j<=i;j++)  // j = number of Column
        {
            printf("*");     // Print *
        }
        printf("\n");  // Next line
    }
}
int main()
{
    int a;       //integer variable for store user input
    printf("Enter The Number of Rows:"); //Display Instruction 
    scanf("%d",&a); 
    pyramid(a);   //call the function and pass 'a'
}