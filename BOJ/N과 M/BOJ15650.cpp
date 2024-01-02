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
        if(!used[i]&&i>a[l-1]){
            a[l]=i;
            used[i]=1;
            f(l+1);
            used[i]=0;
        }
    }
}
int main(){
    cin >> n >> m;
    f(0);
}