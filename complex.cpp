#include<iostream>
using namespace std;

class complex
{
    float x;
    float y;
public:
    void input(float real,float img)
    {
        x=real;
        y=img;
    }
    complex sum(complex);
    void show ()
    {
        cout<<x<<"+y"<<y<<endl;
    }
};
complex complex :: sum(complex c1)
{
    complex temp;
    temp.x=c1.x+x;
    temp.y=c1.y+y;
    return temp;
}

main()
{
    complex A,B,C;
    A.input(12.5,7.3);
    B.input(3.6,9.2);
    C=B.sum(A);
    cout<<"A= ";A.show();
    cout<<"B= ";B.show();
    cout<<"C= ";C.show();
}
