#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str[100] = {" "};
    int length = 0;

    scanf("%s", str);

    length = strlen(str);

    printf("%d", length);


}
