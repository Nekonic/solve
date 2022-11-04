#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m,x,y;
    cin >> n >> m;
    long long sum[100000]={};
    for(int i=1; i<=n; i++){
        cin >> x;
        if(i==1)sum[i]=x;
        else sum[i]=sum[i-1]+x;
    }for(int i=0; i<m; i++){
        cin >> x >> y;
        cout << sum[y]-sum[x-1] << '\n';
    }
}