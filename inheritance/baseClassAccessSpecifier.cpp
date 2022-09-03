#include<iostream>

//COPY CONSTRUCTOR WORKKING IS USED!!!
//ALSO CUSTOM CONSTRUCTOR WORKKING IS USED!!!


class Person
{
    std::string address;

    protected:
    std::string age;

    public:

        std::string name;
    
        Person()=default;

        void print_person_info()
        {
            std::cout<<"Name\t: "<<name<<std::endl;
            std::cout<<"age\t: "<<age<<std::endl;
            std::cout<<"address\t: "<<address<<std::endl;
        }

        Person(std::string_view name, std::string_view age, std::string_view address)
        {
            std::cout<<"\nEntered Person"<<std::endl;
            this->name=name;
            this->age=age;
            this->address=address;
        }

        Person(const Person& p):name{p.name},age{p.age},address{p.address}
        {
        }

        void set_name(std::string_view name)
        {
            this->name=name;
        }

        void set_age(std::string_view age)
        {
            this->age=age;
        }

        void set_address(std::string_view address)
        {
            this->address=address;
        }

        std::string_view get_name()
        {
            return (this->name);
        }

        std::string_view get_age()
        {
            return (this->age);
        }

        std::string_view get_address()
        {
            return  address;
        }
};

class Player : public Person
{
    int start_year{};
    float salary{};
    int health_factor{};

    public:
        Player()=default;

        void print_player_info()
        {
            // std::cout<<"Name\t\t: "<<name<<std::endl;
            // std::cout<<"age\t\t: "<<age<<std::endl;
            // std::cout<<"address\t\t: "<<this->get_address()<<std::endl;
            this->print_person_info();
            std::cout<<"start_year\t: "<<start_year<<std::endl;
            std::cout<<"salary\t\t: "<<salary<<std::endl;
            std::cout<<"health_factor\t: "<<health_factor<<std::endl;
        }

        Player(std::string_view name, std::string_view age, std::string_view address,int start_year=0,float salary=0.0,int health_factor=0.0){
            // CAN NOT ACCESS SUPER CLASS PRIVATE MEMBERS
            //-------------------------------------------
            this->name=name;
            this->age=age;
            this->set_address(address);
            this->start_year=start_year;
            this->salary=salary;
            this->health_factor=health_factor;
        }

        void set_start_year(int start_year)
        {
            this->start_year=start_year;
        }

        void set_salary(float salary)
        {
            this->salary=salary;
        }

        void set_health_factor(int health_factor)
        {
            this->health_factor=health_factor;
        }

        int get_start_year()
        {
            return this->start_year;
        }

        float get_salary()
        {
            return this->salary;
        }

        int get_health_factor()
        {
            return this->health_factor;
        }
};

class Nurse : protected Person
{
    int practise_certification_id{};

    public:
        void print_nurse_info()
        {
            this->print_person_info();
            std::cout<<"Nurse allocated\t: "<<this->practise_certification_id<<std::endl;
        }

        Nurse()=default;
        Nurse(std::string_view name, std::string_view age, std::string_view address,int practise_certification_id=0)
        {
            this->name=name;
            this->age=age;
            this->set_address(address);
            this->practise_certification_id=practise_certification_id;
        }

        int get_practise_certification_id()
        {
            return this->practise_certification_id;
        }

        void set_practise_certification_id(int practise_certification_id)
        {
            this->practise_certification_id=practise_certification_id;
        }
};

class Engineer : public Person
{
    int engineer_id{};

    public:
        void print_engineer_info()
        {
            this->print_person_info();
            std::cout<<"Engineer allocated\t: "<<this->engineer_id<<std::endl;
        }

        Engineer()=default;
        Engineer(std::string_view name, std::string_view age, std::string_view address,int engineer_id=0):Person(name,age,address)
        {
            this->engineer_id=engineer_id;
        }

        Engineer(const Engineer& e):Person(e),engineer_id{e.engineer_id}{}

        int get_engineer_id()
        {
            return this->engineer_id;
        }

        void set_engineer_id(int engineer_id)
        {
            this->engineer_id=engineer_id;
        }
};

class ComputerScience : public Engineer
{
     int score{};

    public:
        void print_computer_science_info()
        {
            this->print_engineer_info();
            std::cout<<"Engineer domain\t: "<<"Computer Science"<<std::endl;
            std::cout<<"Engineer score\t: "<<this->score<<std::endl;
        }

        ComputerScience()=default;
        ComputerScience(std::string_view name, std::string_view age, std::string_view address,int engineer_id,int score=0):Engineer(name,age,address,engineer_id)
        {
            this->score=score;
        }
        ComputerScience(const Engineer& e,int score):Engineer(e),score{score}{}

        ComputerScience(const ComputerScience& c):Engineer(c),score{c.score}{}

        int get_score()
        {
            return this->score;
        }

        void set_score(int score)
        {
            this->score=score;
        }

};

int main()
{   
    Person p1("person-1","age-1","address-1");
    std::cout<<"\t\t\tPerson 1 Details"<<std::endl;
    p1.print_person_info();
   
    Player p2("person-2","age-2","address-2",2,2000,100);
    std::cout<<"\t\t\tPerson Player 2 Details"<<std::endl;
    p2.print_player_info();

    Nurse p3("person-3","age-3","address-3");
    std::cout<<"\t\t\tNurse of Person 3 Details"<<std::endl;
    p3.set_practise_certification_id(101);
    p3.print_nurse_info();

    //CUSTOM CONSTRUCTOR
    Engineer p4("person-4","age-4","address-4");
    std::cout<<"\t\t\tEngineer of Person 4 Details"<<std::endl;
    p4.set_engineer_id(1001);
    p4.print_engineer_info();

    //CUSTOM CONSTRUCTOR
    ComputerScience p5("person-5","age-5","address-5",1002,95);
    std::cout<<"\t\t\tEngineer of Person 5 Details"<<std::endl;
    p5.print_computer_science_info();
    // p5.set_score(95);


    //COPY CONSTRUCTOR
    ComputerScience p5repeat(p5);
    std::cout<<"\t\t\tEngineer of Person 5 Repeat Details"<<std::endl;
    p5repeat.print_computer_science_info();

    ComputerScience p6(p4,100);
    std::cout<<"\t\t\tEngineer of Person 6(4) Details"<<std::endl;
    p6.print_computer_science_info();


    return 0;
}