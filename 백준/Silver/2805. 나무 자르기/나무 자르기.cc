#include <bits/stdc++.h>
using namespace std;
int number_tree;
long long int want_high;
long long int tree[1000001];


int main()
{
    cin.tie(0);
    cout.tie(0);
    cin>>number_tree>>want_high;
    for(int i=0;i<number_tree;i++){
        cin>>tree[i];
    }
    sort(tree,tree+number_tree);
    long long int start = 1;
    long long int finish = tree[number_tree-1];
    long long int mid;
    long long int cnt =0;
    long long int max_high = 0;
    while(start<=finish){
        mid = (start+finish) / 2;
        for(int i=0;i<number_tree;i++){
            if(mid<tree[i]){
                cnt+=tree[i]-mid;
            }
        }
        if(cnt>=want_high){
            max_high = max(max_high,mid);
            start = mid + 1;
            cnt = 0;
        }
        else if(cnt < want_high){
            finish = mid - 1;
            cnt = 0;
        }

    }
    cout<<max_high;
    return 0;
}
