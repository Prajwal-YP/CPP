#include <iostream>

int main()
{


    double a{23.4},b{67.6};
    auto res=[=](){
        if(a>b)
            return a;
        else   
            return b;
    }();
    std::cout<<"Greatest : "<<res<<std::endl;



    auto r=[=]()->int{
        if(a>b)
            return a;
        else   
            return b;
    }();
    std::cout<<"Greatest : "<<r<<std::endl;


    int x=10;
    auto func=[=](){
        std::cout<<"Address of func x : "<<&x<<std::endl;
        std::cout<<"Value : "<<x<<std::endl;
    };
    for(size_t i{};i<10;i++){
        std::cout<<"Address of main x : "<<&x<<std::endl;
        func();
        x++;
    }
    std::cout<<"---------------------------\nCurrent x Value : "<<x<<"\n---------------------------"<<std::endl;
    
    auto func1=[&](){
        std::cout<<"Address of func x : "<<&x<<std::endl;
        std::cout<<"Value : "<<x<<std::endl;
    };
    for(size_t i{};i<10;i++){
        std::cout<<"Address of main x : "<<&x<<std::endl;
        x++;
        func1();
    }
    std::cout<<"---------------------------\nCurrent x Value : "<<x<<"\n---------------------------"<<std::endl;

    return 0;
}