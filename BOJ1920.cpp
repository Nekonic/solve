#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin >> n;
    vector<int> x;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        x.push_back(a);
    }
    sort(x.begin(), x.end());
    cin >> m;
    for(int i=0; i<m; i++){
        int a;
        cin >> a;
        cout << binary_search(x.begin(), x.end(), a) << "\n";
    }
}