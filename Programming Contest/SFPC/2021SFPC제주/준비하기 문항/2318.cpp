#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,m;
    vector<int> a,b;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> m;
        a.push_back(m);
    }cin >> m;
    for(int i=0; i<n; i++){
        if(a[i]<m)cout << a[i] << ' ';
    }for(int i=0; i<n; i++){
        if(a[i]==m)cout << a[i] << ' ';
    }for(int i=0; i<n; i++){
        if(a[i]>m)cout << a[i] << ' ';
    }
}