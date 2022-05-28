#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

typedef struct line {
    int x;
    int y;
    int cost;
}line;
vector<line> com;
int N,M;
int check[1001];
int min_cost;

bool cmp(line a,line b){
    if(a.cost<b.cost) return true;
    else return false;
}

int Find(int x){
    if(check[x]==x) return x;
    else return check[x] = Find(check[x]);
}
void Union(int x,int y){
    int xx = Find(x);
    int yy = Find(y);
    check[xx] = yy;
}
void solve(){
    for(int i=1;i<=N;i++){
        check[i] = i;
    }
    for(int i=0;i<com.size();i++){
        int x = Find(com[i].x);
        int y = Find(com[i].y);
        if(x!=y){
            Union(x,y);
            min_cost+=com[i].cost;
        }
    }
    cout<< min_cost;
}

int main()
{
    cin.tie(0);
    cout.tie(0);
    cin>>N>>M;
    for(int i=0;i<M;i++){
        int x, y, cost;
        cin>>x>>y>>cost;
        com.push_back({x,y,cost});
    }
    sort(com.begin(),com.end(),cmp);
    solve();
    return 0;
}
