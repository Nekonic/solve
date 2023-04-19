#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,m;
    priority_queue<int,vector<int>,greater<int>> q;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> m;
            if(q.size()<n)q.push(m);
            if(q.top()<m){
                q.pop();
                q.push(m);
            }
        }
    }cout << q.top();
}