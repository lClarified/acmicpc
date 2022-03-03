#include <stdio.h>
#include <stdlib.h>

int main()
{

    char a[101];
    int i;
    int cnt[26] = {0};
    scanf("%s", a);
    for (i=0;i<strlen(a);i++)
    {
        cnt[a[i]- 'a']++;
    }
    for (i=0;i<26;i++)
    printf("%d ", cnt[i]);


}
