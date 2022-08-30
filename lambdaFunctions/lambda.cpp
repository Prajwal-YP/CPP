#include <iostream>

auto hello=[](){
    std::cout<<"Hello !!"<<std::endl;
};

auto max=[](double x, double y)->int{
    if(x>y)
        return x;
    else   
        return y;
};

int main()
{
    hello();

    double a{23.4},b{67.6};
    auto res=[](double x, double y){
        if(x>y)
            return x;
        else   
            return y;
    }(a,b);
    std::cout<<"Greatest : "<<res<<std::endl;

    auto r=max(a,b);
    std::cout<<"Greatest : "<<r<<std::endl;

    return 0;
}