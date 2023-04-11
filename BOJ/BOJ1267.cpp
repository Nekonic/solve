#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t,y=0,m=0,yt,mt;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> t;
        yt=t/30;
        mt=t/60;
        y+=(yt)*10;
        m+=(mt)*15;
        y+=10;
        m+=15;
    }
    if(y<m)cout << "Y " << y;
    else if(y==m)cout << "Y " << "M " << y;
    else cout << "M " << m;
}