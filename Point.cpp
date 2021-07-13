#include<iostream>
#include<conio.h>
main()
    {
    int a[5];
    int *p=a;
    for(int i=0;i<5;i++)
        {
        std::cout<<"\nEnter element "<<i<<"    :";
        std::cin>>a[i];
        }
        std::cout<<"\nThe array is  :";
    for(int i=0;i<5;i++)
        {
        std::cout<<*p<<"\t";
        p++;
        }
    return 0;
    }

