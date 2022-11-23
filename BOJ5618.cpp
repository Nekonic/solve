#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,x,y,z=0,min;
    cin >> n;
    if(n<3){
        cin >> x >> y;
    }else cin >> x >> y >> z;
    for(int i=1; i<=x; i++){
        if(x%i==0&&y%i==0&&z%i==0)cout << i << '\n';
    }
}