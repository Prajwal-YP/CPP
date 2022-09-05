class Pigeon: public Bird
{
    public:
        Pigeon()=default;
        Pigeon(std::string_view,std::string_view);
        virtual ~Pigeon();
        virtual void coo();
        virtual void breath() override;
        virtual void fly() override;
};

Pigeon::Pigeon(std::string_view desc,std::string_view wing_style):Bird(desc,wing_style) {}

Pigeon::~Pigeon() {}

void Pigeon::coo()
{
    std::cout<<"Pigeon::coo for "<<wing_style<<" styled "<<desc<<std::endl;
}

void Pigeon::breath()
{
    std::cout<<"Pigeon::breath for "<<wing_style<<" styled "<<desc<<std::endl;
}

void Pigeon::fly()
{
    std::cout<<"Pigeon::fly for "<<wing_style<<" styled "<<desc<<std::endl;
}