#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string.h>
using namespace std;



int main()
{
    int l,i;
    char a[101];
    scanf("%s",a);
    l = strlen(a);
    printf("%c",a[0]);
    for(i=0;i<l;i++){
        if(a[i]=='-')
            printf("%c",a[i+1]);
    }
    return 0;
}
