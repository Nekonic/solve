#include <iostream>
#include <algorithm>
using namespace std;
int map[504][504]={},sum,maxsum=0,m;
void dfs(int i,int j){
    for(int y=i; y<m+i; y++){
        for(int x=j; x<m+j; x++){
            sum+=map[y][x];
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> map[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            sum=0;
            dfs(i,j);
            maxsum=max(maxsum,sum);
        }
    }cout << maxsum;
}