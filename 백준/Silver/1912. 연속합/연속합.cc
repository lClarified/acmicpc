#include <iostream>

using namespace std;

int a[100001],N,dp[100001],M=-1000;

int main()
{
    cin>>N;
    for(int i=1;i<=N;i++){
        cin>>a[i];
    }

    for(int i=1;i<=N;i++){
        dp[i] = max(dp[i-1]+a[i],a[i]);
        
    }
    
    for(int i=1;i<=N;i++){
        if(dp[i]>M){
            M = dp[i];
        }
    }
    cout<<M;

    return 0;
}
