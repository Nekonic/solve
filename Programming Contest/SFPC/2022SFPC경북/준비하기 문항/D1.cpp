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
    x+=n/a[2];
    n%=a[2];

    x+=n/a[1];
    n%=a[1];

    x+=n/a[0];
    n%=a[0];

    if(n==0)cout << x;
    else cout << -1;
}