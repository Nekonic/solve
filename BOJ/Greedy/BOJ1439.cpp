#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    char c,d;
    int cnt0=0,cnt1=0,t;
    vector<bool> a,b;
    cin >> d;t=d;
    d=='0'?cnt0++:cnt1++;
    a.push_back(d-'0');
    while (cin >> c){
        if(c!=t&&c=='0'){
            t=c;
            cnt0++;
        }
        else if(c!=t&&c=='1'){
            t=c;
            cnt1++;
        }
        a.push_back(c-'0');
    }t=cnt0<cnt1?cnt0:cnt1;
    cout << t;
}