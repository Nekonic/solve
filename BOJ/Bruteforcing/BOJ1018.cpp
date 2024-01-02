#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin >> n >> m;
    int BWmin=n*m;
    char a[51][51];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<n-7; i++){
        for(int j=0; j<m-7; j++){
            int B=0,W=0;
            for(int y=i; y<i+8; y++){
                for(int x=j; x<j+8; x++){
                    if((x+y)%2==0){
                        if(a[y][x]=='B'){
                            W++;
                        }else B++;
                    }
                    else {
                        if(a[y][x]=='B'){
                            B++;
                        }else W++;
                    }
                }
            }
            BWmin=min(BWmin, B);
            BWmin=min(BWmin, W);
        }
    }
    cout << BWmin;
}