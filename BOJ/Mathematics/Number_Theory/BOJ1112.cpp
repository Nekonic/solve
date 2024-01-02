#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int b,q,r,n;
    bool neg=false;
    vector<int> a;
    cin >> n >> b;
    if(abs(n)<=1){
        cout << n;
        return 0;
    }else if(!(b<0||n>=0&&b>=0)){
        n*=-1;
        neg=true;
    }
    while(n){
        q=n/b;
        r=n%b;
        if(r<0){
            q++;
            r-=b;
        }a.push_back(r);
        n=q;
    }if(neg){
        cout << '-';
    }for(int i=a.size()-1; i>=0; i--){
        cout << a[i];
    }
}