#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int n,m,a[10],x;
bool used[10];
void f(int l){
    if(l==m){
        for(int i=0; i<m; i++)cout << a[i] << ' ';
        cout << '\n';
        return;
    }int temp=0;
    for(int i=0; i<n; i++){
        if(!used[i]&&temp!=v[i]&&a[l-1]<=v[i]){
            used[i]=1;
            a[l]=v[i];
            temp=a[l];
            f(l+1);
            used[i]=0;
        }
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