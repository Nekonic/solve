#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct medal
{
    int con,go,si,cu,rank;
};
bool cmp(const medal&a,const medal&b){
    if(a.go>b.go)return true;
    else if(a.go==b.go){
        if(a.si>b.si)return true;
        else if(a.si==b.si){
            if(a.cu>b.cu)return true;
        }
    }
    return false;
}
bool check(const medal&a,const medal&b){
    if(a.go==b.go&&a.si&&b.si&&a.cu==b.cu)return false;
    return true;
}
bool cmpna(const medal&a,const medal&b){
    if(a.con<b.con)return true;
    return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k,cnt=1;
    medal data1;
    vector<medal> a;
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin>>data1.con>>data1.go>>data1.si>>data1.cu;
        data1.rank=1;
        a.push_back(data1);
    }sort(a.begin(),a.end(),cmp);
    for(int i=1; i<n; i++){
        if(cmp(a[i-1],a[i]))cnt=i+1;
        a[i].rank=cnt;
    }sort(a.begin(),a.end(),cmpna);
    cout << a[k-1].rank;
}