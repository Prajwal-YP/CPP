#include <iostream>

int main()
{
    int row{},column{},k{1};
    std::cout<<"Rows:\t";
    std::cin>>row;
    // std::cout<<"Columns:\t";
    // std::cin>>column;

    for(size_t i{1};i<=row;i++)
    {
        for(size_t j{1};j<=row*2;j++)
        {
            if(j<=i || j>(row*2)-i)
            std::cout<<"* ";
            else
            std::cout<<"  ";
        }
            std::cout<<std::endl;
    }
    for(size_t i{1};i<=row;i++)
    {
        for(size_t j{1};j<=row*2;j++)
        {
            if(j<=row-i+1 || j>=row+i)
            std::cout<<"* ";
            else
            std::cout<<"  ";
        }
            std::cout<<std::endl;
    }

    return 0;
}