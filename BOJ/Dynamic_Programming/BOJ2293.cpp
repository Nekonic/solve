#include <bits/stdc++.h>
using namespace std;
int d[10001],n,x,k;
vector<int> v;
int main(){
    d[0]=1;
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> x;
        v.emplace_back(x);
    }for(int i=0; i<n; i++){
        for(int j=v[i]; j<=k; j++){
            d[j]+=d[j-v[i]];
        }
    }cout << d[k];
}