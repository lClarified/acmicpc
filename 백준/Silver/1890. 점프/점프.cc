#include <iostream>

using namespace std;

long long N,a[101][101],dp[101][101];

int main()
{
    cin>>N;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            cin>>a[i][j];
        }
    }
    dp[1][1] = 1;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            if(i==N && j==N)
            {
                continue;
            }
            if(i+a[i][j]<=N||j+a[i][j]<=N){
                dp[i+a[i][j]][j] += dp[i][j];
                dp[i][j+a[i][j]] += dp[i][j];
            }
        }
    }
    cout<<dp[N][N];

    return 0;
}
