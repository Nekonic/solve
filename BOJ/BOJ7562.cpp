#include <bits/stdc++.h>
using namespace std;
pair<int,int> ij[8] = {{-2,-1},{-2,1},{-1,-2},{-1,2},{1,-2},{1,2},{2,-1},{2,1}};
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n,a,b,i,j,cnt=0,board[301][301]={};
        cin>>n>>a>>b>>i>>j;
        if(a==i&&b==j){
            cout<<"0\n";
            continue;
        }
        queue<pair<int,int>> q;
        q.push({a,b});
        while(!q.empty()){
            auto x=q.front();q.pop();
            for(int l=0; l<8; l++){
                int f=ij[l].first+x.first,g=ij[l].second+x.second;
                if(f<0||f>=n||g<0||g>=n)continue;
                if(board[f][g]>0)continue;
                board[f][g]=board[x.first][x.second]+1;
                q.push({f,g});
            }
        }cout << board[i][j] << '\n';
    }
}