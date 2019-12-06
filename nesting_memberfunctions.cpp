#include<iostream>
using namespace std;

class set
{
        int m;
        int n;
public:
        void input(void);
        void display(void);
        int largest(void);

};

void set :: input()
{
    cout<<"Input m & n : "<<endl;
    cin>>m>>n;
}
void set :: display()
{
    cout<<"largest no. = "<<largest()<<endl;
}

int set :: largest()
{
    if(m>=n)
        return m;
    else
        return n;
}

main()
{
    set A;
    A.input();
    A.display();
}
