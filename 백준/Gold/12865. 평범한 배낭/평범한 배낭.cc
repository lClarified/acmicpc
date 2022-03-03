#include <iostream>

using namespace std;

int N,K,W[101],V[101],dp[101][100001];
int main()
{
    cin>>N>>K;
    for(int i=1;i<=N;i++){
        cin>>W[i]>>V[i];
    }
    for(int i=1;i<=N;i++){
        for(int j=1;j<=K;j++){
            if(W[i]<=j){
                dp[i][j] = max(V[i]+dp[i-1][j-W[i]],dp[i-1][j]);
            }
            else
                dp[i][j] = dp[i-1][j];

        }
    }
    cout<<dp[N][K];

    return 0;
}
