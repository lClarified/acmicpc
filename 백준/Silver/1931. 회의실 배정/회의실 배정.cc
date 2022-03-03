#include <bits/stdc++.h>

using namespace std;

int N,ans = 1,last_time;
pair<int,int> room[100001];
bool cmp(pair<int,int> a,pair<int,int> b){
    if(a.second<b.second) return true;
    else if(a.second == b.second){
        if(a.first < b.first) return true;
        else return false;
    }
    else return false;
}

int main()
{
    cin.tie(0);
    cout.tie(0);
    cin>>N;
    for(int i=0;i<N;i++) cin>>room[i].first>>room[i].second;
    sort(room,room + N,cmp);
    last_time = room[0].second;
    for(int i=1;i<N;i++){
        if(last_time <=room[i].first){
            last_time = room[i].second;
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
