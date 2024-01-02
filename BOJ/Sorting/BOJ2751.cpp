#include <stdio.h>
#include <set>
#include <algorithm>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    set<int> s;
    for(int i=0; i<n; i++){
        int a;
        scanf("%d",&a);
        s.insert(a);
    }
    for (auto i : s) printf("%d\n",i);
}