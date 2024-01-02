#include <bits/stdc++.h>
using namespace std;
struct cmp{
    bool operator()(int a, int b){
        if(abs(a) != abs(b)) return abs(a) > abs(b);
        return a > 0 && b < 0;
    }
};
int main(){
    priority_queue<int,vector<int>, cmp> q;
    int n,m;
    cin >> n;
    while(n--){
        cin >> m;
        if(m==0){
            if(q.empty())cout << "0\n";
            else{
                cout << q.top() << '\n';
                q.pop();
            }
        }else q.push(m);
    }
}