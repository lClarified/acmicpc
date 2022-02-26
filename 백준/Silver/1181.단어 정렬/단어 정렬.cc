#include <bits/stdc++.h>

using namespace std;

pair<int,string> a[20001];
int N;

bool cmp(pair<int ,string> x, pair<int , string> y){
    if(x.first < y.first) return true;
    else if(x.first == y.first){
        if(x.second < y.second) return true;
        else return false;
    }
    else return false;
}

int main(){
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>a[i].second;
        a[i].first = a[i].second.size();
    }
    sort(a,a+N,cmp);
    string M = a[0].second;
    cout<<M<<'\n';
    for(int i=1;i<N;i++){
        if(M == a[i].second)
            continue;
        else{
            M = a[i].second;
            cout<<M<<'\n';
        }

    }
}
