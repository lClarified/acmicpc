#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,a;

    scanf("%d",&a);
    for(j=1;j<=a;j++){
        for(i=1;i<=j;i++){
            printf("*");
        }
        printf("\n");
    }






    return 0;
}
