#include <bits/stdc++.h>
using namespace std;
vector<int> a;
int n,m,x,b[10];
bool used[10];
void f(int l){
    if(l==m){
        for(int i=0; i<m; i++)cout << b[i] << ' ';
        cout << '\n';
        return;
    }for(int i=0; i<n; i++){
        if(!used[i]&&b[l-1]<=a[i]){
            used[i]=1;
            b[l]=a[i];
            f(l+1);
            used[i]=0;
        }
    }
}
int main(){
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> x;
        a.push_back(x);
    }sort(a.begin(),a.end());
    f(0);
}