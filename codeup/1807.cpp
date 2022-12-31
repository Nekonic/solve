#include <iostream>
using namespace std;
struct C
{
    long long num,loop;
};
int memo[100000000]={};
long long Collatz(long long n){
    if(n==1)return 1;
    if(n<100000000){
        if(memo[n]!=0)return memo[n];
        else if(n%2!=0)return memo[n]=1+Collatz(3*n+1);
        else return memo[n]=1+Collatz(n/2);
    }
    else {
        if(n%2!=0)return 1+Collatz(3*n+1);
        else return 1+Collatz(n/2);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    C x;
    long long n,m,l=0;
    cin >> n >> m;
    x.num=n;
    x.loop=Collatz(n);
    for(int i=n+1; i<=m; i++){
        l=Collatz(i);
        if(x.loop<l){
            x.num=i;
            x.loop=l;
        }
    }
    cout << x.num << " " << x.loop;
}