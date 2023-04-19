#include <bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int,vector<int>, greater<int>> q;
    int n,m,x=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> m;
        q.push(m);
    }while(q.size()>1){
        int a=q.top();
        q.pop();
        int b=q.top();
        q.pop();
        x+=a+b;
        q.push(a+b);
    }cout << x;
}