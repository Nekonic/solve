#include <bits/stdc++.h>
using namespace std;
const int INF = 1000001;
int n,x;
vector<int> a;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> x;
        if(a.empty()||a.back()<x)a.push_back(x);
        else{
            int s=0,e=a.size()-1;
            while(s<e){
                int m=(s+e)/2;
                if(a[m]>=x)e=m;
                else s=m+1;
            }a[e]=x;
        }
    }cout << a.size();
}