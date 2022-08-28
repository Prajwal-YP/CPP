#include<iostream>

int main()
{
    int *p=new int{10};
    int a=10;


    // MEMORY LEAK !!!!!!!      << B A D  >>
    //--------------------------------------------

    // NO DELETE                //LEAK TYPE 1
    p=&a;                       //LEAK TYPE 2
    p = new int{15};            //LEAK TYPE 3
    { int *q= new int{34}; }    //LEAK TYPE 4
    
    //DO NOT RUN THIS CODE AS IT LEADS TO SMALL MEMORY LEAK, EVEN SMALL MEMORY IS A RESOURCE !!
    return 0;
}