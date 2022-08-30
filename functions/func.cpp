#include<iostream>

void verify(int age)        //PARAMETERS
{
    if(age>=18)
        std::cout<<"You are "<<age<<" years old. So you are eligible !!"<<std::endl;
    else
        std::cout<<"Sorry, you are too young, No offense !!"<<std::endl;
    return;
}

int max(int a,int b)
{
    if(a>b)
        return a;
    else
         return b; 
}

void say_hello()
{
    std::cout<<"Hello"<<std::endl;
}

int lucky_number()
{
    return 123456;
}

int mul(int a,int b)
{
    int res=(a++)*(b++);
    std::cout<<"\n\nIn function: (a:"<<a<<") and (b:"<<b<<")"<<std::endl;
    return res;
}

int main()
{
    // int age{};
    // for(size_t i{};i<10;i++)
    // {
    //     std::cout<<"Enter your age : ";
    //     std::cin>>age;
    //     verify(age);        //ARGUMENTS
    // }


    // int a{},b{};
    // std::cout<<"Enter two numbers : ";
    // std::cin>>a>>b;
    // int x=max(a,b);
    // std::cout<<"max of "<<a<<" and "<<b<<" : "<<x<<std::endl;;

    // say_hello();

    // std::cout<<"Lucky number is : "<<lucky_number();

    int a{},b{};
    std::cout<<"Enter two numbers : ";
    std::cin>>a>>b;
    int x=mul(a,b);
    std::cout<<"Before call : a="<<a<<" and b="<<b<<std::endl;
    std::cout<<"mul of "<<a<<" and "<<b<<" : "<<x<<std::endl;;
    std::cout<<"After call : a="<<a<<" and b="<<b<<std::endl;

    return 0;
}