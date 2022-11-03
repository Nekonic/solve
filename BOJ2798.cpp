#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using Integer128 = __int128;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m,a[101]={};
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    vector<int> sum;
    for(__int128 bit=0; bit<(__int128)(1<<n); bit++){
        int s=0,cnt=0;
        for(int i=0; i<n; i++){
            if(bit & (__int128)(1<<i)){
                s+=a[i];
                cnt++;
            }
            if(cnt==3)break;
        }
        if(s<=m&&cnt==3)sum.push_back(s);
        else if(s==m&&cnt==3){
            cout << s;
            return 0;
        }
    }
    sort(sum.begin(),sum.end());
    cout << sum.back();
    return 0;
}