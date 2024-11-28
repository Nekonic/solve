#include "bits/stdc++.h"
using namespace std;
int n,a,ans;
vector<int> v;
int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        v.emplace_back(a);
    }sort(v.begin(),v.end());
    for(int i=1; i<=n; i++){
        ans=max(v[n-i]*i,ans);
    }cout << ans;
}