#include <iostream>

int sum(int a,int b)
{
    int c=a+b;
    std::cout<<"Addrress of int in sum func : "<<&c<<std::endl;
    return c;
}

std::string add(std::string s1, std::string s2)
{
    std::string s3=s1+s2;
    std::cout<<"Addrress of string in sum func : "<<&s3<<std::endl;
    return s3;
}

int main()
{
    int a{456},b{199};

    int c{sum(a,b)};
    std::cout<<"Addrress of int in main func : "<<&c<<std::endl;
    std::cout<<"Sum : "<<c<<std::endl;

    std::string s1{"12"},s2{"34"};
    std::string s3{add(s1,s2)};
    std::cout<<"Addrress of string in main func : "<<&s3<<std::endl;
    std::cout<<"Add : "<<s3<<std::endl;
    return 0;
}