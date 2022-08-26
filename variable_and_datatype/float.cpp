#include<iostream>
#include<iomanip>

int main()
{
    float a1{8765432};
    float a2{1.9898989898989898989f};         //ERROR morte than 7 digits(precision = 7+)
    float a3{9876543456789098e1};
    float a4{.0001e10};

    std::cout<<std::setprecision(20);
    std::cout << "\n\nValue\t: "<<a1
               << "\nsize\t: "<<sizeof(a1); 

    std::cout << "\n\nValue\t: "<<a2
               << "\nsize\t: "<<sizeof(a2); 

    std::cout << "\n\nValue\t: "<<a3
               << "\nsize\t: "<<sizeof(a3); 

    std::cout << "\n\nValue\t: "<<a4
               << "\nsize\t: "<<sizeof(a4); 

    // std::cout << "\n\nValue\t: "<<9.0/0;  PROVIDES INF(INFINITY)

    double aa1{1234.5678987654};

    std::cout<<"\n\nValue\t: "<<aa1
            <<"\nsize\t: "<<sizeof(aa1);

            
    long double aaa1{1234644.56789867657654};

    std::cout<<"\n\nValue\t: "<<aaa1
            <<"\nsize\t: "<<sizeof(aaa1);


    return 0;
}

// TYPE        -   PRECISION
// FLOAT       -       7
// DOUBLE      -     14-15
// LONG DOUBLE -      15+