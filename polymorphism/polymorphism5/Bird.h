class Bird: public Animal
{
    protected:
        std::string wing_style{""}; 
    public:
        Bird()=default;
        Bird(std::string_view,std::string_view);
        virtual ~Bird();
        virtual void fly();
};

Bird::Bird(std::string_view desc,std::string_view wing_style):Animal(desc),wing_style{wing_style} {}

Bird::~Bird() {}

void Bird::fly()
{
    std::cout<<"Bird::fly for "<<wing_style<<" styled "<<desc<<std::endl;
}
