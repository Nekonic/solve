#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m,cnt=0;
    vector<int> a;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> m;
        a.push_back(m);
    }sort(a.begin(),a.end(),greater<int>());
    while (a[0]>0){
        cnt++;
        a[0]--;
        a[1]--;
        sort(a.begin(),a.end(),greater<int>());
    }if(cnt>1440)cout << -1;
    else cout << cnt;
}