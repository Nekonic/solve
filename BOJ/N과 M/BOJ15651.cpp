#include <bits/stdc++.h>
using namespace std;
int n,m,a[10];
bool used[10];
void f(int l){
    if(l==m){
        for(int i=0; i<m; i++)cout << a[i] <<' ';
        cout << '\n';
        return;
    }for(int i=1; i<=n; i++){
        a[l]=i;
        f(l+1);
    }
}
int main(){
    cin >> n >> m;
    f(0);
}