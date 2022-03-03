#include <bits/stdc++.h>

using namespace std;

int N;
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> qu;



int main()
{
    cin.tie(0);
    cout.tie(0);
    cin>>N;
    for(int i=0;i<N;i++){
        int x;
        cin>>x;
        if(x==0&&!qu.empty()){
            cout<<qu.top().second<<'\n';
            qu.pop();
        }
        else if(x==0&&qu.empty()){
            cout<<'0'<<'\n';
        }


        else
            qu.push(make_pair(abs(x),x));
    }

    return 0;
}
