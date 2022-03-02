#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i,max=0;
    double sum=0;
    scanf("%d",&a);
    for(i=1; i<=a; i++){
        scanf("%d", &b);
        if(b>max)
            max=b;
            sum+=b;
    }
    printf("%0.2f", sum/(a*max)*100);

    return 0;
}