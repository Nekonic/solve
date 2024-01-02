#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m,x,cnt=0;
    cin >> n;
    cin >> x;
    vector<short> a(1);
    for(int i=0; i<n-1; i++){
        cin >> m;
        a.push_back(m);
    }sort(a.begin(),a.end(),greater<>());
    while (x<=a[0]){
        x++;
        a[0]--;
        cnt++;
        sort(a.begin(),a.end(),greater<>());
    }cout << cnt;
}