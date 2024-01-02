#include <bits/stdc++.h>
using namespace std;
int lcs[1001][1001];
bool flag;
int main(){
    string s1,s2;
    cin >> s1 >> s2;
    for(int i=1; i<=s1.size(); i++){
        for(int j=1; j<=s2.size(); j++){
            if(s1[i-1]==s2[j-1])lcs[i][j]=lcs[i-1][j-1]+1;
            else lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
        }
    }cout << lcs[s1.size()][s2.size()];
}