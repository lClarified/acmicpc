#include <bits/stdc++.h>

using namespace std;

int N,sum=0;
int main()
{
    cin.tie(0);
    cout.tie(0);
    cin >> N;
    while(N>0){
        if(N%5==0){
            sum += N/5;
            cout<<sum;
            return 0;
        }
        N-=3;
        sum++;
    }

    if(N==0){
        cout<<sum;
    }
    else cout<<-1;
    return 0;
}
