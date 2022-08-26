#include<iostream>
#include<iomanip>

void print(double n1,double n2)
{
    std::cout<<std::setprecision(5);
    std::cout<<n1<<"/"<<n2<<"\t= "<<n1/n2<<std::endl;
}

int main()
{
    double n1=12.3;
    double n2{0.0};
    
    print(n1,n2);

    n1=12.3;
    n2=0;
    print(n1,n2);

    int nn1=0;
    n2=0;
    print(nn1,n2);

    n1=12.9;
    n2=0.0;
    double res;
    res=n1/n2;
    print(res,n1);
    print(n1,res);

    res=n2/n2;
    print(res,n1);
    print(n1,res);



    return 0;
}