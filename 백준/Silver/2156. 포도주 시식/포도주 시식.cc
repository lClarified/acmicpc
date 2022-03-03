#include <iostream>

using namespace std;

int a[10001],dp[10001];

int main()
{
    int n;
    cin>>n;
    for(int i=3;i<n+3;i++){
        cin>>a[i];
    }
    for(int i=3;i<n+3;i++){
        dp[i] = max(dp[i-2]+a[i],dp[i-3]+a[i-1]+a[i]);
        dp[i] = max(dp[i],dp[i-1]);
    }
    cout<<dp[n+2];
    return 0;
}
