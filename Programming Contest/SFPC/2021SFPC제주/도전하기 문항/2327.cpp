#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,m,a,b,sum=0,su,cnt=0,s[3001]={0};
    vector<int> v;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> m;
        v.push_back(m);
    }cin >> a >> b;
    for(int i=1; i<n+1; i++){
        s[i]=s[i-1]+v[i-1];
    }
    for(int i=a-1; i<b; i++){
        sum+=v[i];
    }for(int i=0; i<n; i++){
        for(int j=i+1; j<n+1; j++){
            if(s[j]-s[i]==sum)cnt++;
        }
    }cout << cnt;
}