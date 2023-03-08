#include <iostream>
using namespace std;
int main(){
    char c,str1[5]="ATCG",str2[5]="UAGC";
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> c;
        for(int i=0; i<4; i++){
            if(str1[i]==c){
                cout << str2[i];
                break;
            }
        }
    }
}