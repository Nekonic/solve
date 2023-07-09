#include <bits/stdc++.h>
using namespace std;
bool f[10][10],a[10];
int tc,n,m;
int cnt(bool taken[10]){
    int firstman=-1;
    for(int i=0; i<n; i++){
        if(!taken[i]){
            firstman=i;
            break;
        }
    }if(firstman==-1)return 1;
    int ret=0;
    for(int i=firstman+1; i<n; i++){
        if(!taken[i]&&f[firstman][i]){
            taken[firstman]=taken[i]=1;
            ret+=cnt(taken);
            taken[firstman]=taken[i]=0;
        }
    }return ret;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> tc;
    while(tc--){
        cin >> n >> m;
        int x,y;
        fill(&f[0][0],&f[10][10],false);
        fill(a,a+10,false);
        while(m--){
            cin >> x >> y;
            f[x][y]=f[y][x]=1;
        }
        cout << cnt(a) << '\n';
    }
}