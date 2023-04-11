#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[21][2];
    for(int i=1; i<21; i++){
        a[i][0]=i;
        a[i][1]=i;
    }
    int n,m,t;
    for(int i=1; i<20; i++){
        cin >> n >> m;
        while(n<m){
            t=a[n][1];
            a[n][1]=a[m][1];
            a[m][1]=t;
            n++;
            m--;
        }
    }for(int i=1; i<21; i++){
        cout << a[i][1] << ' ';
    }
}