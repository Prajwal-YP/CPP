class Animal
{
protected:
    std::string desc{""}; 
public:
    Animal()=default;
    Animal(std::string_view);
    virtual ~Animal();
    virtual void breath();
};

Animal::Animal(std::string_view desc):desc{desc} {}

Animal::~Animal()
{

}

void Animal::breath()
{
    std::cout<<"Animal::breath for "<<desc<<std::endl;
}
