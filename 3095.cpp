#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct point{
    int x1,x2,y;
};
bool cmp(const point&a,const point&b){
    return a.x1 < b.x1;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,cnt,max=0;
    cin >> n;
    vector<point> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i].x1 >> a[i].x2 >> a[i].y;
    }sort(a.begin(),a.end(),cmp);
    for(int i=0; i<n; i++){
        cnt=0;
        for(int j=i; j<n; j++){
            if(a[i].x2>=a[j].x1)cnt++;
        }max=max<cnt?cnt:max;
    }cout << max;
}