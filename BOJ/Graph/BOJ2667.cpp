#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int map[26][26]={};
int cnt=0,n,house=0;
void dfs(int i,int j){
    if(i<0||i>25||j<0||j>25)return;
    if(map[i][j]==0||map[i][j]==-house)return;
    map[i][j]=-house;
    cnt++;
    dfs(i-1,j);
    dfs(i+1,j);
    dfs(i,j-1);
    dfs(i,j+1);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    char velue;
    vector<int> a;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> velue;
            map[i][j]=velue-'0';
        }
    }for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(map[i][j]==1){
                house++;
                dfs(i,j);
                a.push_back(cnt);
                cnt=0;
            }
        }
    }sort(a.begin(),a.end());
    cout << house << '\n';
    for(auto i : a)cout << i << '\n';
}