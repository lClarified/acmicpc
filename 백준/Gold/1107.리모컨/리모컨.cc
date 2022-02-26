#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

int ch;
int but;
int v[10];
int cnt;
vector<int> make_channel;
int check(int a){
    if(a==0){
        if(v[a]){
            return 0;
        }
        else return 1;

    }
    int len = 0;
    while(a>0){
        if(v[a%10])return 0;
        a/=10;
        len++;
    }
    return len;
}

int main()
{
    cin>>ch>>but;
    for(int i=0;i<but;i++){
        int p;
        cin>>p;
        v[p] = 1;
    }
    int cnt = abs(ch-100);

    for(int i=0;i<=1000000;i++){
        int c = i;
        int len = check(c);
        if(len>0){
            int press = abs(c-ch);
            if(cnt>press + len){
                cnt = press + len;
            }
        }

    }
    cout<<cnt;

    return 0;
}
