class Feline: public Animal
{
    protected:
        std::string fur_style{""}; 
    public:
        Feline()=default;
        Feline(std::string_view,std::string_view);
        virtual ~Feline();
        virtual void run();
};

Feline::Feline(std::string_view desc,std::string_view fur_style):Animal(desc),fur_style{fur_style} {}

Feline::~Feline() {}

void Feline::run()
{
    std::cout<<"Feline::run for "<<fur_style<<" styled "<<desc<<std::endl;
}
