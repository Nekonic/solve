#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    vector<int> a;
    cin >> n;
    while(n--){
        cin >> m;
        a.push_back(m);
    }sort(a.begin(),a.end());
    for(auto i : a)cout << i << '\n';
}