#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

typedef struct P{
    int x;
    int y;
}P;

int n;

int main()
{
    P a[51];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i].x>>a[i].y;
    }
    for(int i=0;i<n;i++){
        int k=0;
        for(int j=0;j<n;j++){
            if(a[i].x<a[j].x&&a[i].y<a[j].y){
                k++;
            }
        }
        cout<<k+1<<' ';
    }
    return 0;
}
