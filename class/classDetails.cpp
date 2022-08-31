class cylinder
{
    double r{},h{};
    public:
    // CONSTRUCTOR  
        cylinder()=default;
        cylinder(double,double);
        cylinder(float,float);
        ~cylinder();
    // SETTERS
        void setR(double);
        void setH(double);
    // GETTERS
        double getR();
        double getH();
        double vol();
};
