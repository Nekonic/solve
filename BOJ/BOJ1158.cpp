#include <bits/stdc++.h>
using namespace std;
queue<int> q;
vector<int> a;
int main(){
    int n,m; 
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        q.push(n);
    }int i=1;
    while(!q.empty()){
        if(i==m){
            a.push_back(q.front());
            q.pop();
            i=0;
        }else{
            int x=q.front();
            q.pop();
            q.push(x);
        }i++;
    }
    cout << '<';
    for(int i=1; i<=n; i++){
        cout << i;
        if(i!=n)cout << ", ";
    }cout << '>';
}