#include <stdio.h>
#include <stdlib.h>
int n;

int f(int x)
{
    int i,result;
    result=1;
    if (x==1)
        return 1;
    for(i=1;i<=x;i++)
        result=result*i;

    return result;

}

int main()
{

    scanf("%d",&n);
    printf("%d",f(n));
    return 0;
}

