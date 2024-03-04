#include <bits/stdc++.h>
using namespace std;
int n,k,ans;
void f(int i,int d){
    if(i==k){
        ans=d;
        return;
    }
    if(i+25<=k){
       f(i+25,d+1);
    }
    if(i+15<=k){
        f(i+15,d+1);
    }
    if(i+10<=k){
        f(i+15,d+1);
    }
}
int main(){
    cin >> n;k=n*10;
    f(0,0);
    cout << ans;
}