#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    double s,e,sumt=0, x;
    int summ=0;
    for(int i=0; i<5; i++){
        cin >> s >> e;
        x=e-s-1>4?4:(e-s-1<0?0:e-s-1);
        summ+=(x/0.5)*5000;
        sumt+=x;
    }
    if(sumt>=15)summ*=0.95;
    else if(sumt<=5)summ*=1.05;
    cout << summ;
}