#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a,b,c,d;
    scanf("%d",&a);
    for(b=0;b<=a;b++){
        for(c=0;c<b;c++){
            printf(" ");
        }
        for(d=a;d>b;d--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

