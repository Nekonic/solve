#include <bits/stdc++.h>
using namespace std;
int main(){
    int k,x,r=0;
    vector<int> w;
    cin >> k;
    for(int i=0; i<k; i++){
        cin >> x;
        w.push_back(x);
    }sort(w.begin(),w.end());
    for(int i=1; i<=k; i++){
        r=max(r,w[k-i]*i);
    }cout << r;
}