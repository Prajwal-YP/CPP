#include <iostream>

class a
{
    public:
        virtual void here(std::string_view s="A")
        {
            std::cout<<"I am(a) "<<s<<std::endl;
        }
};

class b : public a
{
    public:
        virtual void here(std::string_view s="B")
        {
            std::cout<<"I am(b) "<<s<<std::endl;
        }
};

class c : public b
{
    public:
        virtual void here(std::string_view s="C")
        {
            std::cout<<"I am(c) "<<s<<std::endl;
        }
};

class d: public c
{
    public:
    int x=0;
};

int main()
{
    // b b1;
    // b1.here();
    d d1;
    // d1.here();

    b *p=&d1;
    p->here();

    return 0;
}