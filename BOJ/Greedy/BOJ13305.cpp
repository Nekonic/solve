#include <bits/stdc++.h>
using namespace std;
unsigned long long n,m,x,ans,t;
vector<unsigned long long> a,b;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n;
    for(int i=1; i<n; i++){
        cin >> x;
        b.push_back(x);
    }for(int i=0; i<n; i++){
        cin >> x;
        a.push_back(x);
    }t=a[0];
    ans=t*b[0];
    for(int i=1; i<n; i++){
        if(t<a[i])ans+=t*b[i];
        else{
            ans+=a[i]*b[i];
            t=a[i];
        }
    }cout << ans;
}