#include <iostream>
#include <stdio.h>

using namespace std;

int N,K,dp[201][201];

int main()
{
    cin>>N>>K;
    for(int i=0;i<=N;i++){
        dp[i][1] = 1;
    }
    for(int i=1;i<=K;i++)
    {
        dp[0][i] = 1;
    }
    for(int i=1;i<=N;i++){
        for(int j=1;j<=K;j++){
            for(int k=0;k<=i;k++){
                dp[i][j] = (dp[i-k][j-1]+dp[i][j])%1000000000;
            }
            //printf("%d ", dp[i][j]);
        }
        //printf("\n");
    }
    cout<<dp[N][K];
    return 0;
}
