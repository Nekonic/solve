#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,m,x,sum=0;
    vector<int> a;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        a.push_back(x);
    }for(int i=1; i<n; i++){
        if(a[i-1]<a[i])sum+=(a[i]-a[i-1])*2;
        else if(a[i-1]>a[i])sum-=(a[i-1]-a[i])/2;
    }cout << sum;
}