#include <iostream>

class Person
{
    private:
        std::string address{""};
    protected:
        int age{};
    public:
        std::string name{""};

        Person()=default;

        Person(std::string_view name,int age,std::string_view address):name{name},age{age},address{address}
        {}

        std::string_view getaddress(){
            return address;
        }
};

class Engineering : public Person
{
    public:
        using Person::Person;  // Inherited Base Class Constructor
        Engineering()=default;
        // Engineering(std::string_view name,int age,std::string_view address):Person(name,age,address){}
        // Engineering(const Engineering& e):Person(e){}
        void pi()
        {
            std::cout<<"name\t:"<<this->name<<std::endl;
            std::cout<<"age\t:"<<this->age<<std::endl;
            std::cout<<"address\t:"<<this->getaddress()<<std::endl;
        }
};

int main()
{
    Engineering e1("e-1",1,"a-1");
    std::cout<<"\n--------------------------------------\n"<<"Engineer - 1"<<"\n--------------------------------------\n"<<std::endl;
    e1.pi();

    Engineering e2(e1);
    std::cout<<"\n--------------------------------------\n"<<"Engineer - 2"<<"\n--------------------------------------\n"<<std::endl;  
    e2.pi();
    
}