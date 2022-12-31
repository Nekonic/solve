#include <iostream>
using namespace std;
int main(){
    long long a,b;
    while (scanf("%lld%lld",&a,&b)!=EOF&&(a!=0&&b!=0))
    {
        printf(a>b?"Yes\n":"No\n");
    }
}