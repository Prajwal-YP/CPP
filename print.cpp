#include<iostream>

int main()
{
    int age;
    std::string name;
    std::cout<< "Enter your name\t:\t" ;
    std::getline(std::cin,name);
    std::cout<< "Enter your age\t:\t" ;
    std::cin >> age;

    std::cout   << "\n\tName\t: "<<name
                <<"\n\tAge\t: "<<age
                <<"\nSize of int\t: "<<sizeof(int)
                <<"\nSize of float\t: "<<sizeof(float)
                <<"\nSize of char\t: "<<sizeof(char)
                <<"\nSize of bool\t: "<<sizeof(bool);

    return 0;
}