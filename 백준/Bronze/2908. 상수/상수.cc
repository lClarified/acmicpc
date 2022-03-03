#include <stdio.h>
#include <stdlib.h>

int main()
{

    char a[101],b[101];
    int ra,rb;
    scanf("%s %s",a,b);
    ra=(a[2]-48)*100+(a[1]-48)*10+(a[0]-48);
    rb=(b[2]-48)*100+(b[1]-48)*10+(b[0]-48);
    if(rb<ra)
        printf("%d",ra);
    else
        printf("%d",rb);
    return 0;
}
