#include <iostream>
using namespace std;
int main(){
    int n,m,x,sum=0;
    cin >> n;
    for(int i=1; i<=n; i++){
        x=i;
        sum=i;
        while(x){
            sum+=x%10;
            x/=10;
        }if(sum==n){
            cout << i;
            return 0;
        }
    }cout << 0;
}