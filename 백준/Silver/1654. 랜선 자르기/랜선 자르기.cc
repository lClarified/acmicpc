#include <bits/stdc++.h>
using namespace std;
int number_LAN;
long long int want_LAN;
long long int LAN[1000001];


int main()
{
    cin.tie(0);
    cout.tie(0);
    cin>>number_LAN>>want_LAN;
    for(int i=0;i<number_LAN;i++){
        cin>>LAN[i];
    }
    sort(LAN,LAN+number_LAN);
    long long int start = 1;
    long long int finish = LAN[number_LAN-1];
    long long int mid;
    long long int cnt =0;
    long long int max_length = 0;
    while(start<=finish){
        mid = (start+finish) / 2;
        for(int i=0;i<number_LAN;i++){
            cnt+=LAN[i]/mid;
        }
        if(cnt>=want_LAN){
            max_length = max(max_length,mid);
            start = mid + 1;
            cnt = 0;
        }
        else if(cnt < want_LAN){
            finish = mid - 1;
            cnt = 0;
        }

    }
    cout<<max_length;
    return 0;
}
