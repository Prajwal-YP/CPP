#include <iostream>

int main()
{
    size_t size=0;
    std::cout<<"Enter the size of the array\t: ";

    while(size<0 || size==0)
        std::cin >> size;
    const size_t n{size};
    
    int *p = new(std::nothrow) int[n]{};

    std::cout<<"Enter array elements: "<<std::endl;
    for(size_t i{};i<n;i++){
        // std::cout<<"Element-"<<i+1<<"\t: ";
        // std::cin>>p[i];
        p[i]=(i+1)*10;
    }

    std::cout<<"Array elements are : "<<std::endl;
    for(size_t i{};i<n;i++)
        std::cout<<"Element-"<<i+1<<"\t: "<<p[i]<<std::endl;


    delete[] p;
    p=nullptr;

    if(!p)
        std::cout<<"Program ended well !!";
    return 0;
}