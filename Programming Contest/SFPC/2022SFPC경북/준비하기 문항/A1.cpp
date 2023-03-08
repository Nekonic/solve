#include <iostream>
using namespace std;
int main(){
    string a,b;
    cin >> a >> b;
    for(int i=0; i<a.size(); i++){
        if(a[i]==b[0]){
            for(int j=0; j<b.size(); j++){
                if(a[i+j]!=b[j]){
                    cout << 'X';
                    return 0;
                }
            }
        }
    }cout << 'O';
}