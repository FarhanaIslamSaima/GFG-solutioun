#include <bits/stdc++.h>
#define MAX 26
using namespace std;

int main(){
    string s1,s2;
    int len;
    cin>>s1>>s2;
    int count1[MAX]={0};
    int count2[MAX]={0};
    int result=0;
    for(int i=0;i<s1.length();i++){
        count1[s1[i]-'a']++;
    }
      for(int i=0;i<s2.length();i++){
        count1[s2[i]-'a']--;
    }

    for(int i=0;i<MAX;i++){
     
        result+=abs(count1[i]);

    }
    cout<<result;

   

    return 0;
}