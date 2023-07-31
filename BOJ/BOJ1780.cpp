#include <bits/stdc++.h>
using namespace std;
int n,a[2188][2188],cnt[3];
pair<int,int> dir[]={
    {0,0},{0,1},{0,2},
    {1,0},{1,1},{1,2},
    {2,0},{2,1},{2,2}
};
void f(int x,int y,int d){
    int tcnt[3]={};
    bool flag=1;
    for(int i=x; i<x+d; i++){
        for(int j=y; j<y+d; j++){
            if(a[i][j]==-1)tcnt[0]++;
            else if(!a[i][j])tcnt[1]++;
            else tcnt[2]++;
        }
    }for(int i=0; i<3; i++)if(tcnt[i]==d*d)cnt[i]++,flag=0;
    if(!flag||d==1)return;
    d/=3;
    for(auto xy:dir){
        f(x+xy.first*d,y+xy.second*d,d);
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)cin >> a[i][j];
    }f(0,0,n);
    for(int i=0; i<3; i++)cout << cnt[i] << '\n';
}
