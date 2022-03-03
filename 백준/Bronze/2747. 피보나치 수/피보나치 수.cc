#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,p[101],a;
    scanf("%d",&n);
    p[0]=0;
    p[1]=1;
    for(i=2;i<n+1;i++){
        p[i]=p[i-2]+p[i-1];
    }
    printf("%d",p[n]);
    return 0;
}
