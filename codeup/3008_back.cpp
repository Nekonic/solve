#include <bits/stdc++.h>
using namespace std;
int a[9],b[7];
bool used[9],flag;
void f(int n,int sum){
    if(flag)return;
    if(n==7){
        if(sum==100){
            sort(b,b+7);
            for(int i=0; i<7; i++){
                cout << b[i] << '\n';
            }flag=1;
        }return;
    }for(int i=0; i<9; i++){
        if(!used[i]){
            used[i]=1;
            b[n]=a[i];
            f(n+1,sum+a[i]);
            used[i]=0;
        }
    }
}
int main(){
    for(int i=0; i<9; i++)cin >> a[i];
    f(0,0);
}