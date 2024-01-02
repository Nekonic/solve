#include <bits/stdc++.h>
using namespace std;
long long n,s,cnt;
int main(){
    cin >> n;
    vector<pair<long long,long long>> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i].first >> a[i].second;
        s+=a[i].second;
    }s++;
    sort(a.begin(),a.end());
    for(int i=0; i<n; i++){
        cnt+=a[i].second;
        if(cnt>=s/2){
            cout << a[i].first;
            return 0;
        }
    }
}