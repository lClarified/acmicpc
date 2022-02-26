#include <iostream>
#include <vector>

using namespace std;

int N,arr[12],calculate[5],maxi=-1000000000,mini=1000000000;

void f(int p,int m,int t,int d,int cnt,int sum){
    if(cnt==N){
        maxi = max(maxi,sum);
        mini = min(mini,sum);
    }
    if(p>0) f(p-1,m,t,d,cnt+1,sum+arr[cnt]);
    if(m>0) f(p,m-1,t,d,cnt+1,sum-arr[cnt]);
    if(t>0) f(p,m,t-1,d,cnt+1,sum*arr[cnt]);
    if(d>0) f(p,m,t,d-1,cnt+1,sum/arr[cnt]);


}

int main()
{
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    for(int i=0;i<4;i++){
        cin>>calculate[i];
    }
    f(calculate[0],calculate[1],calculate[2],calculate[3],1,arr[0]);

    cout<<maxi<<'\n'<<mini;

    return 0;
}
