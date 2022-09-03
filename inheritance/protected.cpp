#include <iostream>

class A
{
    int A=10;
    public:
        int get_a()
        {
            return this->A;
        }
};
 
class B : private A 
{
    int B=20;
    public:
        //RESURECTING OF PRIVATE TO PROTECTED
        using A::get_a;

        int get_b()
        {
            return this->B;
        }
};
 
class C : protected B
{
    int C=30;
    public:
        using B::get_a;
        using B::get_b;
        
        int get_c()
        {
            return this->C;
        }

        void get()
        {
            std::cout<<"c "<<this->get_c()<<std::endl;
            std::cout<<"b "<<this->get_b()<<std::endl;
            std::cout<<"a "<<this->get_a()<<std::endl;
        }
};
 


int main()
{
    C c;
    std::cout<<c.get_a()<<std::endl;
    std::cout<<c.get_b()<<std::endl;
    std::cout<<c.get_c()<<std::endl;
    c.get();
    return 0;
}