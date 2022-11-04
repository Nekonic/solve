#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k,m,sum=0;
    cin >> n >> k;
    vector<int> a;
    for(int i=0; i<n; i++){
        cin >> m;
        a.push_back(m);
    }sort(a.begin(),a.end(),greater<int>());
    for(int i=0; i<k; i++){
        sum+=a[i];
    }cout << sum-k*(k-1)/2;
}