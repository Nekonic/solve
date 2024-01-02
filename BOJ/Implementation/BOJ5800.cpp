#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,x,max,min,gap;
    double sum;
    cin >> n;
    for(int i=0; i<n; i++){
        sum=0,max=0,min=100,gap=0;
        vector<int> a;
        cin >> m;
        for(int j=0; j<m; j++){
            cin >> x;
            a.push_back(x);
            max=max<x?x:max;
            min=min>x?x:min;
            sum+=x;
        }sort(a.begin(),a.end());
        for(int j=1; j<m; j++){
            gap=gap<a[j]-a[j-1]?a[j]-a[j-1]:gap;
        }
        cout << "Class " << i+1 << '\n';
        cout<<"Max "<<max<<", Min "<<min<<", Largest gap "<<gap<<'\n';
    }
}