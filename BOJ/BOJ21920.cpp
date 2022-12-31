#include <iostream>
#include <vector>
using namespace std;
int gcd(int a, int b){
    return b?gcd(b,a%b):a;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    double sum=0;
    vector<int> a,b;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> m;
        a.push_back(m);
    }cin >> m;
    for(int i=0; i<n; i++){
        if(gcd(a[i],m)==1)b.push_back(a[i]);
    }for(auto i : b)sum+=i;
    cout << sum/b.size();
}