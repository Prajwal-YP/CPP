#include<iostream>

int main()
{
    size_t i{};

    do{
        i++;
        std::cout<<"13 X "<<i<<" = "<<13*i<<std::endl;
    }while(i<10);

    return 0;
}