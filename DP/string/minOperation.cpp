#include <bits/stdc++.h>

using namespace std;
int f(int ind1,int ind2, string &s1, string &s2,  vector<vector<int>>&dp){
    for(int i=0;i<=ind1;i++){
        dp[ind1][0]=0;

    }
     for(int i=0;i<=ind2;i++){
        dp[0][ind2]=0;

    }
    for(int i=1;i<=ind1;i++){
        for(int j=1;j<=ind2;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }

        }
    }

int len=dp[ind1][ind2];
    return (ind1+ind2)-2*len;


}



int main(){
    string s1,s2;
    cin>>s1>>s2;
    int ind1=s1.length();
    int ind2=s2.length();
    vector<vector<int>>dp(ind1+1,vector<int>(ind2+1,0));
    cout<<f(ind1,ind2,s1,s2,dp);


    return 0;
}