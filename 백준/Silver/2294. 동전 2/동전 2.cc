#include <iostream>

using namespace std;

int n,k,a[101],dp[10001];

int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    dp[0]=0;
    for(int i=1;i<=10000;i++){
        dp[i]=100001;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            if(j-a[i]>=0){
                dp[j] = min(dp[j-a[i]]+1,dp[j]);
            }
        }
    }
    if(dp[k]!=100001){
        cout<<dp[k];
    }
    else cout<<-1;
    return 0;
}
