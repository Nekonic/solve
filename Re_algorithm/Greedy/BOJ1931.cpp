#include "bits/stdc++.h"
using namespace std;
int n,a,b,l=-1,ans;
vector<pair<int,int>> v;
int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        v.emplace_back(pair<int,int>{a, b});
    }
    sort(v.begin(),v.end(),[&](pair<int,int>&a,pair<int,int>&b) { if(a.second==b.second)return a.first < b.first; return a.second < b.second; });
    for(auto&i:v){
        if(l>i.first)continue;
        l=i.second;
        ans++;
    }cout << ans;
}