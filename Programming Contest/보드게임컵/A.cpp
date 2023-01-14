#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m,sum=0;
    cin >> n;
    vector<int> a;
    for(int i=0; i<n; i++){
        cin >> m;
        a.push_back(m);
    }sort(a.begin(),a.end());
    sum+=a[0];
    for(int i=1; i<n; i++){
        if(a[i-1]==a[i]-1)continue;
        sum+=a[i];
    }cout << sum;
}