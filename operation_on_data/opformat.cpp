#include <iostream>
#include <iomanip>

int main()
{
    // std::showpoint  std::noshowpoint
    std::cout<<std::dec;
    std::cout<<"\nWith showpoint   : "<<std::showpoint<<20.0<<std::endl;
    std::cout<<"With noshowpoint : "<<std::noshowpoint<<20.0<<std::endl;
    
    // std::endl go to new line
    std::cout<<"Hello"<<std::endl<<"world!!"<<std::endl;

    // std::flush - fluush o/p screen
    std::cout<<std::flush<<"Hi i am Prajwal Y P"<<std::endl;

    // std::setw() and ( std::left, std::right, std::internal )
    std::cout<<std::left;
    std::cout << std::setw(15) << "Name" <<"|  "<< std::setw(5) << "Age"<<std::endl;
    std::cout<<"-----------------------"<<std::endl;
    std::cout << std::setw(15) << "Prajwal Y P" <<"|  "<< std::setw(5) << "20"<<std::endl;
    std::cout << std::setw(15) << "Prajwal Y P" <<"|  "<< std::setw(5) << "-20"<<std::endl;
    std::cout << std::setw(15) << "Prajwal Y P" <<"|  "<< std::setw(5) << "20"<<std::endl;

    // std::boolalpha
    std::cout<<std::boolalpha<<"\nValue of 1   \t: "<<(bool)1<<std::endl;
    std::cout<<std::noboolalpha<<"Value of true\t: "<<true<<std::endl;
    std::cout<<std::boolalpha<<"\nValue of 0   \t: "<<(bool)0<<std::endl;
    std::cout<<std::noboolalpha<<"Value of false\t: "<<false<<std::endl;

    //  std::showpos and std::noshowpos
    std::cout<<"\nNumber 5 : "<<std::showpos<<5<<"\nNumber -5 : "<<-5<<std::endl;
    std::cout<<"\nNumber 5 : "<<std::noshowpos<<5<<"\nNumber -5 : "<<-5<<std::endl;

    // std::dec    std::oct    std::hex
    std::cout<<"\nNumber 5\t: "<<std::dec<<15<<"\nNumber -5\t: "<<std::dec<<-15<<std::endl;
    std::cout<<"\nNumber 5\t: "<<std::oct<<15<<"\nNumber -5\t: "<<std::oct<<-15<<std::endl;
    std::cout<<"\nNumber 5\t: "<<std::hex<<15<<"\nNumber -5\t: "<<std::hex<<-15<<std::endl;

    // std::showbase   std::noshowbase
    std::cout<<"With BASE\n---------";
    std::cout<<"\nNumber 5\t: "<<std::dec<<std::showbase<<15<<"\nNumber -5\t: "<<std::dec<<std::showbase<<-15<<std::endl;
    std::cout<<"\nNumber 5\t: "<<std::oct<<std::showbase<<15<<"\nNumber -5\t: "<<std::oct<<std::showbase<<-15<<std::endl;
    std::cout<<"\nNumber 5\t: "<<std::hex<<std::showbase<<15<<"\nNumber -5\t: "<<std::hex<<std::showbase<<-15<<std::endl;

    std::cout<<"Without BASE\n------------";
    std::cout<<"\nNumber 5\t: "<<std::dec<<std::noshowbase<<15<<"\nNumber -5\t: "<<std::dec<<std::noshowbase<<-15<<std::endl;
    std::cout<<"\nNumber 5\t: "<<std::oct<<std::noshowbase<<15<<"\nNumber -5\t: "<<std::oct<<std::noshowbase<<-15<<std::endl;
    std::cout<<"\nNumber 5\t: "<<std::hex<<std::noshowbase<<15<<"\nNumber -5\t: "<<std::hex<<std::noshowbase<<-15<<std::endl;

    // std::uppercase  std::nouppercase
    std::cout<<std::uppercase<<"\nInUppercase   : "<<std::showbase<<0x12<<std::endl;
    std::cout<<std::nouppercase<<"InNoUppercase   : "<<std::showbase<<0x12<<std::endl;

    // std::fixed std::scientific
    std::cout<<"\nFixed      : "<<std::fixed<<2345.78868<<std::endl;
    std::cout<<"Scientific : "<<std::scientific<<2345.78868<<std::endl;

    // std::setprecision()
    std::cout<<"\nWith precision 10 : "<<std::setprecision(10)<<std::fixed<<2345.5436786543<<std::endl;
    std::cout<<"With precision 07 : "<<std::setprecision(7)<<std::fixed<<2345.5436786543<<std::endl;
    std::cout<<"With precision 05 : "<<std::setprecision(5)<<std::fixed<<2345.5436786543<<std::endl;
    
    // std::setfill()
    std::cout<<std::setfill('*');
    std::cout<<"\nWith fill    :"<<std::setw(18)<<"Prajwal Y P"<<std::setw(5)<<"20"<<std::endl;
    std::cout<<std::setfill(' ');
    std::cout<<"Without fill :"<<std::setw(18)<<"Prajwal Y P"<<std::setw(5)<<"20"<<std::endl;


    return 0;
}