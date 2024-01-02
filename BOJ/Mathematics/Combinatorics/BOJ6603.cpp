#include <bits/stdc++.h>
using namespace std;
int n,k,s[15],a[6];
bool used[15];
void f(int l){
    if(l==6){
        for(int i=0; i<6; i++){
            cout << a[i] << ' ';
        }cout << '\n';
        return;
    }
    for(int i=0; i<n; i++){
        if(!used[i]&&a[l-1]<=s[i]){
            a[l]=s[i];
            used[i]=1;
            f(l+1);
            used[i]=0;
        }
    }
}
int main(){
    while(1){
        cin >> n;
        if(n==0)return 0;
        for(int i=0; i<n; i++){
            cin >> s[i];
        }f(0);
        cout << '\n';
    }
}