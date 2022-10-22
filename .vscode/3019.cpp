#include <stdio.h>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
struct x{
    char name[100];
    int y;
    int m;
    int d;
};
bool cmp(const x& a,const x& b){
    if(a.y < b.y)return true;
    else if (a.y == b.y){
        if (a.m < b.m) return true;
        else if (a.m == b.m){
            if (a.d < b.d) return true;
            else if (a.d == b.d){
                if(strcmp(a.name, b.name)<0)return true;
            }
        }
    }
    return false;
}
int main(){
    int n;
    scanf("%d",&n);
    x s1;
    vector<x> data1;
    for(int i=0; i<n; i++){
        scanf("%s%d%d%d",&s1.name,&s1.y,&s1.m,&s1.d);
        data1.push_back(s1);
    }
    sort(data1.begin(),data1.end(),cmp);
    for(int i=0; i<n; i++){
        printf("%s\n",data1[i].name);
    }
}