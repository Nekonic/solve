#include <iostream>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m,sum=0;
    cin >> m >> n;
    int min=n;
    for(int i=m; i<=n; i++){
        if(sqrt(i)-int(sqrt(i))==0){
            sum+=i;
            if(i<min)min=i;
        }
    }
    if(sum==0)cout << -1;
    else cout << sum << "\n" << min;
}