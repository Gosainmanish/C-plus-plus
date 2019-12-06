#include<iostream>
using namespace std;
class XYZ;
class ABC
{
    int i;
    public:
    void gettdata(int x)
    {
        i=x;
    }
    friend void sum(ABC,XYZ);
};

class XYZ
{
    int j;
    public:
    void gettdata(int l)
    {
        j=l;
    }
    friend void sum(ABC,XYZ);
};

void sum(ABC s,XYZ a)
{
    cout<<a.j+s.i<<endl;
}

int main()
{
    ABC w;
    w.gettdata(4);
     XYZ p;
       p.gettdata(7);
   sum(w,p);

   return 0;
}
