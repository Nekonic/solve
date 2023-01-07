#include <iostream>
using namespace std;
int main(){
    bool map[101]={0};
    int n,a,b,x,cntx=0,cnto=0;
    cin >> n >> a >> b;
    while(a--){
        cin >> x;
        map[x]=true;
    }while (b--){
        cin >> x;
        if(map[x])cnto++;
        map[x]=true;
    }for(int i=1; i<=n; i++){
        if(!map[i])cntx++;
    }cout << cntx << ' ' << cnto;
}