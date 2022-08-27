#include <iostream>

int main()
{
    int a=1+2*3-4/5-4+3;
    std::cout<<a<<std::endl;
    a=(1+2)*3-4/5-4+3;
    std::cout<<a<<std::endl;

    return 0;
}

//      PRECIDENCE      -   ASSOCIATIVITY
//     1.  BRACKETS     -       L->R  
//     2.  *,/,%        -       L->R    
//     3.  +,-          -       L->R    