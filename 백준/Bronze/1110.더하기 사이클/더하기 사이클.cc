#include <stdio.h>
#include <stdlib.h>

int main()

{
    int a,b,c,d,n,s,r,cnt=0;

    scanf("%d",&n);
    s = n;
    while (1){
        a=n/10;
        b=n%10;
        c=b*10;
        d=(a+b)%10;
        r= c+d;
        cnt++;
        if(r==s) break;
        n=r;

    }
    printf("%d",cnt);
}


