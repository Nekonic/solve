#include "bits/stdc++.h"
using namespace std;
int n,k,x,cnt;
vector<int> v;
int main(){
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> x;
        v.emplace_back(x);
    }
    sort(v.begin(),v.end(),greater<>());
    for(int&i:v){
        if(!k)break;
        cnt+=k/i;
        k%=i;
    }cout << cnt;
}