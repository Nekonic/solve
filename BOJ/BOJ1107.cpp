#include <bits/stdc++.h>
using namespace std;
int n,m,x,ms=500000;
bool num[10];
void f(int l,int sum){
    if(l==n){
        ms=min(ms,sum);
        return;
    }if(l>n){
        f(l-1,sum+1);
        return;
    }for(int i=0; i<10; i++){
        f(l*10)
    }
}
int main(){
    cin >> n >> m;
    if(m!=0){
        while(m--){
            cin >> x;
            num[x]=1;
        }
    }f(100,0);
}