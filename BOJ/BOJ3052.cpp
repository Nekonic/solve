#include <stdio.h>
#include <set>
using namespace std;
int main(){
    int n;
    set<int> arr;
    for(int i=0; i<10; i++){
        scanf("%d",&n);
        arr.insert(n%42);
    }
    printf("%d",arr.size());
}