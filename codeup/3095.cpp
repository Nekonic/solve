#include <bits/stdc++.h>
using namespace std;
int n,a[10000011],x1,x2,y;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x1 >> x2 >> y;
        a[x1]++,a[x2+1]--;
    }for(int i=1; i<10000011; i++)a[i]+=a[i-1];
    cout << *max_element(a,a+10000010);
}