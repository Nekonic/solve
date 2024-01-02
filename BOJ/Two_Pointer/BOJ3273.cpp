#include <bits/stdc++.h>
using namespace std;
int n,x,cnt;
int main(){
    vector<int> v;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        v.emplace_back(x);
    }cin >> x;
    sort(v.begin(),v.end());
    int i=0,j=n-1;
    while(i<j){
        if(v[i]+v[j]==x){
            cnt++;
            i++;
        }else if(v[i]+v[j]>x)j--;
        else i++;
    }
    cout << cnt;
}