class Crow: public Bird
{
    public:
        Crow()=default;
        Crow(std::string_view,std::string_view);
        virtual ~Crow();
        virtual void caww();
        virtual void breath() override;
        virtual void fly() override;
};

Crow::Crow(std::string_view desc,std::string_view wing_style):Bird(desc,wing_style) {}

Crow::~Crow() {}

void Crow::caww()
{
    std::cout<<"Crow::caww for "<<wing_style<<" styled "<<desc<<std::endl;
}

void Crow::breath()
{
    std::cout<<"Crow::breath for "<<wing_style<<" styled "<<desc<<std::endl;
}

void Crow::fly()
{
    std::cout<<"Crow::fly for "<<wing_style<<" styled "<<desc<<std::endl;
}