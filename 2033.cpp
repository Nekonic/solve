#include <iostream>
using namespace std;
int k,n,p1,p2,s;
short a[101][100001]={};
int amidakuji(int s,int i){
    if(a[s][i]!=0)return amidakuji(a[s][i],i+1);
    if(i==n)return s;
    return amidakuji(s,i+1);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> k >> n;
    for(int i=0; i<n; i++){
        cin >> p1 >> p2;
        a[p1][i]=p2;
        a[p2][i]=p1;
    }cin >> s;
    cout << amidakuji(s,0);
}