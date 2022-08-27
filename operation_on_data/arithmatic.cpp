#include <iostream>

int main()
{
    int n1,n2;

    std::cout<<"Enter number 1\t:";
    std::cin>>n1;
    std::cout<<"Enter number 2\t:";
    std::cin>>n2;

    std::cout<<"\t\tSum\t\t: "<<n1+n2<<std::endl;
    std::cout<<"\t\tDifference\t: "<<n1-n2<<std::endl;
    std::cout<<"\t\tProduct\t\t: "<<n1*n2<<std::endl;
    std::cout<<"\t\tQuotient\t: "<<n1/n2<<std::endl;
    std::cout<<"\t\tRemainder\t: "<<n1%n2<<std::endl;

    return 0;
}