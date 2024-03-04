#include <bits/stdc++.h>
using namespace std;
int n,m,x;
bool t[1001][1001];
void f(int x1,int y1,int x2,int y2){
    for(int i=x1;i<=x2;i++){
        for(int j=y1;j<=y2;j++)t[i][j]=!t[i][j];
    }
}
int main(){
    cin >> n >> m;
    cin >> x;
    while(x--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        f(a-1,b-1,c-1,d-1);
    }for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << t[i][j] << ' ';
        }cout << '\n';
    }
}