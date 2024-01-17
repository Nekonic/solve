#include <bits/stdc++.h>
using namespace std;
int main(){
    int d;
    vector<pair<int,int>> a;
    scanf("%d",&d);
    for(int i=0; i<12; i++){
        for(int j=0; j<60; j++){
            double t=abs(i*30+j*0.5-j*6);
            if(t==d||(360-t==d&&360-t!=180)){
                a.push_back({i,j});
            }
        }
    }printf("%d\n",a.size());
    for(int i=0; i<a.size(); i++){
        printf("%02d:%02d\n",a[i].first,a[i].second);
    }
}