#include <iostream>

int main()
{
    int a1[10]{1,10,100};

    // for(size_t i{};i<10;i++){
    //     std::cout<<"Enter "<<i<<" element\t= ";
    //     std::cin>>a[i];
    // }
    *(a1+9)=10;

    for(size_t i{};i<10;i++)
    std::cout<<i<<"\t= "<<a1[i]<<std::endl;

    int s{};
    for(auto i:a1)
    {
        std::cout<<"\t= "<<i<<std::endl;
        s +=i;   
    }

    std::cout<<"\n"<<s;

    return 0;
}