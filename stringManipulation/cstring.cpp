#include <iostream>
#include <cstring>

int main()
{
    char  s1[]{"jdfg uvgnE"};
    char  s2[]{"jdfg uvgnf"};
    char  s3[]{"jdfg uvgna"};

    std::cout<<s1<<std::endl;
    std::cout<<s2<<"\n"<<std::endl;
    std::cout<<"std::strlen(s1)\t: "<<std::strlen(s1)<<std::endl;
    std::cout<<"std::strcmp(s1,s2)\t: "<<std::strcmp(s1,s2)<<std::endl;
    std::cout<<"std::strcmp(s1,s3)\t: "<<std::strcmp(s1,s3)<<std::endl;
    std::cout<<"std::strncmp(s1,s2)\t: "<<std::strncmp(s1,s2,8)<<std::endl;
    std::cout<<"std::strncmp(s1,s3)\t: "<<std::strncmp(s1,s3,8)<<std::endl;

    // char  s1[]{"jdfg uvnE"};
    std::cout<<"std::strchr(s1,'g')\t: "<<std::strchr(s1,'g')<<std::endl;

    char sen[]{"D:/Workspace-YP/Cpp/cstring.cpp"};
    char *s=sen;
    while(std::strchr(s,'/'))
    {
        s=std::strchr(s,'/');
        std::cout<<"s\t: "<<s<<std::endl;
        s++;;
    }
    std::cout<<"match\t: "<<s<<std::endl;
    std::cout<<"match\t: "<<std::strrchr(sen,'/')+1<<std::endl;

    
    return 0;
}

        // STRCMP
        // STRNCMP
        // STRCHR
        // STRRCHR