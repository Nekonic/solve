#include <bits/stdc++.h>
using namespace std;
int n,k,cnt=0,a[21];
bool used[21];
void f(int l){
    if(l==k){
        cnt++;
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
    cin >> n >> k;
    f(0);
    cout << cnt;
}