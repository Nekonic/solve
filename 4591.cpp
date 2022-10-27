#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a,max=0,idx=0;
    for(int i=1; i<=9; i++){
        cin >> a;
        if(a>max){
            max = a;
            idx = i;
        }
    }
    cout << max << "\n" << idx;
}