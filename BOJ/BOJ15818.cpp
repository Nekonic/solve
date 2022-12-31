#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n,m,a,x=1;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> a;
        x=((a%m)*(x%m))%m;
    }
    cout << x;
}