#include<stdio.h>
int main()
{
    int a,k,i,j;
    printf("enter the numbers");
    scanf("%d",&a);
    for(i=1;i<=10;i++)
    {
        for(j=1;j<i;j++)
        {
           printf("%d",j);
        }
        printf("\n");
    }
}