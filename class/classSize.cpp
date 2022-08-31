#include <iostream>

class student
{
    double x{};             //8
    int age{};              //4
    short a{};              //2
    short a1{};              //2
};

int main()
{
    student s1;

    std::cout<<"Expected\t: "<<(sizeof(double)+sizeof(short)*2+sizeof(int))<<std::endl;
    std::cout<<"Size of s1 : "<<sizeof(s1)<<std::endl;
}