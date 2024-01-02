#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int n,m,x,a[10];
void f(int l){
    if(l==m){
        for(int i=0; i<m; i++)cout << a[i] << ' ';
        cout << '\n';
        return;
    }for(int i=0; i<n; i++){
        a[l]=v[i];
        f(l+1);
    }
}
int main(){
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> x;
        v.push_back(x);
    }sort(v.begin(),v.end());
    f(0);
}