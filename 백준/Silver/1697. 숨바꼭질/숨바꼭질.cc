#include <bits/stdc++.h>
using namespace std;

int arr[100001];
int chk[100001];
int n,k;
int bfs(){
    queue<int> q;
    q.push(n);
    chk[n]=1;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        if(x==k){
            return chk[x];
        }
        int x1 = x+1;
        int x2= x-1;
        int x3= x*2;
        if(x1<=100000){
            if(chk[x1]==0){
                chk[x1]=chk[x]+1;
                q.push(x1);
            }
        }
        if(x2<=100000&&x2>=0){
            if(chk[x2]==0){
                chk[x2]=chk[x]+1;
                q.push(x2);
            }
        }
        if(x3<=100000&&x3>=0){
            if(chk[x3]==0){
                chk[x3]=chk[x]+1;
                q.push(x3);
            }
        }
    }

}


void solve(){
    int answer = bfs()-1;
    cout << answer;
}
int main()
{

    cin>>n>>k;

    solve();
    return 0;
}
