#include <iostream>
#include <string>

using namespace std;

string str="0123456789ABCDEF";

void f(int n,int k)
{
    if(n<k) cout<<str[n];
    else  f(n/k,k),cout<<str[n%k];
}
int main()
{
    int n,k;
    cin>>n>>k;
    f(n,k);
    return 0;
}
