#include <iostream>
#include <string>
using namespace std;

string a[5];
int main()

{
    int ma=0;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
        if(ma<a[i].size())
            ma=a[i].size();
    }

    for(int i=0;i<ma;i++)
    {
        for(int j=0; j<5; j++)
        {
             if(a[j][i]!=0)
            {
                  cout<<a[j][i];
            }
        }
       // cout<<'\n';
    }


}
