#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
struct f{
    int val,idx,rank;
};
bool cmp(f a,f b){
    if (a.val!=b.val) return a.val < b.val;
    return a.idx<b.idx;
}
bool cmpindex(f a, f b) {
    return a.idx < b.idx;
}
int main(){
    int n;
    f x;
    scanf("%d",&n);
    vector<f> a;
    for(int i=0; i<n; i++){
        scanf("%d",&x.val);
        x.idx=i;
        a.push_back(x);
    }
    sort(a.begin(),a.end(),cmp);
    for (int i = 0; i < n; i++) {
        a[i].rank = i;
    }
    sort(a.begin(),a.end(),cmpindex);
    for(int i=0; i<n; i++){
        printf("%d ",a[i].rank);
    }
}