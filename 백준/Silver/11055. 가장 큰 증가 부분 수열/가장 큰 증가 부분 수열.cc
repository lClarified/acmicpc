#include <bits/stdc++.h>

using namespace std;

int N;

int arr[1001];
int dp[1001];
int main()
{
    cin.tie(0);
    cout.tie(0);
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    for(int i=0;i<N;i++){
        dp[i]=arr[i];
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j]){
                dp[i] = max(dp[i],dp[j]+arr[i]);
            }
        }
    }
    int ans=0;
    for(int i=0;i<N;i++){
        if(ans<dp[i])
            ans=dp[i];


    }
    cout<<ans;



    return 0;
}
