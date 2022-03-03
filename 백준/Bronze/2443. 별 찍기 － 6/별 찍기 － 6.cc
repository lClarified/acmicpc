#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a,b,c,d,e,f;

    scanf("%d",&a);
    e=a;
    f=a*2-1;
    for(b=0;b<a;b++){
        for(c=0;c<b;c++){
            printf(" ");
        }//끝
        for(d=0;d<f;d++){
            printf("*");
        }
        printf("\n");
        f-=2;
    }

    return 0;
}
