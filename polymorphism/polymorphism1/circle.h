class Circle : public Oval
{
    protected:
        int rad;
    public:
        Circle();
        Circle(int,std::string_view);
        void Draw();
};

Circle::Circle():Oval(1,1,"Circle"){}

Circle ::Circle(int r,std::string_view des="Circle"):Oval(r,r,des){}

void Circle::Draw()
{
    std::cout<<"From Circle::Draw()\ndrawing . . . "<<desc<<" with x-radius \""<<x_rad<<"\" and y-radius \""<<y_rad<<"\""<<std::endl;
}