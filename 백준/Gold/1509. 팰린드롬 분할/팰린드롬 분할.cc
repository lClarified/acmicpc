#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

vector<int> p;

string s;
vector<int> len[2501];
int dp[2501];

int main()
{
    cin>>s;
    len[0].push_back(1);
    for(int i=1;i<=s.size();i++){
        len[i].push_back(1);
        if(s[i]==s[i-1])
        {
            len[i].push_back(2);
        }
        for(int j = 0;j < len[i-1].size();j++)
        {
            if((i-len[i-1][j]-1 >= 0) &&(s[i] == s[i-len[i-1][j]-1]))
            {
                len[i].push_back(len[i-1][j]+2);
            }
        }

    }
    dp[0] = 1;
    for(int i=0;i<s.size();i++){
        dp[i] = dp[i-len[i][0]]+1;
        for(int j=1;j<len[i].size();j++){
            dp[i] = min(dp[i-len[i][j]]+1,dp[i]);
        }
    }

    cout<<dp[s.size()-1];

    return 0;
}
