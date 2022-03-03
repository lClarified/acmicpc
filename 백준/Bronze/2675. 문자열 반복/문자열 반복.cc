#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a,b;
    string str;
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>b>>str;
        for(int j=0;j<str.size();j++){
            for(int k=0;k<b;k++)
                cout<<str[j];
        }
        cout<<'\n';
    }
    return 0;
}
