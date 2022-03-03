#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string.h>
using namespace std;



int main()
{
    char a[10001];
    int i,joi=0,ioi=0;
    cin>>a;
    for(i=0;a[i]!='\0';i++){
        if(a[i]=='J'&&a[i+1]=='O'&&a[i+2]=='I')
            joi++;
        else if (a[i]=='I'&&a[i+1]=='O'&&a[i+2]=='I')
                ioi++;
    }
    

    cout<<joi<<'\n'<<ioi;
    return 0;
}
