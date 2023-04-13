#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,s,y,a[7][2]={},sum=0;
    cin >> n >> k;
    while(n--){
        cin >> s >> y;
        a[y][s]++;
    }for(int i=1; i<=6; i++){
        for(int j=0; j<2; j++){
            if(a[i][j]!=0)sum++;
            while(a[i][j]>k){
                sum++;
                a[i][j]-=k;
            }
        }
    }cout << sum;
}