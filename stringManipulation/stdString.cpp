#include <iostream>

int main()
{
    std::string s1{"Prajwal Y P"};
    std::string s2{s1};
    std::string s3{s1,8};
    std::string s4{s1,0,7};

    std::cout<<"s1\t: "<<s1<<std::endl;
    std::cout<<"s2\t: "<<s2<<std::endl;
    std::cout<<"s3\t: "<<s3<<std::endl;
    std::cout<<"s4\t: "<<s4<<std::endl;
    s1="Y P Prajwal";
    std::cout<<"s1\t: "<<s1<<std::endl;

    const char *a="hello";
    a="hi";
    std::cout<<"a\t: "<<a<<std::endl;
    std::cout<<"a size\t: "<<sizeof(a)<<std::endl;
    std::cout<<"a size\t: "<<sizeof("hello")<<std::endl;
    // a="hi";

    return 0;
}