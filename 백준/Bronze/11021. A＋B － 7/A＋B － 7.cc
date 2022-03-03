#include <iostream>
#include <stdio.h>
#include <string.h>


using namespace std;

int main(void)
{

    int n,a,b;
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>a>>b;
        printf("Case #%d: %d\n",i,a+b);
    }
	return 0;
}
