#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char a[101];
    int i;
    gets(a);
    for(i=0;i<strlen(a);i++){
        if(a[i]>=48&&a[i]<=57)
            printf("%c",a[i]);
        else if(a[i]>=65&&a[i]<=90){
            if(a[i]+13>90)
                printf("%c",a[i]-13);
            else
                printf("%c",a[i]+13);
        }
        else if(a[i]>=97&&a[i]<=122){
            if(a[i]+13>122)
                printf("%c",a[i]-13);
            else
                printf("%c",a[i]+13);

        }
        else if (a[i]==32)
                printf("%c",a[i]);
    }

    return 0;
}
