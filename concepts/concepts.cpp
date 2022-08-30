#include <iostream>
#include <concepts>


//                  SYNTAX 1    
template <typename T>
requires std::integral<T>
T add( T a, T b)
{
    return a+b;
}


//                  SYNTAX 2
// template <std::integral T>
// T add( T a, T b)
// {
//     return a+b;
// }


//                 SYNTAX 3
// auto add(std::integral auto a,std::integral auto b)
// {
//     return a+b;
// }


//                 SYNTAX 4
// template <typename T>
// T add( T a, T b)
// requires std::integral<T>
// {
//     return a+b;
// }


int main()
{
    int a{34},b{76};
    auto c=add(a,b);
    std::cout<<"Sum : "<<c<<std::endl;

    char a1{'A'},b1{'0'};
    auto c1=add(a1,b1);
    std::cout<<"Sum : "<<static_cast<int>(c1)<<std::endl;

    double a2{34.7},b2{76.9};
    auto c2=add<int>(a2,b2);
    std::cout<<"Sum : "<<c2<<std::endl;

    return 0;
}