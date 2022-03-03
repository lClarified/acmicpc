#include <iostream>
#include <cstdio>
using namespace std;

int gcd(int a, int b){
    while(b!=0){
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}

int main()
{
    int a,b,n,i;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a>>b;
        int g=gcd(a,b);
        cout <<a*b/g<<'\n';
    }
    return 0;
}
