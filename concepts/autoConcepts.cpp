#include <iostream>

std::integral auto add (std::integral auto a,std::integral auto b){
    return a+b;
}

int main()
{
    std::cout<<"RESULT : "<<add(120,8)<<std::endl;
    std::cout<<"RESULT : "<<add((int)120.9,8)<<std::endl;

    return 0;
}