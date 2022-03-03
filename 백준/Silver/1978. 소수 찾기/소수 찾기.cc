#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[101];
    int sum=0,i,n,j,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        for(j=1;j<=a[i];j++){
            if(a[i]%j==0){
                t++;
            }
        }
        if(t==2)
            sum++;
        t=0;
    }
    printf("%d",sum);
    return 0;
}
