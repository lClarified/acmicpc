#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;
int N,a[10001];


int main()
{
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        int m;
        scanf("%d",&m);
        a[m]++;
    }
    for(int i=1;i<=10000;i++){
        if(a[i]>0){
            for(int j=0;j<a[i];j++){
                printf("%d\n",i);
            }
        }
    }
    return 0;
}
