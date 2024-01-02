#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct x{
    double t;
    string name;
};
bool cmp(const x&a, const x&b){
    if(a.t>b.t)return true;
    return false;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    x data1;
    int n,i;
    cin >> n;
    while(n){
        i=0;
        vector<x> a;
        while(n--){
            cin >> data1.name >> data1.t;
            a.push_back(data1);
        }sort(a.begin(),a.end(),cmp);
        while (a[0].t==a[i].t){
            cout << a[i].name << ' ';i++;
        }cout << '\n';
        cin >> n;
    }
}