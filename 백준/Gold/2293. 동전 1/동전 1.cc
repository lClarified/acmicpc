#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

long long n,k,a[101],dp[10001];


int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    dp[0]= 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            if(j-a[i]>=0)
                dp[j]+=dp[j-a[i]];
        }
    }
    cout<<dp[k];
    return 0;
}
