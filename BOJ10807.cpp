#include <iostream>
#include <vector>
using namespace std;
int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(0);
    int n,v,cnt=0;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cin >> v;
    for(int i=0; i<n; i++){
        if(arr[i]==v)cnt++;
    }
    cout << cnt;
}