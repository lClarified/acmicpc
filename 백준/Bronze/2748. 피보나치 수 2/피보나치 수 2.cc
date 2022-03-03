#include <iostream>

using namespace std;


long long int memo[100];

long long int fibonacci(long long int n)
{
    if (n==1||n==2) {
        return 1;
    } else {
        if (memo[n]){
            return memo[n];
        }
        memo[n] = fibonacci(n-1)+fibonacci(n-2);
        return memo[n];
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}
