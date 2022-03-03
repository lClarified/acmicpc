#include <bits/stdc++.h>

using namespace std;

int N;
priority_queue<int, vector<int>, less<int>> qu;



int main()
{
    cin.tie(0);
    cout.tie(0);
    cin>>N;
    for(int i=0;i<N;i++){
        int x;
        cin>>x;
        if(x==0&&qu.empty()){
            cout<<"0"<<'\n';
        }
        else if(x==0&&!qu.empty()){
            cout<<qu.top()<<'\n';
            qu.pop();
        }
        else
            qu.push(x);
    }


    return 0;
}
