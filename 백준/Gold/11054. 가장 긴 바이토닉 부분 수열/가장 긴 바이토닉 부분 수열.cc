#include <iostream>

using namespace std;

int N,a[1001],dp1[1001],dp2[1001],mx1=0,mx2=0,ans=0;

int main()
{
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>a[i];
    }

        for(int j=0;j<N;j++){
            dp1[j]=1;
            for(int k=0;k<j;k++){
                if(a[k]<a[j]){
                    dp1[j] = max(dp1[j],dp1[k]+1);
                }
            }
        }
        for(int j=N-1;j>=0;j--){
            dp2[j]=1;
            for(int k=j;k<=N;k++){
                if(a[k]<a[j]){
                    dp2[j] = max(dp2[j],dp2[k]+1);
                }
            }
        }




    for(int i=0;i<N;i++){
        if(dp1[i]+dp2[i]>ans){
            ans = dp1[i]+dp2[i];
        }
    }






    cout<<ans-1<<'\n';
    


    return 0;
}
