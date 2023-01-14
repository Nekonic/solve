#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m,x=0,vel;
    vector<int> a;
    cin >> n >> m;
    for(int i=0; i<3; i++){
        cin >> vel;
        a.push_back(vel);
    }sort(a.begin(),a.end());
    n-=m;
    for(int i=2; i>=0; i--){
        x+=n/a[i];
        n%=a[i];
        if(n==0)break;
    }
    if(n==0)cout << x;
    else cout << -1;
}