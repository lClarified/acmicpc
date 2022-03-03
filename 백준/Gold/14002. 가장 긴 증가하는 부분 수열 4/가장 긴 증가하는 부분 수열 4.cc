#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N,a[1001],dp[1001];
vector<int> num[1001];

int main()
{
    int ans=0;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>a[i];
        num[i].push_back(a[i]);
    }
    for(int i=0;i<N;i++){
        dp[i]=1;
        for(int j=0;j<=i;j++){
            if(a[j]<a[i]&&dp[j]+1>dp[i]){
                num[i].clear();
                dp[i] = dp[j]+1;
                num[i] = num[j];
                num[i].push_back(a[i]);
            }
        }
        sort(num[i].begin(),num[i].end());
    }
    for(int i=0;i<N;i++){
        if(ans<num[i].size())
            ans = num[i].size();
    }
    cout<<ans<<'\n';
    for(int i=0;i<N;i++){
        if(num[i].size()==ans){
            for(int j=0;j<ans;j++){
                cout<<num[i][j]<<' ';
            }
            return 0;
        }
    
    }
    return 0;
}
