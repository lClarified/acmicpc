#include <bits/stdc++.h>
using namespace std;


typedef struct qu {
    int x;
    int y;
    int z;
}qu;
queue<qu> q;
int max_day,number_tomato;
int t[101][101][101];
int check[101][101][101],dx[]={1,-1,0,0,0,0},dy[]={0,0,1,-1,0,0},dz[]={0,0,0,0,1,-1};
int m,n,h;

void bfs(){
    while(!q.empty()){
        int x1 = q.front().x;
        int y1 = q.front().y;
        int z1 = q.front().z;

        q.pop();
        for(int i=0;i<6;i++){
            int xx = x1 + dz[i];
            int yy = y1 + dx[i];
            int zz = z1 + dy[i];
            if(xx>=1 && yy >= 1 && zz >= 1 && xx<=h &&yy<= n&& zz<=m){
                if(check[xx][yy][zz]==0 && t[xx][yy][zz]==0){
                    check[xx][yy][zz] = check[x1][y1][z1] + 1;
                    t[xx][yy][zz] = 1;
                    number_tomato--;
                    max_day = max(max_day,check[xx][yy][zz]);
                    q.push({xx,yy,zz});
                }
            }
        }
    }
    if(number_tomato == 0){
        cout<<max_day -1;

    }
    else{
        cout<< "-1";
    }
}


int main()
{

    cin>>m>>n>>h;
    for(int i=1;i<=h;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=m;k++){
                cin>>t[i][j][k];
                if(t[i][j][k]==1){
                    check[i][j][k]=1;
                    q.push({i,j,k});
                }
                if(t[i][j][k]==0){
                    number_tomato++;
                }
            }

        }
    }
    if(number_tomato==0) cout<<"0";
    else bfs();
    return 0;
}
