#include <iostream>
#include <vector>
using namespace std;
struct x{
    int x,y,index,rank;
};
int main(){
    int n,cnt=0;
    x data1;
    vector<x> a;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> data1.x >> data1.y;
        data1.index=i;data1.rank=0;
        a.push_back(data1);
    }for(int i=0; i<n; i++){
        cnt=1;
        for(int j=0; j<n; j++){
            if(a[j].x>a[i].x&&a[j].y>a[i].y)cnt++;
        }cout << cnt << ' ';
    }
}