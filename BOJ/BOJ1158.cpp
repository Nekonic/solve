#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,cnt=1;
    cin >> n >> m;
    list<int> ls;
    vector<int> y;
    for(int i=1; i<=n; i++)ls.push_back(i);
    auto it = ls.begin();
    while(!ls.empty()){
        if(cnt==m){
            cnt=1;
            y.push_back(*it);
            it = ls.erase(it);
            if(it==ls.end())it=ls.begin();
        }else{
            cnt++;
            if(*it==ls.back())it=ls.begin();
            else it++;
        }
    }cout << '<';
    for(int i=0; i<n-1; i++)cout << y[i] << ", ";
    cout << y[n-1] << '>';
}