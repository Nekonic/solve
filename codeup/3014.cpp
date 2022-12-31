#include <stdio.h>
#include <algorithm>
using namespace std;
#define MAX_DATA_VALUE 4500000
int cnt[MAX_DATA_VALUE];
int ans[MAX_DATA_VALUE];
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0; i < n; i++) cnt[a[i]]++;
    for(int i = 1; i <= MAX_DATA_VALUE; i++){
        cnt[i] += cnt[i-1];
    }
    for(int i = n-1; i >= 0; i--){
        int target = a[i];
        ans[cnt[target]-1] = target;
        cnt[target]--;
    }
    for(int i=0; i<n; i++){
        printf("%d ",ans[i]);
    }
}