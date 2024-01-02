#include <bits/stdc++.h>
using namespace std;
int n;
vector<pair<int,int>> f;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n;
    for(int i=0; i<n; i++){
        int sm,sd,em,ed;
        cin >> sm >> sd >> em >> ed;
        f.push_back({sm*100+sd,em*100+ed});
    }int t=301,ans=0;
    sort(f.begin(),f.end());
    while(t<1200){
        int next=t;
        for(int i=0; i<n; i++){
            if(f[i].first<=t&&f[i].second>next)next=f[i].second;
        }if(next==t){
            cout << 0;
            return 0;
        }ans++;
        t=next;
    }cout << ans;
}