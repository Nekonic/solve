#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,m,a,b,sum=0,su,cnt=0;
    vector<int> v;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> m;
        v.push_back(m);
    }cin >> a >> b;
    for(int i=a-1; i<b; i++){
        sum+=v[i];
    }for(int i=0; i<n; i++){
        su=0;
        for(int j=i; j<n; j++){
            if(su>=sum)break;
            su+=v[j];
        }if(su==sum)cnt++;
    }cout << cnt;
}