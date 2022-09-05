#include<iostream>

class Shape // ABSTRACT CLASS
{
    private:
        std::string desc{""};
    protected:
        Shape()=default;
        Shape(std::string_view desc):desc{desc} {}
        virtual ~Shape()=default;
    public:
        //PURE VIRTUAL FUNCTIONS
        virtual double perimeter() = 0;
        virtual double surface() = 0;
};

class Rectangle : public Shape 
{
    private:
    double width{},height{};
    protected:
        Rectangle()=default;
    public:
        Rectangle(double width, double height, std::string_view desc):Shape(desc),width{width},height{height} {}
        virtual ~Rectangle()=default;
        //PURE VIRTUAL FUNCTIONS
        virtual double perimeter() override{
            return (2*(width+height));
        }
        virtual double surface() override{
            return width*height;
        }
};

class Circle : public Shape 
{
    private:
    double radius{};
    protected:
        Circle()=default;
    public:
        Circle(double radius, std::string_view desc):Shape(desc),radius{radius} {}
        virtual ~Circle()=default;
        //PURE VIRTUAL FUNCTIONS
        virtual double perimeter() override{
            return (2*3.14*radius);
        }
        virtual double surface() override{
            return 3.14*radius*radius;
        }
};

int main()
{
    Shape* s = new Rectangle(10.0,20.0,"Rect-1");
    std::cout<<"Perimeter of Rectangle "<<"is "<<s->perimeter()<<std::endl; //60
    std::cout<<"Surface of Rectangle "<<"is "<<s->surface()<<std::endl;     //200

    std::cout<<"\n------------------\n";

    Shape* s1 = new Circle(10.0,"Circle-1");
    std::cout<<"Perimeter of Circle "<<"is "<<s1->perimeter()<<std::endl; //62.8
    std::cout<<"Surface of Circle "<<"is "<<s1->surface()<<std::endl;     //314

    delete s;
    delete s1;


    return 0;
}