#include<iostream>
#include<conio.h>
main()
    {
    int a;
    std::cout<<"Enter age    :";
    std::cin>>a;
    if(a>=18&&a<=25)
        {
        std::cout<<"You can vote";
        }
    else if(a>=25)
        {
        std::cout<<"You can vote and contest in election";
        }
    else
        {
        std::cout<<"You can't vote or contest in elections";
        }
    }
