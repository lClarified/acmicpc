#include <iostream>
#include <cstdio>
using namespace std;
int a[1000];
int d[1000];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        d[i]=1;
        for(int j=0;j<i;j++){
            if (a[j]<a[i]&& d[i]<d[j]+1){
                d[i]=d[j]+1;
            }
        }
    }
    int ans=d[0];
    for(int i=0;i<n;i++){
        if(ans<d[i])
            ans=d[i];
    }
    cout<<ans;
    return 0;
}
