#include <iostream>
using namespace std;
int main(){
    int n,m,a[500][500],b,mint=640000000,maxh;
    cin >> n >> m >> b;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }for(int h=0; h<=256; h++){
        int push=0,pop=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int height=a[i][j]-h;
                if(height>0)pop+=height;
                else if (height<0)push-=height;
            }
        }if(pop+b>=push){
            int time=pop*2+push;
            if(mint>=time){
                mint=time;
                maxh=h;
            }
        }
    }cout << mint << ' ' << maxh;
}