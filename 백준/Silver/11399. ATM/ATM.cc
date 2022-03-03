#include <bits/stdc++.h>

using namespace std;

int N,ans;
int times[1001];
int sum[1001];

int main()
{
    cin.tie(0);
    cout.tie(0);
    cin>>N;
    for(int i=0;i<N;i++) cin >> times[i];
    sort(times,times+N);
    for(int i=0;i<N;i++){
        sum[i] = sum[i-1] + times[i];
    }
    for(int i=0;i<N;i++) ans += sum[i];
    cout<<ans;
    return 0;
}
