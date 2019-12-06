#include<iostream>
using namespace std;
class A
{
    int b;
    int c;
    public:
    void gettdata(int x,int y)
    {
        b=x;
        c=y;
    }
    friend int sum(A);
};
int sum(A a)
{
    return a.b+a.c;
}

main()
{
    A w;
    w.gettdata(4,8);
    cout<<"sum : "<<sum(w);
}
