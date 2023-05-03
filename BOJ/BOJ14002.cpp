#include <bits/stdc++.h>
using namespace std;
int n,a[1001],pre[1001];
vector<int> path,l(1001,1);
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n;
    for(int i=1; i<=n; i++)cin >> a[i];
    for(int i=1; i<=n; i++){
        for(int j=1; j<i; j++){
            if(a[i]>a[j]&&l[i]<l[j]+1){
                l[i]=l[j]+1;
                pre[i]=j;
            }
        }
    }int idx=1,ll=l[1];
    for(int i=1; i<=n; i++){
        if(ll<l[i]){
            idx=i;
            ll=l[i];
        }
    }while(idx){
        path.push_back(a[idx]);
        idx=pre[idx];
    }cout << path.size() << '\n';
    reverse(path.begin(),path.end());
    for(int i:path)cout << i << ' ';
}