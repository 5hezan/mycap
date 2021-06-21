#include<stdio.h>
int lcm(int,int);
void main()
{
    int i,j,k;
    printf("Enter 2 numbers to find LCM     :");
    scanf("%d%d",&i,&j);
    k=lcm(i,j);
    printf("The LCM of %d and %d is %d",i,j,k);
    }
int lcm(int a,int b)
{
    static int temp=1;
    if(temp%a==0&&temp%b==0)
    {
        return temp;
    }
    else
    {
        temp++;
        lcm(a,b);
        return temp;
    }
}
