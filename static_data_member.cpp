#include<iostream>

using namespace std;

class item
{
    static int count;
           int number;
       public:
        void getdata(int a)
        {
            number=a;
            count++;
        }
        void getcount(void)
        {
            cout<<"count :";
            cout<<count<<endl;
        }
};

int item :: count;
int main()
{
    item a,b,c;

    a.getcount();
    b.getcount();
    c.getcount();

    a.getdata(100);
    b.getdata(34);
    c.getdata(653);

    cout<<"after reading data "<<endl;
    a.getcount();
    b.getcount();
    c.getcount();
return 0;
}
