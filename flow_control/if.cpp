#include <iostream>

int main()
{
    int n1,n2,n3,check=1;

    std::cin>>n1>>n2>>n3;

    std::cout   <<"\nNumber1: "<<n1
                <<"\nNumber2: "<<n2
                <<"\nNumber3: "<<n3
                <<std::endl;
    
    if(check)   //if statement
    {
        /*
            if else statement
            nested if else
        */
        if(n1>n2 && n1>n3)
            std::cout<<"\nGreatest: "<<n1;
        else
        {
            if(n2>n3)
                std::cout<<"\nGreatest: "<<n2;
            else
                std::cout<<"\nGreatest: "<<n3;
        }
    }

    return 0;
}