#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[101];
    int i;

    gets(a);
    for(i=0;a[i]!='\0';i++){
        if(i%10==0&&i>=10)
            printf("\n");
        printf("%c",a[i]);

    }
    return 0;
}
