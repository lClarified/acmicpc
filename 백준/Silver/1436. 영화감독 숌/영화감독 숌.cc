#include <bits/stdc++.h>
using namespace std;

string num;

int main()
{
    int n,cnt=0;
    cin>>n;

    int a = 665;
    while(a++){
        num = to_string(a);
        if(num.find("666")!=-1){
            cnt++;
        }
        if(cnt==n)break;

    }
    cout<<a;
    return 0;
}
