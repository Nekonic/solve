#include <bits/stdc++.h>
using namespace std;
bool cmp(const pair<int,int>&a,const pair<int,int>&b){
    if(a.second<b.second)return true;
    else if(a.second==b.second){
        if(a.first<b.first)return true;
    }
    return false;
}
int main(){
    int n,s,e,x=0,cnt=0;
    vector<pair<int,int>> t;
    cin >> n;
    while(n--){
        cin >> s >> e;
        t.push_back({s,e});
    }sort(t.begin(),t.end(),cmp);
    for(auto i : t){
        if(x>i.first)continue;
        x=i.second;
        cnt++;
    }cout << cnt;
}