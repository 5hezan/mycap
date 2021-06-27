#include<stdio.h>
struct emp
    {
        int age, sal;
        long int ph;
        char nam[20];
    };

void main()
{
    int i;
    struct emp e[21];
    for(i=0;i<21;i++)
    {
        printf("\nEnter the name of employee %d   :",i+1);
        //gets(e[i].nam);
        scanf("%s",&e[i].nam);
        printf("\nEnter the age of %s    :",e[i].nam);
        scanf("%d",&e[i].age);
        printf("\nEnter the phone number of %s    :",e[i].nam);
        scanf("%d",&e[i].ph);
        printf("\nEnter the salary of %s    :",e[i].nam);
        scanf("%d",&e[i].sal);
    }
    printf("\nThe details are   :\nNUMBER\tNAME\tAGE\tPHONE NUMBER\tSALARY");
    for(i=0;i<21;i++)
    {
        printf("\n%d\t%s\t%d\t%ld\t\t%d",i,e[i].nam,e[i].age,e[i].ph,e[i].sal);
    }

}
