#include <iostream>
#include <cstring>

int main()
{
    // STRCAT AND STRNCAT   

    char s1[]{"hi"};
    char s2[]{"i am"};
    char s3[]{"prajwal Y P"};

    std::strcat(s1,", ");
    std::strcat(s1,s2);
    std::strcat(s1," ");
    std::strcat(s1,s3);
    std::cout<<"Sentence\t: "<<s1<<std::endl;

    char s[]{"Hi, i am "};
    std::strncat(s,s3,7);
    std::cout<<"Sentence\t: "<<s<<std::endl;

    // STRCPY AND STRNCPY 

    char sen1[]{"Prajwal Y P"};
    
    char sen2[]{"djvbdfef vfiu vdf f ndfi dfi n"};
    std::cout<<"BEFORE strcpy(sen2,sen1)\t: "<<sen2<<std::endl;
    std::strcpy(sen2,sen1);
    
    char sen3[]{"_______ y p"};
    std::cout<<"before strcpy(sen3,sen1,7)\t: "<<sen3<<std::endl;
    std::strncpy(sen3,sen1,7);

    std::cout<<"strcpy(sen2,sen1)\t: "<<sen2<<std::endl;
    std::cout<<"strcpy(sen3,sen1,7)\t: "<<sen3<<std::endl;
    return 0;
}