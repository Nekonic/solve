#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,a[4]={0,0,0,0},m;
    string s[4]={"STRAWBERRY","BANANA","LIME","PLUM"},str;
    cin >> n;
    while (n--)
    {
        cin >> str >> m;
        for(int i=0; i<4; i++){
            if(s[i]==str){
                a[i]+=m;
            }
        }
    }for(int i=0; i<4; i++){
        if(a[i]==5){
            cout << "YES";
            return 0;
        }
    }cout << "NO";
}