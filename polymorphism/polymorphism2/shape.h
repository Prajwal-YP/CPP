class Shape
{
    protected:
        std::string desc{""};
    public:
        Shape()=default;
        Shape(std::string_view);
        virtual void Draw();
};

Shape::Shape(std::string_view desc):desc{desc}{}

void Shape::Draw()
{
    std::cout<<"From shape::Draw()\ndrawing . . ."<<desc<<std::endl;
}