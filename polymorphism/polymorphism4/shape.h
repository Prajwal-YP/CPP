class Shape
{
    protected:
        std::string desc{""};
    public:
        Shape()=default;
        Shape(std::string_view);
        virtual void Draw();
        virtual void Draw(int);
};

Shape::Shape(std::string_view desc):desc{desc}{}

void Shape::Draw()
{
    std::cout<<"From shape::Draw()\ndrawing . . ."<<desc<<std::endl;
}

void Shape::Draw(int color_depth)
{
    std::cout<<"From shape::Draw()\ndrawing . . ."<<desc<<" with color-depth : "<<color_depth<<std::endl;
}