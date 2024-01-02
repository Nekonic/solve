#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,t,s=0;
    cin >> n;
    for(int i=1; i<=n; i++){
        t=i;
        while(t){
            if((t%10==3)||(t%10==6)||(t%10==9))s++;
            t/=10;
        }
    }cout << s;
}