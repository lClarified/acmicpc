#include <iostream>

using namespace std;

long long dp[101],N;
int main()
{
    cin>>N;
    dp[1]=1;
    dp[2]=1;
    dp[3]=1;
    dp[4]=2;
    for(int i=0;i<N;i++){
        int m;
        cin>>m;
        for(int j=5;j<=m;j++){
            dp[j] = dp[j-1]+dp[j-5];
        }
        cout<<dp[m]<<'\n';
    }


    return 0;
}
