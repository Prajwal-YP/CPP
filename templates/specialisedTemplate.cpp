#include <iostream>
#include <cstring>
template <typename T> T max(T a, T b)
{
    return (a>b?a:b);
}
template <> const char* max(const char* a, const char* b){
    return((std::strcmp(a,b)>0)?a:b);
}

int main()
{
    const char *a{"Hello"};
    const char *b{"Hey"};

    const char *c=max(a,b);
    std::cout<<c;

    return 0;
}