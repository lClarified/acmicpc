#include <iostream>

using namespace std;

int main()
{
    int n,sum=0;
    int a[5];
    cin>>n;
    for(int i=0;i<5;i++)
        cin>>a[i];

    for(int i=0;i<5;i++){
        if(n==a[i])
            sum++;
    }
    cout<<sum;
    return 0;
}
