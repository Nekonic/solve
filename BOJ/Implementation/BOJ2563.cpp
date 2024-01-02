#include <bits/stdc++.h>
using namespace std;
int a[101][101],n,cnt;
void check(int x,int y){
    for(int i=x; i<x+10; i++){
        for(int j=y; j<y+10; j++){
            a[i][j]++;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n;
    while(n--){
        int i,j;
        cin >> i >> j;
        check(i,j);
    }for(int i=0; i<101; i++){
        for(int j=0; j<101; j++){
            if(a[i][j])cnt++;
        }
    }cout << cnt;
}