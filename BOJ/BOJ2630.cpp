#include <bits/stdc++.h>
using namespace std;
int n,cntW=0,cntB=0;
int a[129][129];
void f(int x,int y,int z){
    if(z==0)return;
    int s=0;
    for(int i=x; i<x+z; i++){
        for(int j=y; j<y+z; j++){
            s+=a[i][j];
        }
    }if(s==z*z){
        cntB++;
    }else if(s==0){
        cntW++;
    }else{
        z/=2;
        f(x+z,y+z,z);
        f(x+z,y,z);
        f(x,y+z,z);
        f(x,y,z);
    }
}
int main(){
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
        }
    }f(1,1,n);
    cout << cntW << '\n' << cntB;
}