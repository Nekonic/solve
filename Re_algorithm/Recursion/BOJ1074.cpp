#include <bits/stdc++.h>
using namespace std;
int rec(int n,int r,int c){
    if(!n)return 0;
    int h=1<<(n-1);
    if(r<h&&c<h)return rec(n-1,r,c);
    if(r<h&&c>=h)return h*h+rec(n-1,r,c-h);
    if(r>=h&&c<h)return 2*h*h+rec(n-1,r-h,c);
    return 3*h*h+rec(n-1,r-h,c-h);
}
int main(){
    int n,r,c;
    cin >> n >> r >> c;
    cout << rec(n,r,c);
}