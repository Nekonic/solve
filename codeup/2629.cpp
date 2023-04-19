#include <bits/stdc++.h>
using namespace std;
struct x{
    double r;
    int p;
};
bool cmp(const x&a, const x&b){
    if(a.r<b.r)return true;
    return false;
}
int main(){
    vector<x> a;
    x t;
    int n,x,y,p;
    scanf("%d%d",&n,&p);
    for(int i=0; i<n; i++){
        scanf("%d%d%d",&x,&y,&t.p);
        t.r = sqrt(x*x+y*y);
        a.push_back(t);
    }sort(a.begin(),a.end(),cmp);
    for(int i=0; i<n; i++){
        p+=a[i].p;
        if(p>=1000000){
            printf("%.3lf",a[i].r);
            return 0;
        }
    }printf("-1");
}