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
        for(size_t j{1};j<=row-i;j++)
            std::cout<<"  ";
        for(size_t j{1};j<2*i;j++)
            std::cout<<"* ";

        std::cout<<std::endl;
    }

    for(int i{row};i>=1;i--)
    {
        for(int j{row};j>i;j--)
            std::cout<<"  ";
        for(int j{1};j<2*i;j++)
            std::cout<<"* ";

        std::cout<<std::endl;
    }

    return 0;
}