#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i,j;
    int a;
    scanf("%d", &a);
    for(i=a;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

