class Eclipse : public Shape
{
    public:
        static int myCount;
        Eclipse();
        Eclipse(std::string_view);
        ~Eclipse();
        virtual void Draw();
        virtual void count();
};


int Eclipse::myCount{0};

Eclipse::Eclipse():Shape("Eclipse-default") {myCount++;}

Eclipse::Eclipse(std::string_view desc):Shape(desc) {myCount++;}

Eclipse::~Eclipse() {}

void Eclipse::Draw()
{
    std::cout<<"From Eclipse::Draw()\tdrawing . . ."<<desc<<std::endl;
}

void Eclipse::count()
{
    std::cout<<"Total Eclipse : "<<myCount<<std::endl;
}