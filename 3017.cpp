#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
struct x{
    int m;
    int i;
    int idx;
};
bool cmp(const x& a,const x& b){
    if(a.m > b.m)return true;
    else if (a.m == b.m){
        if (a.i > b.i)return true;
        else if (a.i == b.i){
            if(a.idx < b.idx)return true;
        }
    }
    return false;
}
int main(){
    int n;
    scanf("%d",&n);
    x s1;
    vector<x> data1;
    for(int i=0; i<n; i++){
        scanf("%d%d",&s1.m,&s1.i);s1.idx=i+1;
        data1.push_back(s1);
    }
    sort(data1.begin(),data1.end(),cmp);
    for(int i=0; i<n; i++){
        printf("%d %d %d\n",data1[i].idx,data1[i].m,data1[i].i);
    }
}