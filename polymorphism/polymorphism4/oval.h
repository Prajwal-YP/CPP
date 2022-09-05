
class Oval : public Shape
{
    protected:
        int x_rad{0},y_rad{0};
    public:
        Oval();
        Oval(int,int,std::string_view);
        virtual void Draw() override;
        virtual void Draw(int,int);
};

Oval::Oval():Shape("Oval"),x_rad{0},y_rad{0}{}

Oval::Oval(int x,int y,std::string_view des="Oval"):Shape(des),x_rad{x},y_rad{y}{}

void Oval::Draw()
{
    std::cout<<"From Oval::Draw()\ndrawing . . . "<<desc<<" with x-radius \""<<x_rad<<"\" and y-radius \""<<y_rad<<"\""<<std::endl;
}

void Oval::Draw(int cd,int x)
{
    std::cout<<"From Oval::Draw()\ndrawing . . . "<<desc<<" with x-radius \""<<x_rad<<"\" and y-radius \""<<y_rad<<"\""<<std::endl;
}