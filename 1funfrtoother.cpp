
#include<iostream>
using namespace std;

class C2;
class C1
{
    int a;
public:
    void data_a(int x)
    {
        a=x;
    }
    int incr(C2 ob);
};

class C2
{
    int b;
public:
    void data_b(int y)
    {
        b=y;
    }
     friend int C1 ::  incr(C2 ob);
};

int C1 :: incr(C2 ob)
{
    return ob.b++;
}

main()
{
    C2 o2;
    C1 ob;
    ob.data_a(5);
    o2.data_b(11);
    cout<<"ANSWER IS : "<<ob.incr(o2);
}
