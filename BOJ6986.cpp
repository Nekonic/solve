#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n,m;
    double x,sum1=0,sum2=0;
    vector<double> a;
    scanf("%d%d",&n,&m);
    for(int i=0; i<n; i++){
        scanf("%lf",&x);
        a.push_back(x);
    }sort(a.begin(),a.end());
    for(int i=0; i<m; i++){
        a[i]=a[m];
    }for(int i=n-1; i>n-m-1; i--){
        a[i]=a[n-m-1];
    }
    while (a.size()!=0){
        if(a.size()>m&&a.size()<=n-m)sum1+=a.back();
        sum2+=a.back();
        a.pop_back();
    }
    printf("%.2lf\n%.2lf", sum1/(n-m*2)+0.00000001, sum2/n+0.00000001);
}