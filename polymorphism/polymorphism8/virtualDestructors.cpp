#include<iostream>

class A
{
    protected:
        int x=0;
    public:
        A()=default;
        A(int x):x{x} {}
        virtual ~A(){ 
            std::cout<<"Deleted A "<<std::endl;
            std::cout<<"-------------------------\n";
        }

        virtual void print()
        {
            std::cout<<x<<" is of B"<<std::endl;
        }
};

class B : public A
{
    public:
        B()=default;
        B(int x):A(x) {}
        virtual ~B(){ 
            std::cout<<"Deleted B "<<std::endl;
            std::cout<<"-------------------------\n";
        }
        virtual void print()
        {
            std::cout<<x<<" is of B"<<std::endl;
        }
};

int main()
{
    B b(1);
    b.print();
    std::cout<<"\n-------------------------\n";
    A *p = new B(2);
    p->print();
    std::cout<<"\n-------------------------\n";
    delete p;
    return 0;
}