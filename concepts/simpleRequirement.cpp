#include <iostream>

template <typename T>
concept Tiny=requires(T a){
    sizeof(T)<=4;
    requires sizeof(T)<=4;
};

template <Tiny T>
T verify(T a)
{
    return a++;
}

int main()
{
    int a{5};
    auto r=verify(a);
    std::cout<<"Result : "<<r<<std::endl;
    
    int a1{5};
    auto r1=verify(a1);
    std::cout<<"Result : "<<r1<<std::endl;


    return 0;
}