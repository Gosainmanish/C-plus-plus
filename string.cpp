#include<iostream>
#include<cstring>
class string
{
    char str[80];
public:

    string()
    {
                strcpy(str,"  ");
    }

    string(char s[])
    {
        strcpy(str,s);
    }

    void display()
    {
      std ::cout<<str<<"\n";
    }

    string operator + (string s4)
    {
        if((strlen(str)+strlen(s4.str))<80)
        {
            string temp;
            strcpy(temp.str,str);
            strcat(temp.str,s4.str);
            return temp;
        }
    }
};

main()
{
    string s1("ABHISHEK");
    string s2("MISHRA");
    string s3;
    s3=s1+s2;
    s3.display();
}
