#include <bits/stdc++.h>

using namespace std;

int c[11];
int N;
int K,sum;
int main()
{
    cin.tie(0);
    cout.tie(0);
    cin>>N>>K;
    for(int i=0;i<N;i++){
        cin>>c[i];
    }
    while(K){
        sum+=K/c[N-1];
        K%=c[N-1];
        N--;
    }


    cout<<sum;
    return 0;
}
