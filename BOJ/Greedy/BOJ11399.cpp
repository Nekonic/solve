#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,sum=0;
    cin >> n;
    vector<int> a;
    for(int i=0; i<n; i++){
        cin >> m;
        a.push_back(m);
    }sort(a.begin(),a.end());
    sum+=a[0];
    for(int i=1; i<n; i++){
        a[i]+=a[i-1];
        sum+=a[i];
    }cout << sum;
}