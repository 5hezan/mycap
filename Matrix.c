#include<stdio.h>
void main()

{
    int arr[3][3],i,j;
    int *p, *q;
    p=&arr;
    q=&arr;
    printf("\nEnter the values of the 2D array");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\nEnter the value for a[%d][%d]     :",i,j);
            scanf("%d",(p++));
        }
    }
    //*p[][]=&arr[][];
    printf("\nThe entered 2D array is    :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",*q++);
        }
        printf("\n");
    }

}
