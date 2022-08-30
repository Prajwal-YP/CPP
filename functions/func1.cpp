#include <iostream>

int max(int,int);       //FUNCTIUON DECLARATION     (OR)    PROTOTYPE
int min(int,int);       //FUNCTIUON DECLARATION     (OR)    PROTOTYPE
int mul_inc(int,int);       //FUNCTIUON DECLARATION     (OR)    PROTOTYPE

int main()
{
    int x{},y{};
    std::cout<<"Enter two number : ";
    std::cin>>x>>y;

    std::cout<<"Max Result : "<<max(x,y)<<std::endl;
    std::cout<<"Min Result : "<<min(x,y)<<std::endl;
    std::cout<<"Mul_inc Result : "<<mul_inc(x,y)<<std::endl;

    return 0;
}

int max(int a, int b)       //FUNCTION DEFINITION
{
    if(a>b)
        return a;
    else
        return b;
}

int min(int a, int b)       //FUNCTION DEFINITION
{
    if(a>b)
        return b;
    else
        return a;
}

int mul_inc(int a, int b)       //FUNCTION DEFINITION
{
        return (++a)*(++b);
}