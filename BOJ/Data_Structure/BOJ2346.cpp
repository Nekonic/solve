#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    deque<pair<int,int>> d;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        d.emplace_back(x,i);
    }for(int i=0; i<n; i++){
        x=d.front().first;
        cout << d.front().second+1 << ' ';
        d.pop_front();
        if(x>0){
            for(int i=0; i<x-1; i++){
                d.emplace_back(d.front());
                d.pop_front();
            }
        }
        else{
            for(int i=x; i<0; i++){
                d.emplace_front(d.back());
                d.pop_back();
            }
        }
    }
}