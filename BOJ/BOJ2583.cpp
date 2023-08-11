#include <bits/stdc++.h>
using namespace std;
int n,m,k;
pair<int,int> p[101];
int mina(){
    cin >> n >> m >> k;
    for(int i=0; i<k; i++){
        cin >> p[i].first >> p[i].second;
    }
}