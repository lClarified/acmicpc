#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    while (getline(cin,s)){
        int lower = 0;
        int upper = 0;
        int number = 0;
        int space = 0;
        for (int i=0;s[i]!='\0';i++){
            if (s[i]>= 'a'&& s[i]<='z'){
                lower +=1;
            } else if (s[i]>= 'A'&& s[i]<='Z'){
                upper +=1;
            } else if (s[i]>='0'&& s[i]<='9'){
                number +=1;
            } else if(s[i] == ' ') {
                space +=1;
            }
        }
        cout<<lower<<' '<<upper<<' ';
        cout<<number<<' '<<space<<'\n';
    }
    return 0;
}
