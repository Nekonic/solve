#include <bits/stdc++.h>
using namespace std;
pair<int,int> dir[]={
    {-1,0},{1,0},{0,-1},{0,1},
    {-1,-1},{1,1},{-1,1},{1,-1}
};
string s;
char c[5][5];
bool hasWord(int i,int j,int r){
    if(r==s.size())return 1;
    if(s[r]!=c[i][j])return 0;
    for(pair<int,int> xy:dir){
        int x,y;
        tie(x,y)=xy;
        x+=i;y+=j;
        if(x<0||x>4||y<0||y>4)continue;
        if(hasWord(x,y,r+1))return 1;
    }return 0;
}
int main(){
    cin >> s;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> c[i][j];
        }
    }for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(hasWord(i,j,0)){
                cout << 1;
                return 0;
            }
        }
    }cout << 0;
}