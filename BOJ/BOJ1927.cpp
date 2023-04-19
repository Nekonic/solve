#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    priority_queue<int, vector<int>, greater<int>> q;
    int n,m;
    cin >> n;
    while(n--){
        cin >> m;
        if(m==0){
            if(!q.empty()){
                cout << q.top() << '\n';
                q.pop();
            }else cout << "0\n";
        }else q.push(m);
    }
}