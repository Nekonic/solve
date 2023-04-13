#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a;
    vector<char> b;
    int n;
    char c;
    while (cin >> n){
        a.push_back(n);
        cin >> c;
        b.push_back(c);
    }b.pop_back();
    sort(a.begin(),a.end(),greater<>());
    sort(b.begin(),b.end());
    n=a.back();a.pop_back();
    for(auto i : b){
        cout << n << '\n';
        if(i=='+')n+=a.back();
        else n-=a.back();
        a.pop_back();
    }cout << n;
}