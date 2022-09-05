class Cat: public Feline
{
    public:
        Cat()=default;
        Cat(std::string_view,std::string_view);
        virtual ~Cat();
        virtual void meow();
        virtual void breath() override;
        virtual void run() override;
};

Cat::Cat(std::string_view desc,std::string_view fur_style):Feline(desc,fur_style) {}

Cat::~Cat() {}

void Cat::meow()
{
    std::cout<<"Cat::meow for "<<fur_style<<" styled "<<desc<<std::endl;
}

void Cat::breath()
{
    std::cout<<"Cat::breath for "<<fur_style<<" styled "<<desc<<std::endl;
}

void Cat::run()
{
    std::cout<<"Cat::run for "<<fur_style<<" styled "<<desc<<std::endl;
}