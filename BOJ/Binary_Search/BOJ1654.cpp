#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n,m,x,maxl=0;
    vector<int> a;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> x;
        a.push_back(x);
    }sort(a.begin(),a.end());
    long long op=1,ed=a[n-1],mid;
    while (op<=ed){
        int sum=0;
        mid=(op+ed)/2;
        for(int i=0; i<n; i++){
            sum+=a[i]/mid;
        }if(sum>=m){
            maxl=max(maxl,mid);
            op=mid+1;
        }else ed=mid-1;
    }cout << maxl;
}