#include <bits/stdc++.h>
using namespace std;
const int MAX=4000001;
vector<bool> isP(MAX,1);
vector<int> p;
void sieve(){
    for(int i=2; i<=MAX; i++){
        if(isP[i])p.push_back(i);
        for(int prime : p){
            if(prime*i>MAX)break;
            isP[prime*i]=0;
            if(i%prime==0)break;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    int n;
    cin >> n;
    sieve();
    p.push_back(0);
    int s=0,e=1,cnt=0,sum=2;
    while(1){
        if(sum==n)cnt++;
        if(sum<=n)sum+=p[e++];
        if(sum>n)sum-=p[s++];
        if(e==p.size())break;
    }cout << cnt;
}