#include <bits/stdc++.h>
/*
#include <iostream>
#include <string>
#include <algorithm>
*/
using namespace std;



int main()
{
    int n;
    cin>>n;

    pair<int,int> a[n];

    for(int i=0;i<n;i++){
        cin>>a[i].second>>a[i].first;

    }
    sort (a,a+n);

    for(int i=0;i<n;i++){
        cout<<a[i].second<<' '<<a[i].first<<'\n';
    }
    return 0;
}
