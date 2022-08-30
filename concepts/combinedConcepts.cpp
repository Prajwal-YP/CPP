#include <iostream>

template <typename T>
concept Tiny= requires(T t){
    requires sizeof(T)<4;
};

template <typename T>
T ver(T a,T b)
requires std::floating_point<T> || Tiny<T>
{
    return a+b;
}

int main()
{
    short a{10};
    short b{20};
    std::cout<<"Ans : "<<ver(a,b)<<std::endl;

    char a1{70};
    char b1{20};
    std::cout<<"Ans : "<<ver(a1,b1)<<std::endl;

    return 0;
}