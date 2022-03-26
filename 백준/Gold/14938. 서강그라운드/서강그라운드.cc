#include <bits/stdc++.h>
#define INF 2100000000
using namespace std;

int N,M,R;
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
int item[101];
int Distance[101];
vector<pair<int,int>> line[101];
void dijstra(int x){
    for(int i=1;i<=N;i++) Distance[i] = INF;
    Distance[x] = 0;
    q.push({0,x});
    while(!q.empty()){
        int X = q.top().second;
        int cost = q.top().first;
        q.pop();
        for(int i=0;i<line[X].size();i++){
            int xx = line[X][i].first;
            int Cost = line[X][i].second;
            if(Distance[xx]>Distance[X]+Cost){
                Distance[xx] = Distance[X] + Cost;
                q.push({Distance[xx],xx});
            }
        }
    }
}


int find_cost(int x){
    int cost = 0;
    for(int i=1;i<=N;i++){
        if(Distance[i]<=M){
            cost += item[i];
        }
    }
    return cost;
}
void solve(){
    int maxi = 0;
    for(int i=1;i<=N;i++){
        dijstra(i);
        maxi = max(maxi,find_cost(i));
    }
    cout<<maxi;
}
int main()
{
    cin>>N>>M>>R;
    for(int i=1;i<=N;i++){
        cin>>item[i];
    }
    for(int i=1;i<=R;i++){
        int x,y,cost;
        cin>>x>>y>>cost;
        line[x].push_back({y,cost});
        line[y].push_back({x,cost});
    }
    solve();
    return 0;
}
