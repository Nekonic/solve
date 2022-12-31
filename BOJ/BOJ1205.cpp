#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,p,ns,x;
    cin >> n >> ns >> p;
    vector<int> a;
    a.push_back(ns);
    for(int i=0; i<n; i++){
        cin >> x;
        a.push_back(x);
    }sort(a.begin(),a.end(),greater<>());
    auto it = find(a.begin(),a.end(),ns);
    if(it==a.end()||ns<=x&&n>=p){
        if(n==0)cout << 1;
        else cout << -1;
        return 0;
    }cout << it-a.begin()+1;
}