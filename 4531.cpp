#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, sum=0;
    vector<int> a;
    for(int i=0; i<5; i++){
        cin >> n;
        sum+=n;
        a.push_back(n);
    }
    cout << sum/5 << "\n";
    sort(a.begin(), a.end());
    cout << a[2];
}