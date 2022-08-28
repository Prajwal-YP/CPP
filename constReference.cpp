#include<iostream>

int main()
{
    int a=10;
    int &x{a};

    std::cout<<"\nValue of a : "<<a<<std::endl;
    std::cout<<"address of a : "<<&a<<std::endl;
    std::cout<<"Value of x : "<<x<<std::endl;
    std::cout<<"address of x : "<<&x<<std::endl;

    const int & y{a};
    std::cout<<"\nValue of a : "<<a<<std::endl;
    std::cout<<"address of a : "<<&a<<std::endl;
    std::cout<<"Value of x : "<<x<<std::endl;
    std::cout<<"address of x : "<<&x<<std::endl;
    std::cout<<"Value of y : "<<y<<std::endl;
    std::cout<<"address of y : "<<&y<<std::endl;

    x++;
    std::cout<<"-------------t\nx++;\n-------------;"<<std::endl;
    std::cout<<"\nValue of a : "<<a<<std::endl;
    std::cout<<"address of a : "<<&a<<std::endl;
    std::cout<<"Value of x : "<<x<<std::endl;
    std::cout<<"address of x : "<<&x<<std::endl;
    std::cout<<"Value of y : "<<y<<std::endl;
    std::cout<<"address of y : "<<&y<<std::endl;

    // y++;
    std::cout<<"-------------t\nx++;\t(error: increment of read-only reference 'y')\n-------------;"<<std::endl;
    std::cout<<"\nValue of a : "<<a<<std::endl;
    std::cout<<"address of a : "<<&a<<std::endl;
    std::cout<<"Value of x : "<<x<<std::endl;
    std::cout<<"address of x : "<<&x<<std::endl;
    std::cout<<"Value of y : "<<y<<std::endl;
    std::cout<<"address of y : "<<&y<<std::endl;

    int const *xy{&a};
    // int z;
    // xy=&z; WORKING
    std::cout<<"\nValue of a : "<<a<<std::endl;
    std::cout<<"address of a : "<<&a<<std::endl;
    std::cout<<"Value of x : "<<x<<std::endl;
    std::cout<<"address of x : "<<&x<<std::endl;
    std::cout<<"Value of y : "<<y<<std::endl;
    std::cout<<"address of y : "<<&y<<std::endl;
    std::cout<<"Value of xy : "<<xy<<std::endl;
    std::cout<<"Value of *xy : "<<*xy<<std::endl;
    std::cout<<"address of xy : "<<&xy<<std::endl;

    // *xy=8;           NOT WORKING
    // a=8;x=9;            WORKING
    std::cout<<"-------------t\n*xy=8;\t(error: assignment of read-only location '* xy')\n-------------;"<<std::endl;
    std::cout<<"\nValue of a : "<<a<<std::endl;
    std::cout<<"address of a : "<<&a<<std::endl;
    std::cout<<"Value of x : "<<x<<std::endl;
    std::cout<<"address of x : "<<&x<<std::endl;
    std::cout<<"Value of y : "<<y<<std::endl;
    std::cout<<"address of y : "<<&y<<std::endl;
    std::cout<<"Value of xy : "<<xy<<std::endl;
    std::cout<<"Value of *xy : "<<*xy<<std::endl;
    std::cout<<"address of xy : "<<&xy<<std::endl;
    
    return 0;
}