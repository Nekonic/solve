#include <bits/stdc++.h>
using namespace std;
string s;
int n,m,cnt,j;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n >> m >> s;
    for(int i=0; i<m; i++){
        if(s[i]=='O')continue;
        while(s[i+1]=='O'&&s[i+2]=='I'){
            j++;
            if(j==n){
                cnt++;
                j--;
            }i+=2;
        }j=0;
    }cout << cnt;
}