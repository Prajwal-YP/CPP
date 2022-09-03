#include <iostream>

class Person
{
    std::string first_name,last_name;

    public:
        Person()=default;

        Person(std::string_view first_name, std::string_view last_name)
        {
            this->first_name=first_name;
            this->last_name=last_name;
        }

        void set_first_name(std::string_view first_name)
        {
            this->first_name=first_name;
        }

        void set_last_name(std::string_view last_name)
        {
            this->last_name=last_name;
        }

        std::string_view get_first_name()
        {
            return (this->first_name);
        }

        std::string_view get_last_name()
        {
            return (this->last_name);
        }
};

class Player : public Person
{
    std::string game;

    public:
        Player()=default;

        Player(std::string_view first_name, std::string_view last_name, std::string_view game){
            // CAN NOT ACCESS SUPER CLASS PRIVATE MEMBERS
            //-------------------------------------------
            // this->first_name=first_name;
            // this->last_name=last_name;
            
            this->set_first_name(first_name);
            this->set_last_name(last_name);
            this->game=game;
        }

        void set_game(std::string_view game)
        {
            this->game=game;
        }

        std::string_view get_game()
        {
            return this->game;
        }
};

int main()
{
    std::cout<<std::endl;

    Player p1("player","one","game_one");
    std::cout<<"\t\tp1 details"<<std::endl;
    std::cout<<"p1 name\t: "<<p1.get_first_name()<<" "<<p1.get_last_name()<<std::endl;
    std::cout<<"p1 game\t: "<<p1.get_game()<<std::endl;

    std::cout<<std::endl;

    Player p2;
    // PRIVATE MEMBERS CAN NOT ACCESS ERROE 
    // p2.first_name="player";
    // p2.last_name="two";
    // p2.game="game_two";
    p2.set_first_name("player");
    p2.set_last_name("two");
    p2.set_game("game_two");
    std::cout<<"\t\tp2 details"<<std::endl;
    std::cout<<"p2 name\t: "<<p2.get_first_name()<<" "<<p2.get_last_name()<<std::endl;
    std::cout<<"p2 game\t: "<<p2.get_game()<<std::endl;

    std::cout<<std::endl;

    return 0;
}