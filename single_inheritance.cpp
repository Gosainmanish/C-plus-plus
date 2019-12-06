#include<iostream>
using namespace std;

class B
{
    int a;
    public:
            int b;
           void  get_ab();
            int get_a(void);
            void show_a(void);

};

class D : public B
{
    int c;
public:
        void mul();
        void display();
};

void B :: get_ab()
{
    cout<<"\n Enter a & b: ";
    cin>>a>>b;
};

int B :: get_a()
{
    return a;
};

void B :: show_a()
{
    cout<<"A= "<<a<<endl;
}

void D ::display()
{
    show_a();
    cout<<"b= "<<b<<endl<<"c= "<<c<<endl;
}

void D :: mul()
{
    get_ab();
    c=b*get_a();

}

main()
{
    D d;
    d.mul();
    d.display();
}
