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
    private:
        int z=10;
    public:
        B()=default;
        B(int x):A(x) {}
        virtual ~B(){ 
            std::cout<<"Deleted B "<<std::endl;
            std::cout<<"-------------------------\n";
        }

        void see()
        {
            std::cout<<"value : "<<z;
        }

        virtual void print()
        {
            std::cout<<x<<" is of B"<<std::endl;
        }
};

class C: public B{
    private:
        int yp=5;
    public:
        C()=default;
        virtual ~C(){ 
            std::cout<<"Deleted C "<<std::endl;
            std::cout<<"-------------------------\n";
        }
        void seeme()
        {
            std::cout<<"value : "<<yp;
        }
};

int main()
{
    // B b(1);
    // b.print();
    // std::cout<<"\n-------------------------\n";
    // A *p = new B(2);
    // p->print();
    // std::cout<<"\n-------------------------\n";
    // delete p;

    C b;
    A *p = &b;
    // p->see();
    B *pb= dynamic_cast<B*>(p);
    C *pc = dynamic_cast<C*>(pb);
    pc->see();
    pc->seeme();


    std::cout<<"\nProgram successfully ended\n";
    return 0;
}