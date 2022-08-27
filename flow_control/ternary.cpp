#include<iostream>

int main()
{
    int speed;
    bool fast{1};

    speed= fast? 65 : 65.9f;
    std::cout<<"speed : "<<speed;
    std::cout<<"\nspeed : "<< (!fast? 65 : 65.9f) ;

    return 0;
}