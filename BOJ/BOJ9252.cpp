#include <bits/stdc++.h>
using namespace std;
int lcs[1001][1001];
string a,b;
vector<char> v;
void f(int x,int y){
    if(x==0||y==0)return;
    else if(a[x-1]==b[y-1]){
        v.push_back(a[x-1]);
        f(x-1,y-1);
    }else if(lcs[x][y-1]>=lcs[x-1][y]){
        f(x,y-1);
    }else f(x-1,y);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> a >> b;
    for(int i=1; i<=a.size(); i++){
        for(int j=1; j<=b.size(); j++){
            if(a[i-1]==b[j-1])lcs[i][j]=lcs[i-1][j-1]+1;
            else lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
        }
    }cout << lcs[a.size()][b.size()] << '\n';
    f(a.size(),b.size());
    reverse(v.begin(),v.end());
    for(char i : v)cout << i;
}