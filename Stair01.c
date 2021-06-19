#include<stdio.h>
void main()
{
int i,j,n;
printf("How many stairs do you want?");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
    for(j=0;j<i;j++)
    {
        printf("01");
    }
    printf("\n");
}
}
