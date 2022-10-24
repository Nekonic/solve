#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n,i,x;
    scanf("%d",&n);
    vector<int> a(n+1);
    for(i=1; i<=n; i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    vector<int>::iterator item=find(a.begin(), a.end(),x);
    printf("%ld",item!=a.end()?item-a.begin():-1);
}