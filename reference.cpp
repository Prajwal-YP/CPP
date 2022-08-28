#include <iostream>
int main()
{
    int a=10;
    float b=11.2;

    // REFERENCE VARIABLES  
    int &x{a};
    float &y(b);

    std::cout<<"Value of a\t: "<<a<<std::endl;
    std::cout<<"Value of x\t: "<<x<<std::endl;
    std::cout<<"address of a\t: "<<&a<<std::endl;
    std::cout<<"address of x\t: "<<&x<<std::endl;
    std::cout<<"\nValue of b\t: "<<b<<std::endl;
    std::cout<<"Value of y\t: "<<y<<std::endl;
    std::cout<<"address of b\t: "<<&b<<std::endl;
    std::cout<<"address of y\t: "<<&y<<std::endl;

    x=40;
    y=45.5;

    std::cout<<"----------------------\n\tx = 40;\n\ty = 45.5;\n----------------------"<<std::endl;

    std::cout<<"\nValue of a\t: "<<a<<std::endl;
    std::cout<<"Value of x\t: "<<x<<std::endl;
    std::cout<<"address of a\t: "<<&a<<std::endl;
    std::cout<<"address of x\t: "<<&x<<std::endl;
    std::cout<<"\nValue of b\t: "<<b<<std::endl;
    std::cout<<"Value of y\t: "<<y<<std::endl;
    std::cout<<"address of b\t: "<<&b<<std::endl;
    std::cout<<"address of y\t: "<<&y<<std::endl;

    //ANOTHER REFERENCE VARIABLE TO ALREADY REFERENCED VALUE !!!

    // int &z{x};
    int &z{a};

    std::cout<<"----------------------\n\tint &z{a};\n----------------------"<<std::endl;
    std::cout<<"\nValue of a\t: "<<a<<std::endl;
    std::cout<<"Value of x\t: "<<x<<std::endl;
    std::cout<<"Value of z\t: "<<z<<std::endl;
    std::cout<<"address of a\t: "<<&a<<std::endl;
    std::cout<<"address of x\t: "<<&x<<std::endl;
    std::cout<<"address of z\t: "<<&z<<std::endl;

    int m=23;
    x=m;
    z=m;
    std::cout<<"\nValue of a\t: "<<a<<std::endl;
    std::cout<<"Value of x\t: "<<x<<std::endl;
    std::cout<<"Value of z\t: "<<z<<std::endl;
    std::cout<<"address of a\t: "<<&a<<std::endl;
    std::cout<<"address of x\t: "<<&x<<std::endl;
    std::cout<<"address of z\t: "<<&z<<std::endl;

    return 0;
}

//                     DIFFERENCE BETWEEN POINTER VARIABLES AND REFERENCE VARIABLES        

//             POINTER VARIABLE                                        REFERENCE VARIABLE
// 1.  USES DEFERENCING TO ACCESS THE CONTENT              DO NOT USES DEFERENCING TO ACCESS THE CONTENT
// 2.  WE CAN REFRER THE POINER TO DIFFERENT VARIABLE      WE CAN NOT REFRER THE POINER TO DIFFERENT VARIABLE
// 3.  MUST BE INITIALIZED AT DECLARATION                  CAN BE UN-INITIALIZED AT DECLARATION                  