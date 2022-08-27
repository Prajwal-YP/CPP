#include <iostream>

int main()
{
    bool a{0};
    bool b{0};

    std::cout<<std::boolalpha;
    std::cout<<"\ta: "<<a<<"\tb: "<<b<<std::endl<<std::endl;
    std::cout<<"1. (a && b): "<<(a&&b)<<std::endl;
    std::cout<<"2. (a || b): "<<(a||b)<<std::endl;
    std::cout<<"3. (!b): "<<(!b)<<std::endl;

    a=0;
    b=1;
    std::cout<<"\ta: "<<a<<"\tb: "<<b<<std::endl<<std::endl;
    std::cout<<"1. (a && b): "<<(a&&b)<<std::endl;
    std::cout<<"2. (a || b): "<<(a||b)<<std::endl;
    std::cout<<"3. (!b): "<<(!b)<<std::endl;
    
    a=1;
    b=0;
    std::cout<<"\ta: "<<a<<"\tb: "<<b<<std::endl<<std::endl;
    std::cout<<"1. (a && b): "<<(a&&b)<<std::endl;
    std::cout<<"2. (a || b): "<<(a||b)<<std::endl;
    std::cout<<"3. (!b): "<<(!b)<<std::endl;
    
    a=1;
    b=1;
    std::cout<<"\ta: "<<a<<"\tb: "<<b<<std::endl<<std::endl;
    std::cout<<"1. (a && b): "<<(a&&b)<<std::endl;
    std::cout<<"2. (a || b): "<<(a||b)<<std::endl;
    std::cout<<"3. (!b): "<<(!b)<<std::endl;
    
    a=1; b=0;
    std::cout<<"\ta: "<<a<<"\tb: "<<b<<std::endl<<std::endl;
    std::cout<<"1. (a || b && !b): "<<(a || b && !b)<<std::endl;

    

    int x{23},y{43};
    std::cout<<"\ta: "<<x<<"\tb: "<<y<<std::endl<<std::endl;
    std::cout<<"1. ((a && b) - b): "<<((x&&y)-y)<<std::endl;
    std::cout<<"2. (a || b): "<<(x||y)<<std::endl;
    std::cout<<"3. (!b): "<<(!y)<<std::endl;
    

    return 0;
}
