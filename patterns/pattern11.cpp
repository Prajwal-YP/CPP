#include <iostream>

int main()
{
    int row{},column{};
    // std::cout<<"Rows:\t";
    // std::cin>>row;
    std::cout<<"Columns:\t";
    std::cin>>column;

    for(size_t i{3};i>=1;i--)
    {
        for(size_t j{1};j<=column;j++)
        {
            if(j%4==0 && i==2)
            std::cout<<"* ";
            else if(j%4==i)
            std::cout<<"* ";
            else
            std::cout<<"  ";
        }
        std::cout<<std::endl;
    }

    return 0;
}