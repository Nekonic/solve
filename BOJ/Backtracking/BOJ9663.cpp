#include <bits/stdc++.h>
using namespace std;
int cnt=0,a[15][15],n;
bool x[30],xy[30],yx[30];
void f(int h){
    if(h==n){
        cnt++;
        return;
    }for(int i=0; i<n; i++){
        if(x[i]||xy[i+h]||yx[h-i+n-1])continue;
        x[i]=1;
        xy[i+h]=1;
        yx[h-i+n-1]=1;
        f(h+1);
        x[i]=0;
        xy[i+h]=0;
        yx[h-i+n-1]=0;
    }
}
int main(){
    cin >> n;
    f(0);
    cout << cnt;
}