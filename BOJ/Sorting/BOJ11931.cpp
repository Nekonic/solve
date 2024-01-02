#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    bool a[2000001]={false};
    int n,m;
    cin >> n;
    while (n--){
        cin >> m;
        a[m+1000000]=true;
    }for(int i=2000000; i>=0; i--){
        if(a[i])cout << i-1000000 << '\n';
    }
}