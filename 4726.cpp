#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> sum(n, 0), arr(n, 0);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i; j<i+k; j++){
            sum[i]+=arr[j];
        }
    }
    int max=sum[0];
    for(int i = 1; i < n; i++){
        if(max<sum[i])max=sum[i];
    }
    cout << max;
}