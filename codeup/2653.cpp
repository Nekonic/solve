#include <bits/stdc++.h>
using namespace std;
int cnt=0,n,k;
bool a[31];
void f(int cur, int sum){
    if(cur==n){
        cnt++;
        return;
    }
    if(cur==0||!a[cur-1]){
        a[cur]=1;
        f(cur+1,sum+1);
        a[cur]=0;
    }
    f(cur+1,sum);
}
int main(){
    cin >> n >> k;
    f(0,0);
    cout << cnt;
}