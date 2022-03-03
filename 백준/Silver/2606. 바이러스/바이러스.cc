#include <bits/stdc++.h>
using namespace std;
int check[101],cnt=0,a[101][101]={},n,m;
void dfs(int start)
{
    check[start]=1;
    for(int i=1;i<=n;i++){
        if(a[start][i]==1&&check[i]==0){
            dfs(i);
            cnt++;
        }
    }
}

int main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int b,c;
        cin>>b>>c;
        a[b][c]=1;
        a[c][b]=1;
    }
    dfs(1);
    cout<<cnt;
    return 0;
}

