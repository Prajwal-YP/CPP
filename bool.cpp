#include<iostream>

int main()
{
    bool flag1;
    bool flag2{1};
    bool flag3{0};

    std::cout<<"\value of uninitialized flag1\t: "<<flag1;
    std::cout<<"\value of uninitialized flag2\t: "<<flag2;
    std::cout<<"\nSize of uninitialized flag3\t: "<<sizeof(flag3);

    // std::cout<<std::boolalpha;       PRINTS TRUE-1, FALSE-0
    std::cout<<"\value of uninitialized flag1\t: "<<flag1;
    std::cout<<"\value of uninitialized flag2\t: "<<flag2;
    std::cout<<"\nSize of uninitialized flag3\t: "<<sizeof(flag3);


    bool red{false};
    bool green{true};

    red=5;
    std::cout<<"\n\n"<<red<<"\n\n";

    // green=red-.9;
    green=red-1;
    std::cout<<"\n\n"<<green<<"\n\n";
    if(red)
        std::cout<<"\n\t\tSTOP";
    else
        std::cout<<"\n\t\tGo through";

    if(green)
        std::cout<<"\n\t\tLight is green!!";
    else
        std::cout<<"\n\t\tLight is Red!!";
    

    return 0;
}