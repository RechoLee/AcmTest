#include <iostream>

using namespace std;

//百钱买百鸡问题
int main()
{
    for(float i=0;i<20;i++)
    {
        for(float j=0;j<33;j++)
        {
            if(5*i+3*j+(100-i-j)/3==100)
            {
                cout<<"1鸡:"<<i<<"\t";
                cout<<"2鸡:"<<j<<"\t";
                cout<<"3鸡:"<<100-i-j<<endl;
            }
        }
    }
}
