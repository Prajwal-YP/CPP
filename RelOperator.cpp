#include <iostream>

int main()
{
    int n1{45},n2{45};

    std::cout<<"\t\t\tCOMPARING NUMBERS"<<std::endl;
    std::cout<<"\t\t\t-----------------"<<std::endl<<std::endl;
    std::cout<<"\t\t\tn1 :"<<n1<<"\tn2 :"<<n2<<std::endl<<std::endl;


    std::cout<<std::boolalpha;
    std::cout<<"1. n1==n2\t\tAnswer : "<<(n1==n2)<<std::endl;
    std::cout<<"2. n1!=n2\t\tAnswer : "<<(n1!=n2)<<std::endl;
    std::cout<<"3. n1<n2\t\tAnswer : "<<(n1<n2)<<std::endl;
    std::cout<<"4. n1<=n2\t\tAnswer : "<<(n1<=n2)<<std::endl;
    std::cout<<"5. n1>n2\t\tAnswer : "<<(n1>n2)<<std::endl;
    std::cout<<"6. n1>=n2\t\tAnswer : "<<(n1>=n2)<<std::endl;
    return 0;
}