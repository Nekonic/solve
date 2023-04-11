#include <bits/stdc++.h>
using namespace std;
unsigned long long ans=0,n,mxn=__UINT64_MAX__;
void bfs(unsigned long long i){
    if(i%n==0)mxn=min(mxn,i);
    if(i>(1111111111111111112))return;
    bfs(i*10);
    bfs(i*10+1);
}
int main(){
    cin >> n;
    bfs(1);
    if(mxn==__UINT64_MAX__)cout << 0;
    else cout << mxn;
}