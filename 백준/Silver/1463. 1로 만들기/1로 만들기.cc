#include <bits/stdc++.h>
using namespace std;
int N;
int dp[1000001];

int main()
{
    cin.tie(0);
    cout.tie(0);
    cin>>N;
    dp[1]=1;
    for(int i=2;i<=N;i++){
        if(dp[i-1]>0) dp[i] = dp[i-1]+1;
        if(dp[i/2]>0 && i%2==0){
            if(dp[i]>0) dp[i] = min(dp[i],dp[i/2]+1);
            else dp[i] = dp[i/2]+1;
        }
        if(dp[i/3]>0 && i%3==0){    
            if(dp[i]>0) dp[i]=min(dp[i],dp[i/3]+1);
            else dp[i] = dp[i/3]+1;
        }
    }
    cout<<dp[N]-1;

    return 0;
}
