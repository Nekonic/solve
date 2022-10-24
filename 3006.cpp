#include <stdio.h>
#include <math.h>
#include <vector>
using namespace std;
void squareroot(int num){
    int lo = 0, hi = num;
    while(lo <= hi) {
        int mid = floor((lo + hi) / 2);
    if(mid * mid > num) hi = mid - 1; else lo = mid + 1; } return hi; 
}
int main(){
    int n;
    scanf("%d",&n);
    vector<int> a(n);
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
        for(int j=a[i]; j>=0; j--){
            long double root = squareroot(j);
            if(a[i]-root*root==0){
                printf("%Lf\n",root);
                break;
            }
        }
    }   
    long double root2 = squareroot(2);
    printf("%.15Lf",(long double)root2);
}