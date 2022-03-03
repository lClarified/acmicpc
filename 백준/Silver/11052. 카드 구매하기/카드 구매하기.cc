#include <iostream>

using namespace std;
int N,a[1001],dp[1001];
int main()
{
    cin>>N;
    for(int i=1;i<=N;i++){
        cin>>a[i];
    }

    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            dp[i] = max(a[j]+dp[i-j],dp[i]);
        }
    }

    cout<<dp[N];



    return 0;
}
