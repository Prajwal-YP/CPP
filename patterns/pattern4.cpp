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
        for(size_t j{1};j<=row;j++)
        {
            if(j>row-i)
            std::cout<<"* ";
            else
            std::cout<<"  ";
        }
            std::cout<<std::endl;
    }

    return 0;
}