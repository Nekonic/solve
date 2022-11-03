#include <iostream>
using namespace std;
struct C
{
    int num,loop;
};
int l=0;
void Collatz(int n){
    l++;
    if(n==1)return;
    if(n%2==0)return Collatz(n/2);
    return Collatz(3*n+1);
}
int main(){
    C x;
    int n,m;
    cin >> n >> m;
    Collatz(n);
    x.num=n;x.loop=l;
    for(int i=n+1; i<=m; i++){
        l=0;
        Collatz(i);
        if(x.loop<l){
            x.num=i;
            x.loop=l;
        }
    }
    cout << x.num << " " << x.loop;
}