#include <iostream>

class A{
    public:
    A(){
        std::cout<<"DEFAULT CONSTRUCTOR : A"<<std::endl;
    }
};

class B : private A{
    public:
    B(){
        std::cout<<"DEFAULT CONSTRUCTOR : B"<<std::endl;
    }
};

class C : private B{
    public:
    C(){
        std::cout<<"DEFAULT CONSTRUCTOR : C"<<std::endl;
    }
};

int main()
{
    C c;

    std::cout<<"Program Ran Successfully !!"<<std::endl;
    return 0;
}