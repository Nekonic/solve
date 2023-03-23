#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,x,maxm=0,sum=0;
    vector<int> a;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> m;
        a.push_back(m);
        sum+=m;
    }cin >> x;
    sort(a.begin(),a.end());
    if(sum<=x){
        cout << a[n-1];
        return 0;
    }
    int mid=a[n/2];
    while (1){
        sum=0;
        for(int i=0; i<n; i++){
            if(mid>a[i])sum+=a[i];
            else sum+=mid;
        }if(sum==x||maxm==mid){
            maxm=mid;
            break;
        }if(sum<x){
            maxm=max(maxm,mid);
            mid++;
        }else mid--;
    }
    cout << mid;
}