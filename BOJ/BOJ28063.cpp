#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x,y,ans;
    cin >> n >> x >> y;
    if(n==1)ans=0;
    else if((x==1&&y==1)||(x==n&&y==n)||(x==1&&y==n)||(x==n&&y==1))ans=2;
    else if(x==1||y==1||x==n||y==n)ans=3;
    else ans=4;
    cout << ans;
}