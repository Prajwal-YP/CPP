#include <iostream>

int main()
{
    int row{},column{};
    std::cout<<"Rows:\t";
    std::cin>>row;
    // std::cout<<"Columns:\t";
    // std::cin>>column;

    for(size_t i{1};i<=row;i++)
    {
        for(size_t j{1};j<=i;j++)
        {
            if((i+j)%2==0)
            std::cout<<"1 ";
            else
            std::cout<<"0 ";
        }
            std::cout<<std::endl;
    }

    return 0;
}