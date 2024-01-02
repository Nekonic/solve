#include <bits/stdc++.h>
using namespace std;
const int INF=1<<30;
int n,a[16][5],mc=INF,mp,mf,ms,mv;
vector<int> ans,x;
void solve(int l,int p,int f,int s,int v,int c){
    if(p>=mp&&f>=mf&&s>=ms&&v>=mv&&c<mc){
        mc=c;
        ans=x;
        return;
    }if(l==n)return;
    x.push_back(l+1);
    solve(l+1,p+a[l][0],f+a[l][1],s+a[l][2],v+a[l][3],c+a[l][4]);
    x.pop_back();
    solve(l+1,p,f,s,v,c);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n;
    cin >> mp >> mf >> ms >> mv;
    for(int i=0; i<n; i++){
        for(int j=0; j<5; j++){
            cin >> a[i][j];
        }
    }
    solve(0,0,0,0,0,0);
    if(mc==INF){
        cout << -1;
        return 0;
    }
    cout << mc << '\n';
    for(int i:ans)cout << i << ' ';
}