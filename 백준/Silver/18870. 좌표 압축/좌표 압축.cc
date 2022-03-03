#include <bits/stdc++.h>

using namespace std;

int N;
vector<int> X;
vector<int> Y;

int lower_b(int x){
    int low=0;
    int high = X.size() - 1;
    int ret = 987654321;
    while(low<=high){
        int mid=(low+high)/2;
        if(X[mid]>=x){
            if(ret>mid){
                ret = mid;
            }
            high = mid -1;
        }
        else{
            low = mid + 1;
        }
    }
    return ret;
}
int main()
{
    cin.tie(0);
    cout.tie(0);
    cin>>N;
    for(int i=0;i<N;i++){
        int x;
        cin>>x;
        X.push_back(x);
        Y.push_back(x);
    }
    sort(X.begin(),X.end());
    X.erase(unique(X.begin(),X.end()),X.end());
    for(int i=0;i<Y.size();i++){
        cout<<lower_b(Y[i])<<' ';
    }

    return 0;
}
