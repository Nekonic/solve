#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k,x;
    cin >> n >> k;
    vector<int> a;
    while (n--){
        cin >> x;
        a.push_back(x);
    }sort(a.begin(),a.end(),greater<>());
    cout << a[k-1];
}