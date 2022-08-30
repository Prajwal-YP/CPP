#include <iostream>

int main()
{


    double a{23.4},b{67.6};
    auto res=[a,b](){
        if(a>b)
            return a;
        else   
            return b;
    }();
    std::cout<<"Greatest : "<<res<<std::endl;



    auto r=[a,b]()->int{
        if(a>b)
            return a;
        else   
            return b;
    }();
    std::cout<<"Greatest : "<<r<<std::endl;


    int x=10;
    auto func=[x](){
        std::cout<<"Address of func x : "<<&x<<std::endl;
        std::cout<<"Value : "<<x<<std::endl;
    };
    for(size_t i{};i<10;i++){
        std::cout<<"Address of main x : "<<&x<<std::endl;
        func();
        x++;
    }
    std::cout<<"Current x Value : "<<x<<std::endl;


    auto func1=[&x](){
        std::cout<<"Address of func x : "<<&x<<std::endl;
        std::cout<<"Value : "<<x<<std::endl;
    };
    for(size_t i{};i<10;i++){
        std::cout<<"Address of main x : "<<&x<<std::endl;
        x++;
        func1();
    }
    std::cout<<"Current x Value : "<<x<<std::endl;

    return 0;
}