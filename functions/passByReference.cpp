#include <iostream>

void sayAge(int&);

int main()
{
    int age{20};
    sayAge(age);
    std::cout<<"Your curent age is : "<<age<<std::endl;
    std::cout<<"Sorry, Your curent age is : "<<age-10<<std::endl;

    return 0;
}

void sayAge(int &age)
{
    age+=10;
    std::cout<<"Your age after 10 years is : "<<age<<std::endl;

}