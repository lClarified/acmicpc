#include <bits/stdc++.h>
using namespace std;
int T,n,a[2][100001],dp[2][100001],ans;
int main()
{
    cin>>T;

    for(int k=0;k<T;k++){
        cin>>n;
        for(int i=0;i<2;i++){
            for(int j=1;j<=n;j++){
                cin>>a[i][j];
            }
        }
        dp[0][1] = a[0][1];
        dp[1][1] = a[1][1];
        for(int i=2;i<=n;i++){
            dp[0][i] = max(dp[1][i-1],dp[1][i-2]) + a[0][i];
            dp[1][i] = max(dp[0][i-1],dp[0][i-2]) + a[1][i];

        }
        for(int i=0;i<2;i++){
            for(int j=1;j<=n;j++){
                if(ans<dp[i][j]){
                    ans = dp[i][j];
                }
            }
        }
        cout<<ans<<'\n';
        memset(a,0,sizeof(a));
        memset(dp,0,sizeof(dp));
        ans=0;
    }





    return 0;
}
