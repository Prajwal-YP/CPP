#include <iostream>

void max(const std::string& s1,const std::string& s2,std::string& s3)
{
    if(s1>s2)
        s3=s1;
    else
        s3=s2;
}

void maxi(int s1,int s2,int& s3)
{
    if(s1>s2)
        s3=s1;
    else
        s3=s2;
}

void maxd(double s1,double s2,double* s3)
{
    if(s1>s2)
        *s3=s1;
    else
        *s3=s2;
}

int main()
{
    std::string s1("YP");
    std::string s2("UJJWAL");
    std::string s3;

    max(s1,s2,s3);
    std::cout<<"max : "<<s3<<std::endl;

    int a{11},b{45},c{};
    maxi(a,b,c);
    std::cout<<"maxi : "<<c<<std::endl;

    double a1{611.8},b1{456.8},c1{};
    maxd(a1,b1,&c1);
    std::cout<<"maxd : "<<c1<<std::endl;


    return 0;    
}