#include <iostream>

int main()
{
    int a{10};
    // POSTFIX OPERATOR
    std::cout<<"\ta++ : "<<a++<<std::endl;
    std::cout<<"\ta : "<<a<<std::endl;
    std::cout<<"\ta-- : "<<a--<<std::endl;
    std::cout<<"\ta : "<<a<<std::endl;
    
    // PREFIX OPERATOR
    std::cout<<"\t++a : "<<++a<<std::endl;
    std::cout<<"\ta : "<<a<<std::endl;
    std::cout<<"\t--a : "<<--a<<std::endl;
    std::cout<<"\ta : "<<a<<std::endl;
    

    return 0;
}