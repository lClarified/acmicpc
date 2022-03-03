#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> connect[1001];
int check[1001],cnt=0;
int a,b;
void dfs(int start){
    check[start]=1;
    for(int i=0;i<connect[start].size();i++){
        int x = connect[start][i];
        if(check[x]==0){
            dfs(x);
        }
    }
}



void solve(){
     for(int i=1;i<=a;i++){
        if(check[i]==0){
            dfs(i);
            cnt++;
        }
    }
    cout<<cnt;
}
int main()
{

    cin>>a>>b;
    for(int i=0;i<b;i++){
        int x,y;
        cin>>x>>y;
        connect[x].push_back(y);
        connect[y].push_back(x);
    }

    solve();



    return 0;
}
