#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,s,x;
    cin >> n;
    bool room[n+1];
    for(int i=1; i<=n; i++){
        cin >> room[i];
    }cin >> x;
    while(x--){
        cin >> s >> m;
        if(s==1){
            for(int i=1; i<=n; i++){
                if(i%m==0)room[i]=!room[i];
            }
        }else{
            room[m]=!room[m];
            int a=1;
            while (room[m-a]==room[m+a]&&m-a!=0&&m+a!=n+1){
                room[m-a]=!room[m-a];
                room[m+a]=!room[m+a];
                a++;
            }
        }
    }for(int i=1; i<=n; i++){
        cout << room[i] << ' ';
        if(i%20==0)cout << '\n';
    }
}