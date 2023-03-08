#include <iostream>
using namespace std;
int main(){
    int n,m,cnt=0;
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        if(i%m==0||m%i==0)cnt++;
    }cout << cnt;
}