#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(){
    int n;
    cin>>n;
    queue<int> s;

    while (n--){
        string cmd;
        cin>>cmd;
        if(cmd =="push"){
            int num;
            cin>>num;
            s.push(num);

        }
        else if(cmd=="front"){
            cout<<(s.empty()?-1:s.front())<<'\n';
        }
        else if(cmd=="size"){
            cout<<(s.size())<<'\n';
        }
        else if(cmd=="pop"){
            cout<<(s.empty()?-1:s.front())<<'\n';
            if(!s.empty()){
                s.pop();
            }
        }
        else if(cmd=="empty"){
            cout<<(s.empty())<<'\n';
        }
        else if(cmd=="back"){
            cout<<(s.empty()?-1:s.back())<<'\n';
        }
    }


    return 0;
}
