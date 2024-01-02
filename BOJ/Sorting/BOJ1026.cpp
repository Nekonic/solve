#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,s=0;
    vector<int> a,b;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> m;
        a.push_back(m);
    }sort(a.begin(),a.end());
    for(int i=0; i<n; i++){
        cin >> m;
        b.push_back(m);
    }sort(b.begin(),b.end(),greater<>());
    for(int i=0; i<n; i++){
        s+=(a[i]*b[i]);
    }cout << s;
}