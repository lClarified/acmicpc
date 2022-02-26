#include <bits/stdc++.h>

using namespace std;

int N;
int A[51];
int B[51];
int ans;
bool cmp(int a,int b){
    if(a>b) return true;
    else return false;
}

int main()
{
    cin.tie(0);
    cout.tie(0);
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    for(int i=0;i<N;i++){
        cin>>B[i];
    }
    sort(A,A+N);
    sort(B,B+N,cmp);
    for(int i=0;i<N;i++){
        ans += A[i]*B[i];
    }
    cout<<ans;
    return 0;
}
