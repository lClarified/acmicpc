#include <iostream>
#include <string>
#include<stdlib.h>
#include <algorithm>
using namespace std;
int main() {
    string a,b,c,d;
    cin>>a>>b>>c>>d;
    string s1 = a+b;
    string s2 = c+d;

    long long l1 = stoll(s1);
    long long l2 = stoll(s2);
    cout << l1+l2<<'\n';

}
