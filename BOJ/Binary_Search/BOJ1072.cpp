#include <bits/stdc++.h>
using namespace std;
int main(){
    long long s,e,m,x,y,z;
    cin >> x >> y;
    z=(y*100/x);
    if(z>=99){
        cout << -1;
        return 0;
    }
    s=0;e=x;
    while(s<=e){
        m=(s+e)/2;
        if(z<(y+m)*100/(x+m))e=m-1;
        else s=m+1;
    }cout << s;
}