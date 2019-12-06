#include<iostream>
using namespace std;

float v(float);
float v(float,float,float);
float v(float,float);

main()
{
    float a;

    cout<<"Enter the side of CUBE : ";
    cin>>a;
    cout<<"the volume of cube is = "<<v(a)<<endl;

    float l,b,h;

    cout<<"Enter the sides of RECTANGLE : ";
    cin>>l>>b>>h;
    cout<<"the volume of cube is = "<<v(l,b,h)<<endl;

    float r;

    cout<<"Enter the radius of CYLINDER : ";
    cin>>r;
    cout<<"the volume of cube is = "<<v(r,h)<<endl;

}

float v(float l,float b,float h)
{
    return l*b*h;
}

float v(float r,float h)
{
    return 3.14*r*r*h;
}

float v(float s)
{
    return s*s*s;
}
