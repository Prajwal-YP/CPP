#include<iostream>

int main()
{
    char *p{};
    char var[]{"Prajwal Y P"};
    p=var;

    std::cout<<"p "<<p<<"\n*p "<<*p<<"\nsize of p "<<sizeof(p)<<"\nsize of p "<<sizeof(*p);

    const char * val{"I am Prajwal Y P\nI am fine"};
    // val[16]=',';
    std::cout<<"\n"<<val;
    std::cout<<"\n"<<val[16];

    char v[]{"Hey wassup\nBOSS"};
    std::cout<<"\n"<<v;
    char *k{v};
    k[10]=',';
    std::cout<<"\n"<<v;
    return 0;
}