#include <iostream>

class cylinder
{
    double r{},h{};
    public:
    // CONSTRUCTOR  
        cylinder()=default;

    // SETTERS
        void setR(double a)
        {
            r=a;
        }

        void setH(double a)
        {
            h=a;
        }

    // GETTERS
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
            return 3.14*r*r*h;
        }

};

int main()
{
    cylinder c1;
    std::cout<<"\nRadius : "<<c1.getR()<<std::endl;
    std::cout<<"Height : "<<c1.getH()<<std::endl;
    std::cout<<"Volume : "<<c1.vol()<<std::endl;


    double r{},h{};
    std::cout<<"Enter radius : ";
    std::cin>>r;
    std::cout<<"Enter height : ";
    std::cin>>h;
    
    c1.setR(r);
    c1.setH(h);
    

    std::cout<<"\nRadius : "<<c1.getR()<<std::endl;
    std::cout<<"Height : "<<c1.getH()<<std::endl;
    std::cout<<"Volume : "<<c1.vol()<<std::endl;
    return 0;
}