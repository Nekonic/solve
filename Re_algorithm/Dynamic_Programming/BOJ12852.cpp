#include "bits/stdc++.h"
using namespace std;
int d[1000001],n,path[1000001];
int main(){
    cin >> n;
    for(int i=2; i<=n; i++){
        int m=d[i-1]+1;
        path[i]=i-1;
        if(i%2==0&&d[i/2]+1<m){
            m=d[i/2]+1;
            path[i]=i/2;
        }if(i%3==0&&d[i/3]+1<m){
            m=d[i/3]+1;
            path[i]=i/3;
        }d[i]=m;
    }cout << d[n] << '\n';
    while(1){
        cout << n << ' ';
        if(n==1)break;
        n=path[n];
    }
}