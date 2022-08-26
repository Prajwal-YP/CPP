#include<iostream>

int main()
{
    int n1{012};
    int n2{0x14};

    std::cout<<"Sum : "<< n1+n2<< std::endl;

    if(n1+n2==30)
        std::cout<<"You are correct BOSS !!";

    // BRACED INITIALIZER
    // int x{2} CORRECT 
    // int x{2.9}; ERROR WARNING CAN NOT CONVERT HL DATA TYPE TO LL DATA TYPE
    
    // FUNCTIONAL INITIALIZER
    // int x(2.9);

    int x=2;
    std::cout<<"\nNumber\t: "<<x;

    return 0;
}