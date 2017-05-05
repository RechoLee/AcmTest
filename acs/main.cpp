#include <iostream>
#include <string>
using namespace std;

string SortStr(string ss)
{
    char item;
    for(int i=0;i<ss.length()-1;i++)
    {
        for(int j=0;j<ss.length()-i-1;j++)
        {
            if(ss[j]>ss[j+1])
            {
                item=ss[j+1];
                ss[j+1]=ss[j];
                ss[j]=item;
            }
        }
    }
    return ss;
}

int main()
{
    string str;
    while(cin>>str)
    {
        char item;
        for(int i=0;i<str.length()-1;i++)
        {
            for(int j=0;j<str.length()-i-1;j++)
            {
                if(str[j]>str[j+1])
                {
                    item=str[j+1];
                    str[j+1]=str[j];
                    str[j]=item;
                }
            }
        }
        cout<<str[0]<<" "<<str[1]<<" "<<str[2]<<endl;
    }
}
