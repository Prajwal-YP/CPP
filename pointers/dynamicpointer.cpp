#include <iostream>

int main()
{
    int *p = new int{2};
    std::cout << "p " << p << std::endl;
    std::cout << "*p " << *p << std::endl;
    delete p;
    p = nullptr;
    std::cout << "p " << p << std::endl;

    int x = 10;
    int *val{&x};

    std::cout << "\nval " << val;
    val = nullptr;
    std::cout << "\nval " << val;

    return 0;
}