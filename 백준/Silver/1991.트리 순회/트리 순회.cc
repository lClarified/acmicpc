#include <iostream>
#include <vector>

using namespace std;

int N;
vector<pair<char,char>> tree(27);
char root;

void preorder(char start){
    if(start == '.') return;
    cout<<start;
    preorder(tree[start].first);
    preorder(tree[start].second);
}

void inorder(char start){
    if(start == '.') return;
    inorder(tree[start].first);
    cout<<start;
    inorder(tree[start].second);
}

void postorder(char start){
    if(start == '.') return;
    postorder(tree[start].first);
    postorder(tree[start].second);
    cout<<start;
}


int main()
{
    cin>>N;
    for(int i=0;i<N;i++){
        char x,y,z;
        cin>>x>>y>>z;
        tree[x].first = y;
        tree[x].second = z;
    }
    preorder('A');
    cout<<'\n';
    inorder('A');
    cout<<'\n';
    postorder('A');



    return 0;
}
