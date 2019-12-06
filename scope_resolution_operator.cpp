#include<iostream>
using namespace std;
int m = 10;
main()
{
    int m = 20;
    {
        int m = 30;
        cout<<"***INNER BLOCK***"<<endl<<"M = "<<m<<endl<<"::M = "<<::m<<endl;
    }

    cout<<"***OUTER BLOCK***"<<endl<<"M = "<<m<<endl<<"::M = "<<::m<<endl;
}
