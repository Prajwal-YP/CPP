#include<iostream>

int main()
{
    int n1{20};
    signed int n2{40};
    signed int n3{-8};

    std::cout   <<"\nNumber1\t: "<< n1
                <<"\nNumber2\t: "<< n2
                <<"\nNumber3\t: "<< n3;
    
    // unsigned int n4{167};       <<----     <<<COMPILER ERROR!!>>>
    
    unsigned int n5{67};
    // std::cout   <<"\nNumber4\t: "<< n4;
    std::cout   <<"\nNumber5\t: "<< n5<<std::endl;


    // SHORT MODIFIER ON INT's (SIZE=2)
    short a1=1;
    short int a2=1;
    short signed int a3=1;
    short unsigned int a4=1;
    std::cout<< "\n\nSize of short\t\t\t: "<<sizeof(a1);
    std::cout<< "\nSize of short int\t\t: "<<sizeof(a2);
    std::cout<< "\nSize of short signed int\t: "<<sizeof(a3);
    std::cout<< "\nSize of short unsigned int\t: "<<sizeof(a4);

    // INT's (SIZE=4)
    int aa2=1;
    signed int aa3=1;
    unsigned int aa4=1;
    std::cout<< "\n\nSize of int\t\t: "<<sizeof(aa2);
    std::cout<< "\nSize of signed int\t: "<<sizeof(aa3);
    std::cout<< "\nSize of unsigned int\t: "<<sizeof(aa4);

    // LONG MODIFIER ON INT's (SIZE=4)    
    long aaa1=1;
    long int aaa2=1;
    long signed int aaa3=1;
    long unsigned int aaa4=1;
    std::cout<< "\n\nSize of long\t\t\t: "<<sizeof(aaa1);
    std::cout<< "\nSize of long int\t\t: "<<sizeof(aaa2);
    std::cout<< "\nSize of long signed int \t: "<<sizeof(aaa3);
    std::cout<< "\nSize of long unsigned int\t: "<<sizeof(aaa4);

    // Long LONG MODIFIER ON INT's (SIZE=8)    
    long long aaaa1=1;
    long long int aaaa2=1;
    long long signed int aaaa3=1;
    long long unsigned int aaaa4=1;
    std::cout<< "\n\nSize of long long\t\t\t: "<<sizeof(aaaa1);
    std::cout<< "\nSize of long long int\t\t: "<<sizeof(aaaa2);
    std::cout<< "\nSize of long long signed int \t: "<<sizeof(aaaa3);
    std::cout<< "\nSize of long long unsigned int\t: "<<sizeof(aaaa4);



    return 0;
}