#include <bits/stdc++.h>

using namespace std;

int main(){
    int x,y,w,h;
    cin>>x>>y>>w>>h;
    int a = min(x,y);
    int b = min(w-x,h-y);
    cout<<min(a,b);
}
