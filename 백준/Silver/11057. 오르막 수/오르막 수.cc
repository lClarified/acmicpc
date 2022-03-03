#include <iostream>

using namespace std;

int N,dp[1001][10],a=0;

int main()
{
    cin>>N;
    for(int i=0;i<=9;i++){
        dp[1][i] = 1;
    }
    for(int i=1;i<=N;i++){
        for(int j=0;j<=9;j++){
            for(int k=0;k<=j;k++){
                dp[i][j]=(dp[i][j]+dp[i-1][k])%10007;
            }

        }
    }
    for(int i=0;i<=9;i++){
        a = (a + dp[N][i])%10007;
    }
    cout<<a;

    return 0;
}
