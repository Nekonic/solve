#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    int n,m;
    queue<int> q,ans;
    cin >> n >> m;
    for(int i=1; i<=n; i++)q.push(i);
    while(!q.empty()){
        for(int i=0; i<m-1; i++){
            q.push(q.front());
            q.pop();
        }ans.push(q.front());
        q.pop();
    }cout << '<';
    while(ans.size()>1){
        cout << ans.front() << ", ";
        ans.pop();
    }
    cout << ans.front() << '>';
}