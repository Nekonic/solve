#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,k;
    double sum1=0,sum2=0,m;
    vector<double> a;
    scanf("%d%d",&n,&k);
    for(int i=0; i<n; i++){
        scanf("%lf",&m);
        a.push_back(m);
    }sort(a.begin(),a.end());
    for(int i=0; i<n; i++){
        if(i<=k-1){
            sum2+=a[k];
        }else if(i>=n-k){
            sum2+=a[n-k-1];
        }else {
            sum1+=a[i];
            sum2+=a[i];
        }
    }printf("%.2lf\n%.2lf",sum1/(n-k*2),sum2/n);
}