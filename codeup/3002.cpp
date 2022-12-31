#include <stdio.h>
int binarySearch(int A[], int low, int high, int target){
    while(low <= high){
        int mid = (low + high) / 2;
        if(A[mid] == target) return mid;
        if(A[mid] > target) high = mid - 1;
        else low = mid + 1;
    }
    return -1;
}
int main(){
    int n,i,m;
    scanf("%d",&n);
    int a[n+1];
    for(i=1; i<=n; i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    int x;
    for(i=1; i<=m; i++){
        scanf("%d",&x);
        printf("%d ",binarySearch(a,1,n,x));
    }
    return 0;
}