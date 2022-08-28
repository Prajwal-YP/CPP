#include<iostream>

int main()
{
    int *p{};
    // WE CAN DELETE POINTER INITIALISED TO NULL POINTER TOO!!!
    delete p;
    std::cout<<"\nNull Pointer Deleted"<<std::endl;


    // THIS IS A NULL POINTED SAFETY IF-ELSE STATEMENT
    if(!(p==nullptr))
    {
        std::cout<<"Pointer p is pointing to valid address !!!"<<std::endl;
        std::cout<<"Address\t: "<<p<<std::endl;

    }else{
        std::cout<<"Pointer p is pointing to an invalid address !!!"<<std::endl;
    }

    int a=10;
    int *q=&a;

    if(!(q==nullptr))
    {
        std::cout<<"Pointer q is pointing to valid address !!!"<<std::endl;
        std::cout<<"Address of q\t: "<<q<<std::endl;

    }else{
        std::cout<<"Pointer q is pointing to an invalid address !!!"<<std::endl;
    }

    int *r = new int{10};

    if(r)
    {
        std::cout<<"Pointer r is pointing to valid address !!!"<<std::endl;
        std::cout<<"Address of r\t: "<<r<<std::endl;
        std::cout<<"Value of r\t: "<<*r<<std::endl;
        delete r;
        r=nullptr;
        if(r==nullptr)
            std::cout<<"r pointed is Deallocated !!"<<std::endl;


    }else{
        std::cout<<"Pointer r is pointing to an invalid address !!!"<<std::endl;
    }


    std::cout<<"\nPROGRAM REACHED TILL THE END, SUCCESSFULLY !!\n"<<std::endl;
    return 0;
}