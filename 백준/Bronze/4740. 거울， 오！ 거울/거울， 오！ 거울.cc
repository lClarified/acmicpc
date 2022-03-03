#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    //char a[101];
    string a;
    int i,cnt=0;
    while(1){
        //gets(a);
        getline(cin,a);
        if(a=="***")
            break;
        for(i=a.size()-1;i>=0;i--){
            printf("%c",a[i]);
        }
        printf("\n");
    }
    return 0;
}
