#include <iostream>

using namespace std;

//��Ǯ��ټ�����
int main()
{
    for(float i=0;i<20;i++)
    {
        for(float j=0;j<33;j++)
        {
            if(5*i+3*j+(100-i-j)/3==100)
            {
                cout<<"1��:"<<i<<"\t";
                cout<<"2��:"<<j<<"\t";
                cout<<"3��:"<<100-i-j<<endl;
            }
        }
    }
}
