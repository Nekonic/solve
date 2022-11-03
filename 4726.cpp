#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k, a[100000], s=0;
    cin >> n >> k;
    vector<int> sum;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        s+=a[i];
        if(i>=k){
            sum.push_back(s);
            s-=a[i-k+1];
        }
    }
    sort(sum.begin(),sum.end(),greater<int>());
    cout << sum.front();
}