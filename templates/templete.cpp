#include <iostream>

template <typename T> void max(T s1,T s2,T& s3)
{
    if(s1>s2)
        s3=s1;
    else
        s3=s2;
}

// void max(const std::string& s1,const std::string& s2,std::string& s3)
// {
//     if(s1>s2)
//         s3=s1;
//     else
//         s3=s2;
// }

// void max(int s1,int s2,int& s3)
// {
//     if(s1>s2)
//         s3=s1;
//     else
//         s3=s2;
// }

// void max(double s1,double s2,double* s3)
// {
//     if(s1>s2)
//         *s3=s1;
//     else
//         *s3=s2;
// }

int main()
{
    std::string s1("YP");
    std::string s2("UJJWAL");
    std::string s3;

    max(s1,s2,s3);
    std::cout<<"max : "<<s3<<std::endl;

    int a{11},b{45},c{};
    max(a,b,c);
    std::cout<<"max : "<<c<<std::endl;

    double a1{611.8},b1{456.8},c1{};
    max(a1,b1,c1);
    std::cout<<"max : "<<c1<<std::endl;


    return 0;    
}