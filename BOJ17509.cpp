#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct x{
    int d,v;
};
bool cmp(const x&a,const x&b){
    if(a.d<b.d)return true;
    return false;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    x data1;
    vector<x> a;
    int cnt=0,p=0;
    for(int i=0; i<11; i++){
        cin >> data1.d >> data1.v;
        a.push_back(data1);
    }sort(a.begin(),a.end(),cmp);
    for(int i=0; i<11; i++){
        p+=a[i].d+cnt;
        cnt+=a[i].d;
    }for(int i =0;i<11;i++){
		p+=20*a[i].v;
	}cout << p;
}