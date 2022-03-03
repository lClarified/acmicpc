#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int n, a, b;
    
    scanf("%d", &n);
 
    a = (n + 8) % 12;
    b = (n + 6) % 10;
 
    printf("%c%d\n", 'A' + a, b);
}