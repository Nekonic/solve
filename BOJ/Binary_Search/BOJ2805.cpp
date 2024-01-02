#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long n,m,x,sum,tmax=0;
    vector<int> a;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> x;
        a.push_back(x);
    }sort(a.begin(),a.end());
    long low=0,high=a[n-1],mid;
    while(low<=high){
        sum=0;
        mid=(low+high)/2;
        for(int i=0; i<n; i++){
            if(a[i]>mid)sum+=a[i]-mid;
        }if(sum>=m){
            tmax=max(tmax,mid);
            low=mid+1;
        }else high=mid-1;
    }cout << tmax;
}