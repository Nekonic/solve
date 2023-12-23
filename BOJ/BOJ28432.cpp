#include <bits/stdc++.h>
using namespace std;
vector<string> v1,v2;
unordered_map<string,bool> v;
int n,m,idx;
bool solve(string&i){
    char c1,c2;
    if(idx>0)c1=v1[idx-1].back();
    if(idx<n-1)c2=v1[idx+1][0];
    if(v[i])return 0;
    if(idx==0){
        if(c2==i.back())return 1;
    }else if(idx<n-1){
        if(c1==i[0]&&c2==i.back())return 1;
    }else{
        if(c1==i[0])return 1;
    }
    return 0;
}
int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        v1.push_back(s);
        v[s]=1;
    }for(int i=0; i<n; i++){
        if(v1[i][0]=='?'){
            idx=i;
            break;
        }
    }cin >> m;
    for(int i=0; i<m; i++){
        string s;
        cin >> s;
        v2.push_back(s);
    }if(n==1)cout << v2[0];
    else for(auto&i:v2){
        if(solve(i)){
            cout << i;
            return 0;
        }
    }
}