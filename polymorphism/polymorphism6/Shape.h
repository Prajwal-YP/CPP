class Shape
{
    protected:
        std::string desc{""};
    public:
        static int myCount;
        Shape();
        Shape(std::string_view);
        ~Shape();
        virtual void Draw();
        virtual void count();
};

int Shape::myCount{0};

Shape::Shape():desc{"Shape-Default"} {myCount++;}

Shape::Shape(std::string_view desc):desc{desc} {myCount++;}

Shape::~Shape() {}

void Shape::Draw()
{
    std::cout<<"From shape::Draw()\tdrawing . . ."<<desc<<std::endl;
}

void Shape::count()
{
    std::cout<<"Total Shapes : "<<myCount<<std::endl;
}