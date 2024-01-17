#include <bits/stdc++.h>
using namespace std;
int x,cnt5,cnt7;
int main(){
    for(int i=0; i<3; i++){
        cin >> x;
        if(x==5)cnt5++;
        if(x==7)cnt7++;
    }if(cnt5==2&&cnt7==1)cout << "YES";
    else cout << "NO";
}