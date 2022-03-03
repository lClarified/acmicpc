#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,a,k,e,l,n;

    scanf("%d",&a);
    e=a;
    n=e;
    j=1;
    for(i=0;i<=n-1;i++){
        for(k=1;k<=e-1;k++){
            printf(" ");
        }
        for(l=1;l<=j;l++){
            printf("*");
        }

        printf("\n");
        e--;
        j+=2;


    }


    return 0;
}

