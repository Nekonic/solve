#include <bits/stdc++.h>
using namespace std;
long long p[1001]={0, 1, 1, 1, 2, 2, 3, 4, 5, 7, 9},n,tc;
int main(){
    cin >> tc;
    while(tc--){
        cin >> n;
        if(p[n]==0)for(int i=4; i<=n; i++){
            p[i]=p[i-2]+p[i-3];
        }cout << p[n] << '\n';
    }
}