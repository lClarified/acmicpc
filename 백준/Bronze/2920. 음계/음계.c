#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[101];
    gets(a);
    if (a[0]=='1'&&a[2]=='2'&&a[4]=='3'&&a[6]=='4'){
        if (a[8]=='5'&&a[10]=='6'&&a[12]=='7'&&a[14]=='8'){
        printf("ascending");
        return 0;
        }
        printf("mixed");
        return 0;
    }
    else if (a[0]=='8'&&a[2]=='7'&&a[4]=='6'&&a[6]=='5'){
            if (a[8]=='4'&&a[10]=='3'&&a[12]=='2'&&a[14]=='1'){
            printf("descending");
            return 0;
            }
            printf("mixed");
            return 0;
    }
    else
        printf("mixed");



    return 0;
}
