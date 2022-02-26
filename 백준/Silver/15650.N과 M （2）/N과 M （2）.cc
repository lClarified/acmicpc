#include <iostream>
#include <vector>

using namespace std;

int N,M,check[9];
vector<int> vec;
int b=1;


void f(int a){
    if(a == M){
        for(int i=0;i<M;i++){
            cout<<vec[i]<<" ";
        }
        cout << "\n";
        return;
    }
    for(int i=b;i<=N;i++){
        if(check[i]==0){
            check[i]=1;
            vec.push_back(i);
            b=i;
            f(a+1);
            check[i] = 0;
            vec.pop_back();
        }
    }
}


int main()
{
    cin>>N>>M;
    f(0);


    return 0;
}
