#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j,n;
    scanf("%d",&n);
    for(j=1;j<=9;j++)
            printf("%d * %d = %d\n",n,j,n*j);


    return 0;
}
