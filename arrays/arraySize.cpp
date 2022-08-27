#include <iostream>

int main()
{
    int a[]{1,1,1,1,1,1,1,1,1};

    int x=std::size(a);
    int x1=sizeof(a)/sizeof(a[0]);

    std::cout<<"Size of a\t: "<<x<<std::endl;
    std::cout<<"Size of a\t: "<<x1<<std::endl;

    return 0;
}