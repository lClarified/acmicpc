#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;
int N,M,B,a;
int sec,height,ans=1000000001;
int arr[501][501];
int main()
{
    cin>>N>>M>>B;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>arr[i][j];
        }
    }
    a=B;
    for(int i=0;i<=256;i++){
        for(int j=0;j<N;j++){
            for(int k=0;k<M;k++){
                if(arr[j][k]>i){
                    sec+=2*(arr[j][k]-i);
                    B+=arr[j][k]-i;
                }
                else if(arr[j][k]<i){
                    sec+=i-arr[j][k];
                    B-=i-arr[j][k];
                }
            }
        }
        if(ans>=sec&&B>=0){
            ans = sec;
            height = max(height,i);
        }
        sec=0;
        B=a;
    }
    cout<<ans<<' '<<height;
    return 0;
}
