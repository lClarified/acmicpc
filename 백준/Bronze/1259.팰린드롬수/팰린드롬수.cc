#include <bits/stdc++.h>

using namespace std;

string N;

int main(){
    while(1){
        cin>>N;
        string rev=N;
        reverse(N.begin(),N.end());
        if(N=="0") break;
        if(N==rev) cout<<"yes"<<'\n';
        else cout<<"no"<<'\n';

    }

}
