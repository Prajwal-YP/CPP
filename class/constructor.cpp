#include <iostream>

const double PI = 3.14;

class cylinder
{
    double r;
    double h;

    public:
        cylinder(double a=0,double b=0)
        {
            r=a;
            h=b;
        }

        double getR()
        {
            return r;
        }

        double getH()
        {
            return h;
        }

        double vol()
        {
            return PI*r*r*h;
        }
};

int main()
{
    cylinder c1(10,20);

    std::cout<<"Radius : "<<c1.getR()<<std::endl;
    std::cout<<"Height : "<<c1.getH()<<std::endl;
    std::cout<<"volume : "<<c1.vol()<<std::endl;
    
    return 0;
}