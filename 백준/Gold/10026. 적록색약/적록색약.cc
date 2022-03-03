#include <bits/stdc++.h>
using namespace std;
int dx[]={1,-1,0,0},dy[]={0,0,1,-1};
int N,check[101][101];
char arr[101][101];
int cnt=0,cnt1=0;
void dfs(int x,int y){
    check[x][y]=1;
    for(int i=0;i<4;i++){
        int nx = x+dx[i];
        int ny = y+dy[i];
        if(nx<N&&ny<N&&nx>=0&&ny>=0){
            if(check[nx][ny]==0&&arr[x][y]==arr[nx][ny]){
                dfs(nx,ny);
            }
        }
    }
}



int main()
{
    cin>>N;
    for(int i=0;i<N;i++){
        scanf("%s",arr[i]);
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(check[i][j]==0){
                dfs(i,j);
                cnt++;
            }
        }
    }
    memset(check,0,sizeof(check));
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(arr[i][j]=='R') arr[i][j]='G';
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(check[i][j]==0){
                dfs(i,j);
                cnt1++;
            }
        }
    }
    cout<<cnt<<" "<<cnt1;
    return 0;
}
