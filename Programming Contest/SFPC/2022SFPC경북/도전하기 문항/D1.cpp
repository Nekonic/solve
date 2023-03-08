#include <iostream>
#include <vector>
using namespace std;
int main(){
    int w,b,n,m,cnt=1;
    vector<int> a;
    cin >> w >> b >> n;
    for(int i=0; i<n; i++){
        cin >> m;
        a.push_back(m);
    }for(int i=1; i<n; i++){
        if(a[i]+a[i-1]<=w){
            cnt++;
        }else cnt+=b;
    }cout << cnt+b;
}