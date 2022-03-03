#include <bits/stdc++.h>
using namespace std;

int arr[100001];
int n,m;
bool f(int x){
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==x) return true;
        if(arr[mid]<x) low = mid+1;
        else high = mid-1;
    }
    return false;

}
int main()
{
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cin>>m;
    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        if(f(a)) cout<<"1"<<"\n";
        else cout<<"0"<<"\n";
    }
    return 0;
}
