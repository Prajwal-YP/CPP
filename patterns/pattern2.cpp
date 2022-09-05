#include <iostream>

int main()
{
    int row{},column{};
    std::cout<<"Rows:\t";
    std::cin>>row;
    std::cout<<"Columns:\t";
    std::cin>>column;

    for(size_t i{};i<row;i++)
    {
        for(size_t j{};j<column;j++)
        {
            if(i==0 || i==row-1 || j==0 ||j==column-1)
            std::cout<<"* ";
            else
            std::cout<<"  ";
        }
        std::cout<<std::endl;
    }

    return 0;
}