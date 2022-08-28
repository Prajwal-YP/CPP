#include<iostream>

int main()
{
    int a{8};
    float b{8.5};
    int *p{&a};
    float *q{&b};


    int *yp{&a};
    if(yp==nullptr){
        std::cout<<"YP";
    }else{
    std::cout<<"p "<<sizeof(*p)<<"\t"<<p<<"\t"<<*p;
    std::cout<<"\nq "<<sizeof(*q)<<"\t"<<q<<"\t"<<*q;
    }

    std::cout<<"\nyp==p   *p==*yp--- "<<(&p==&yp)<<" ---"<<(*p==*yp);
    return 0;
}