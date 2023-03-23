#include <iostream>
using namespace std;
long long n,m,k,map[17][17]={},nk=1,mk=0,t=0,d=0;
void dp(int i,int j){
    if(i-1>=0&&j-1>=0)map[i][j]=map[i-1][j]+map[i][j-1];
    else if(i-1>=0)map[i][j]=map[i-1][j];
    else map[i][j]=map[i][j-1];
    return;
}
int main(){
    cin >> n >> m >> k;
    if(k==0)nk=n,mk=m;
    else{
        while (k!=0){
            t++;k--;d++;
            if(t==m){
                t=0;
                nk++;
            }
        }if(t==0){
            mk=m;
            nk--;
        }else mk=t;
    }
    for(int i=0; i<nk; i++)map[i][0]=1;
    for(int i=0; i<mk; i++)map[0][i]=1;
    for(int i=1; i<nk; i++){
        for(int j=1; j<mk; j++){
            dp(i,j);
        }
    }
    for(int i=nk-1; i<n; i++){
        for(int j=mk-1; j<m; j++){
            dp(i,j);
        }
    }
    cout << map[n-1][m-1];
}