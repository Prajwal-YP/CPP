class Dog: public Feline
{
    public:
        Dog()=default;
        Dog(std::string_view,std::string_view);
        virtual ~Dog();
        virtual void bark();
        virtual void breath() override;
        virtual void run() override;
};

Dog::Dog(std::string_view desc,std::string_view fur_style):Feline(desc,fur_style) {}

Dog::~Dog() {}

void Dog::bark()
{
    std::cout<<"Dog::bark for "<<fur_style<<" styled "<<desc<<std::endl;
}

void Dog::breath()
{
    std::cout<<"Dog::breath for "<<fur_style<<" styled "<<desc<<std::endl;
}

void Dog::run()
{
    std::cout<<"Dog::run for "<<fur_style<<" styled "<<desc<<std::endl;
}