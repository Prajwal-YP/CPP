#include<iostream>

int add(int n1,int n2)
{
    return n1+n2;
}

int mul(int n1,int n2)
{
    return n1*n2;
}

int main(int c, char **v)
{
    int n1=atoi(v[1]),n2=atoi(v[2]);

    std::cout<< "Sum\t\t:\t" << add(n1,n2) << std::endl;
    std::cout<< "Product\t\t:\t" << mul(n1,n2) << std::endl;

    return 0;
}