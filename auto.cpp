#include <iostream>

int main()
{
    short a1;

    // AUTOMATICALLY FINDS THE DATA-TYPE OF THE VARIALE BASED ON THE VALUR OT IT'S PREFIX
    // PREFIX ARE OF FOLLOWING
    //     1. U         unsigned
    //     2. L         long / long double
    //     3. LL        long long
    //     4. F         float

    auto a=1234.4L;

    std::cout<<"size\t: "<<sizeof(a);
    std::cout<<"\nValue\t: "<<a;

    auto x{56u};

    std::cout<<"\nx\t: "<<x;
    x=-56;
    std::cout<<"\nx\t: "<<x;

    return 0;    
}