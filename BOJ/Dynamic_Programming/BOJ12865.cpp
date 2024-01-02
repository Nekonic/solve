#include <bits/stdc++.h>
using namespace std;
int n,mx=0,w[100001],v[100001],k;
bool used[100001];
void f(int l,int sum){
    if(l>k)return;
    mx=max(sum,mx);
    for(int i=0; i<n; i++){
        if(!used[i]){
            used[i]=1;
            f(l+w[i],sum+v[i]);
            used[i]=0;
        }
    }
}
int main(){
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> w[i] >> v[i];
    }f(0,0);
    cout << mx;
}