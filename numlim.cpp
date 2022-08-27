#include<iostream>
#include <limits>
int main()
{
    std::cout   <<"\nRANGE OF short : "
                <<std::numeric_limits<short>::lowest()
                <<" to "
                <<std::numeric_limits<short>::max();
    std::cout   <<"\nRANGE OF unsigned short : "
                <<std::numeric_limits<unsigned short>::min()
                <<" to "
                <<std::numeric_limits<unsigned short>::max();
    std::cout   <<"\nRANGE OF int : "
                <<std::numeric_limits<int>::lowest()
                <<" to "
                <<std::numeric_limits<int>::max();
    std::cout   <<"\nRANGE OF unsigned int : "
                <<std::numeric_limits<unsigned int>::min()
                <<" to "
                <<std::numeric_limits<unsigned int>::max();
    std::cout   <<"\nRANGE OF long long : "
                <<std::numeric_limits<long long>::lowest()
                <<" to "
                <<std::numeric_limits<long long>::max();
    std::cout   <<"\nRANGE OF unsigned long long : "
                <<std::numeric_limits<unsigned long long>::min()
                <<" to "
                <<std::numeric_limits<unsigned long long>::max();
    std::cout   <<"\nRANGE OF float : "
                <<std::numeric_limits<float>::lowest()
                <<" to "
                <<std::numeric_limits<float>::max();
    std::cout   <<"\nRANGE OF double : "
                <<std::numeric_limits<double>::lowest()
                <<" to "
                <<std::numeric_limits<double>::max();
    std::cout   <<"\nRANGE OF long double : "
                <<std::numeric_limits<long double>::lowest()
                <<" to "
                <<std::numeric_limits<long double>::max();
                

    return 0;
}