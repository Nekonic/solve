#include <bits/stdc++.h>
using namespace std;
int n,c,d;
char a[21][21];
int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
            if(a[i][j]=='C')c++;
            else if(a[i][j]=='D')d++;
        }
    }for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i][j]=='.'&&d/2<c){
                a[i][j]='D';
                d++;
            }
        }
    }cout << n << '\n';
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << a[i][j];
        }cout << '\n';
    }
}