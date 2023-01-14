#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m,x=0,vel;
    int a[]={500,100,50,10};
    cin >> n >> m;
    n-=m;
    for(int i=0; i<4; i++){
        x+=n/a[i];
        n%=a[i];
        if(n==0)break;
    }
    cout << x;
}