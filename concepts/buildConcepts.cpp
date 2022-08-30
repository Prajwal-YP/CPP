#include <iostream>
#include <concepts>

template <typename T>
concept MyIntegral  =   std::is_integral_v<T>;

MyIntegral auto add (MyIntegral auto a,MyIntegral auto b)
{
    return (a+b);
}

template <typename T>
concept Multiplicable  = requires(T a,T b) { a*b; };
Multiplicable auto mul (Multiplicable auto a,Multiplicable auto b)
{
    return (a+b);
}

template <typename T>
concept concatable  = requires(T a,T b) { a+b; };
concatable auto cat(concatable auto a,concatable auto b)
{
    return (a+b);
}


int main()
{
    std::string a{"78"},b{"98"};
    auto c=cat(a,b);
    std::cout<<"Result : "<<c<<std::endl;

    return 0;
}