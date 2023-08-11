#include <bits/stdc++.h>
using namespace std;
int n,a[1001],sum;
bool flag=1;
int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
        sum+=a[i];
    }if(sum&1){
        sort(a,a+n);
        for(int i=0; i<n; i++){
            if(a[i]&1){
                sum-=a[i];
                break;
            }
        }
    }cout << sum;
}