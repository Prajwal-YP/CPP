#include <iostream>
#include <math.h>

int main()
{
    // FLOOR AND CEIL
    float x{3.3};
    std::cout   <<"\nfloor :"<<std::floor(x)
                <<"\nceil  :"<<std::ceil(x)
                <<std::endl;
                
    // ABSOLUTE VALUE
    double a=-2.3,b=2.3;
    std::cout   <<"\nabs value     :"<<std::abs(a)<<" "<<std::abs(b) 
                <<"\nnormal value  :"<<a<<" "<<b
                <<std::endl;
                
    // EXPONENT VALUE    (e=2.71828)
    int n=5;
    std::cout<<"\ne^5 : "<<std::exp(n)<<std::endl;

    // POWER VALUE
    std::cout<<"\n2^5 : "<<std::pow(2,5)<<std::endl;

    // LOG VALUE
    std::cout   <<"\nlog10(100) : "<<std::log10(100)
                <<"\nlog2(32) : "<<std::log2(32)
                <<"\nlog(148.41266) : "<<std::log(148.41266)
                <<std::endl;
                
    // SQUARE ROOT VALUE
    std::cout   <<"\nsqrt of 81 : "<<std::sqrt(81)
                <<"\nsqrt of 100 : "<<std::sqrt(100)
                <<"\nsqrt of 80 : "<<std::sqrt(80)
                <<std::endl;
                
    // ROUND VALUE
    std::cout   <<"\nRound 24.44:  "<<std::round(24.1)
                <<"\nRound 24.45:  "<<std::round(24.5)
                <<"\nRound 24.9:  "<<std::round(24.9)
                <<std::endl;
                
                

    return 0;
}