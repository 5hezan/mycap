#include<stdio.h>
#include<conio.h>
void main()
{

int a,b,c;
printf("\nEnter the numbers   :");
scanf("%d%d",&a,&b);

c=a;
a=b;
b=c;
printf("The final value is \na= %d\nb=%d",a,b);
}
