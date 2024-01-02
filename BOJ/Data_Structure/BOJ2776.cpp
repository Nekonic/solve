#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    int n,m,x,t;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d", &n);
        unordered_map<int, bool> map;
        for(int i=0; i<n; i++){
            scanf("%d", &x);
            map.insert({x, true});
        }
        scanf("%d", &m);
        for(int i=0; i<m; i++){
            scanf("%d",&x);
            if(map.find(x)==map.end())printf("0\n");
            else printf("1\n");
        }
    }
}