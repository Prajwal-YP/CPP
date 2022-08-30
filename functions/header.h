int max(int,int);
int min(int,int);
int sum(int,int);
int mul(int,int);


int max(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int min(int a, int b)
{
    if(a>b)
        return b;
    else
        return a;
}

int sum(int a, int b)
{
    return (a+b);
}

int mul(int a, int b)
{
    return (a*b);
}