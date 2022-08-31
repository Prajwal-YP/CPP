#include<iostream>

const double PI=3.14;

class cylinder
{
    double r{};
    double h{};
    public:
        cylinder()=default;

        cylinder(double a,double b)
        {
            r=a; h=b;
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
    cylinder c1;

    std::cout<<"\tCYLINDER 1\n\t----------"<<std::endl;
    std::cout<<"Radius\t: "<<c1.getR()<<std::endl;
    std::cout<<"height\t: "<<c1.getH()<<std::endl;
    std::cout<<"Volume\t: "<<c1.vol()<<std::endl;

    return 0;
}