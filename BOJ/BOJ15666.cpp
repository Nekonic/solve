#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int n,m,a[10],x;
void f(int l,int st){
    if(l==m){
        for(int i=0; i<m; i++)cout << a[i] << ' ';
        cout << '\n';
        return;
    }int temp=0;
    for(int i=st; i<n; i++){
        if(temp!=v[i]){
            a[l]=v[i];
            temp=a[l];
            f(l+1,i);
        }
    }
}
int main(){
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> x;
        v.push_back(x);
    }sort(v.begin(),v.end());
    f(0,0);
}