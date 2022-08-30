#include <iostream>

template <typename T> void max(T s1,T s2,T& s3)
{
    if(s1>s2)
        s3=s1;
    else
        s3=s2;
}

int main()
{
    std::string s1("YP");
    std::string s2("UJJWAL");
    std::string s3;

    max(s1,s2,s3);
    std::cout<<"max : "<<s3<<std::endl;

    int c{};
    double a{11},b{12.8};
    max<int>(a,b,c);    // EXPLISITE TYPE CONVERSION OF a AND b
    std::cout<<"max : "<<c<<std::endl;

    int a1{611},b1{456};
    double c1{};
    max<double>(a1,b1,c1);
    std::cout<<"max : "<<c1<<std::endl;

    max<double>(b,b1,c1);
    std::cout<<"max : "<<c1<<std::endl;

    return 0;    
}