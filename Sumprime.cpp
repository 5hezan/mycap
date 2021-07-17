#include<iostream>
#include<math.h>
bool isprime(int);
int main()
{
    int a;
    std::cout<<"Enter the number     :";
    std::cin>>a;
    for(int i=a/2;i>1;i--)
    {
            if(isprime(i)&&isprime(a-i))
            {
                    std::cout<<"\n"<<a<<"="<<i<<"+"<<a-i;
            }
    }
    return 0;
}
bool isprime(int x)
{
    for(int b=2;b<x;b++)
    {
        if(x%b==0)
            return false;
    }

}
