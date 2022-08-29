#include<iostream>
#include <cstring>
int main()
{
    std::cout<<"Is c alphabet\t\t\t: "<<isalpha('c')<<std::endl;
    std::cout<<"Is c alphaNumeric\t\t\t: "<<isalnum('c')<<std::endl;
    std::cout<<"Is 7 alphabet\t\t\t: "<<isalpha('7')<<std::endl;

    char sentence[]{"Hi, i am Prajwal Y P"};
    int s{0},l{0},u{0};
    for(size_t i:sentence)
    {
        if(isspace(i))
            s++;
        if(islower(i))
            l++;
        if(isupper(i))
            u++;
    }

    std::cout<<"\nSentence\t: "<<sentence<<std::endl;
    std::cout<<"Total number of length\t:"<<std::strlen(sentence)<<std::endl;
    std::cout<<"Total number of size\t:"<<sizeof(sentence)<<std::endl;
    std::cout<<"Total number of space\t:"<<s<<std::endl;
    std::cout<<"Total number of lowerletters\t:"<<l<<std::endl;
    std::cout<<"Total number of upperletters\t:"<<u<<std::endl;

    std::cout<<"\nsentence with no space and all upper case letters"<<std::endl;
    std::cout<<"-------------------------------------------------\n"<<std::endl;


    for(auto i:sentence)
    {
        if(!isspace(i))
        {
            if(islower(i))
            {
                i=std::toupper(i);
                std::cout<<i;
            }
            else
                std::cout<<i;

        }
    }
    return 0;
}