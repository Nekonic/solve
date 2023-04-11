#include <bits/stdc++.h>
using namespace std;
int n,m,office[9][9],a[9][9];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
vector<pair<int,int>> cctv;
void f(int i,int j, int p){
    p%=4;
    while(1){
        i+=dx[p];
        j+=dy[p];
        if(i<0||i>=n||j<0||j>=m||a[i][j]==6) return;
        if(a[i][j]!=0) continue;
        a[i][j]=-1;
    }
}
int main(){
    int mn=0;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> office[i][j];
            if(office[i][j]==0)mn++;
            else if(office[i][j]!=6){
                cctv.push_back({i,j});
            }
        }
    }
    for(int bit=0; bit<(1<<(2*cctv.size())); bit++){
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                a[i][j]=office[i][j];
            }
        }
        int sum=0,x=bit;
        for(int i=0; i<cctv.size(); i++){
            int p=x%4;
            x/=4;
            auto k=cctv[i];
            if(office[k.first][k.second]==1)f(k.first,k.second,p);
            else if(office[k.first][k.second]==2){
                f(k.first,k.second,p);
                f(k.first,k.second,p+2);
            }else if(office[k.first][k.second]==3){
                f(k.first,k.second,p);
                f(k.first,k.second,p+1);
            }else if(office[k.first][k.second]==4){
                f(k.first,k.second,p);
                f(k.first,k.second,p+1);
                f(k.first,k.second,p+2);
            }else{
                f(k.first,k.second,p);
                f(k.first,k.second,p+1);
                f(k.first,k.second,p+2);
                f(k.first,k.second,p+3);
            }
        }for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                sum+=(a[i][j]==0);
            }
        }mn=min(mn,sum);
    }cout << mn;
}