#include <bits/stdc++.h>
using namespace std;
int main(){
    deque<int> a;
    vector<char> b;
    int n,sum;
    char c;
    bool flag=0;
    while (cin >> n){
        a.push_back(n);
        cin >> c;
        b.push_back(c);
    }b.pop_back();
    n=a.front();a.pop_front();
    for(auto i : b){
        if(i=='+'&&!flag){
            n+=a.front();
            a.pop_front();
        }else{
            flag=1;
            n-=a.front();
            a.pop_front();
        }
    }cout << n;
}