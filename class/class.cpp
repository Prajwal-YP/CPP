#include <iostream>
const double PI {3.1428571428};

class cylinder
{
    double radius{};
    double height{};

    public:
        void put(int r=0,int h=0)
        {
            radius=r;
            height=h;
        }

        double getR()
        {
            return radius;
        }

        double geth()
        {
            return height;
        }

        double volume()
        {
            return PI*radius*radius*height;
        }
};

int main()
{
    cylinder c1;
    c1.put(10,100);

    std::cout<<"\tCYLINDER 1\n\t----------"<<std::endl;
    std::cout<<"Radius\t: "<<c1.getR()<<std::endl;
    std::cout<<"height\t: "<<c1.geth()<<std::endl;
    std::cout<<"Volume\t: "<<c1.volume()<<std::endl;

    return 0;
}