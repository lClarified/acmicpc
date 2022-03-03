#include <bits/stdc++.h>
using namespace std;
int N;
int dp[301];
int stair[301];
int main()
{
    cin.tie(0);
    cout.tie(0);
    cin>>N;
    for(int i=1;i<=N;i++){
        cin>>stair[i];
    }
    dp[1] = stair[1];
    dp[2] = dp[1] + stair[2];
    for(int i=3;i<=N;i++){
        dp[i] = max(dp[i-3]+stair[i-1] + stair[i],dp[i-2]+stair[i]);

    }
    cout<<dp[N];


    return 0;
}
