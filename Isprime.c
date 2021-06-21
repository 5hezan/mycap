#include<stdio.h>
int isprime(int n,int i)
{
    if (i==1)
    {
        return 0;
    }
    else
    {
        if(n%i==0)
        {
            return 1;
        }
        else
        {
            isprime(n,i-1);
        }
    }
}
void main()
{
    int a,prime
    ;
    printf("Enter the number    :");
    scanf("%d",&a);
    prime=isprime(a,a/2);
    if(prime==0)
    {
        printf("Prime");
    }
    else
    {
        printf("Composite");
    }

}
