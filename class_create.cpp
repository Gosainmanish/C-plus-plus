#include<iostream>
using namespace std;
class A
{
        int a;
        int b;
    public:
            void getdata(int x,int y)
            {
                a=x;
                b=y;
            }

            void display();
};

void A :: display()
{
    cout<<"A = "<<a<<endl<<"B = "<<b<<endl;
}

main()
{
    A m;
    m.getdata(10,45);
    m.display();
}
