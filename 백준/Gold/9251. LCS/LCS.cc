#include <iostream>
#include <string>

using namespace std;

string str1,str2;
int dp[1001][1001];
int main()
{
    cin>>str1>>str2;
    for(int i=1;i<=str1.size();i++){
        for(int j=1;j<=str2.size();j++){
            dp[i][j] =  max(dp[i-1][j-1] + (str1[i-1]==str2[j-1]?1:0),max(dp[i][j-1],dp[i-1][j]));
        }
    }
    cout<<dp[str1.size()][str2.size()];
    return 0;
}
