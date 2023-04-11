#include <bits/stdc++.h>
using namespace std;
char a[101][101],b[101][101];
int n,g1,g2;
void f(int i,int j,char x[101][101],char c){
    if(i<0||i>=n||j<0||j>=n||x[i][j]=='#'||x[i][j]!=c)return;
    x[i][j]='#';
    f(i+1,j,x,c);
    f(i-1,j,x,c);
    f(i,j+1,x,c);
    f(i,j-1,x,c);
}
int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
            if(a[i][j]=='G')b[i][j]='R';
            else b[i][j]=a[i][j];
        }
    }for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i][j]!='#')g1++;
            f(i,j,a,a[i][j]);
            if(b[i][j]!='#')g2++;
            f(i,j,b,b[i][j]);
        }
    }cout << g1 << ' ' << g2;
}