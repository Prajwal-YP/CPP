#include <iostream>

int main()
{
    size_t i{},count{};
    std::cin>>count;

    while(i<count)
    {
        std::cout<<i+1<<".\tI am Prajwal Y P"<<std::endl;
        ++i;
    }

    while(i)
    {
        std::cout<<i--<<" ";
    }
    return 0;
}