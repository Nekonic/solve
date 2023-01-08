#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,l,cnt1=0,cnt2=0,ma1=0,ma2=0;
    cin >> n;
    cin >> m;
    for(int i=1; i<n; i++){
        cin >> l;
        if(l<=m)cnt1++;
        else cnt1=0;
        if(l>=m)cnt2++;
        else cnt2=0;
        m=l;
        ma1=max(ma1,cnt1);
        ma2=max(ma2,cnt2);
    }cout << max(ma1,ma2)+1;
}