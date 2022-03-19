#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int N,M,K,X,check[300001];
vector<int> v[300001];
queue<int> q;

void bfs(int start){
    q.push(start);
    check[start]=1;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int i=0;i<v[x].size();i++){
            int xx = v[x][i];
            if(check[xx]==0){
                q.push(xx);
                check[xx]=check[x]+1;
            }
        }
    }


}

int main()
{
    cin>>N>>M>>K>>X;
    for(int i=0;i<M;i++){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
    }
    bfs(X);
    int x=0;
    for(int i=1;i<=N;i++){
        if(check[i]-1==K){
            cout<<i<<'\n';
            x++;
        }
    }
    if(x==0){
        cout<<-1;
    }
}
