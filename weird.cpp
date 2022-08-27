#include<iostream>

int main()
{
    char a{'0'}; //48
    char b{'1'}; //49

    std::cout   <<"\nValue of a :"<<a
                <<"\nsize  of a :"<<sizeof(a)
                <<"\nValue of b :"<<b
                <<"\nsize  of b :"<<sizeof(b)
                <<std::endl;
    
    std::cout   <<"\nValue of a+b :"<<a+b
                <<"\nsize  of a+b :"<<sizeof(a+b)
                <<std::endl;

    short int a1{48}; //48
    short int b1{49}; //49

    std::cout   <<"\nValue of a :"<<a1
                <<"\nsize  of a :"<<sizeof(a1)
                <<"\nValue of b :"<<b1
                <<"\nsize  of b :"<<sizeof(b1)
                <<std::endl;
    
    std::cout   <<"\nValue of a+b :"<<a1+b1
                <<"\nsize  of a+b :"<<sizeof(a1+b1)
                <<std::endl;
    
    return 0;
}