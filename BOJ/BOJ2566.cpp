#include <iostream>
using namespace std;
int main(){
    int n=0;
    int x,y;
    for(int i=1; i<=9; i++){
        for(int j=1; j<=9; j++){
            int t;
            cin >> t;
            if(n<t){
                n=t;
                x=i;
                y=j;
            }
        }
    }cout << n << '\n' << x << ' '<< y;
}