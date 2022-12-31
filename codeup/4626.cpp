#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, x=0, sum=0,m;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> m;
        if(m==1){
            sum+=++x;
        }
        else x=0;
    }
    cout << sum;
}