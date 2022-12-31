#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int max=0,n,y=0,x=0;
    for(int i=1; i<=9; i++){
        for(int j=1; j<=9; j++){
            cin >> n;
            if(n>max){
                max=n;
                y=i;
                x=j;
            }
        }
    }
    cout << max << "\n" << y << " " << x;
}