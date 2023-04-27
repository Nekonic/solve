#include <bits/stdc++.h>
using namespace std;
int lcs[4001][4001],ans;
int main(){
    string a,b;
    cin >> a >> b;
    for(int i=1; i<=a.size(); i++){
        for(int j=1; j<=b.size(); j++){
            if(a[i-1]!=b[j-1])continue;
            lcs[i][j]=lcs[i-1][j-1]+1;
            ans=max(ans,lcs[i][j]);
        }
    }cout << ans;
}