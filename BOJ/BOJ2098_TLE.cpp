#include <bits/stdc++.h>
using namespace std;
const int INF=1<<30;
int n,a[16][16];
int tsp(int s){
    vector<int> v;
    for(int i=0; i<n; i++){
        if(i!=s)v.push_back(i);
    }int pathw=INF;
    do{
        int w=0,k=s;
        for (int i = 0; i < v.size(); i++) {
            w+=a[k][v[i]];
            k=v[i];
        }w+=a[k][s];
        pathw=min(pathw,w);
    }while(next_permutation(v.begin(), v.end()));
    return pathw;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }cout << tsp(0);
}