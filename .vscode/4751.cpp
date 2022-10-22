#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
struct x{
    int co1;
    int num1;
    int score1;
};
bool cmp(const x& a,const x& b){
    return a.score1 > b.score1;
}
int main(){
    int n;
    scanf("%d",&n);
    vector<x> data1;
    x s1;
    for(int i=0; i<n; i++){
        scanf("%d%d%d",&s1.co1,&s1.num1,&s1.score1);
        data1.push_back(s1);
    }
    sort(data1.begin(), data1.end(), cmp);
    int i=2, cnt=0, x=0;
    if(data1[0].co1==data1[1].co1)x=data1[1].co1;
    printf("%d %d\n",data1[0].co1,data1[0].num1);
    printf("%d %d\n",data1[1].co1,data1[1].num1);
    while(true){
        if(x!=data1[i].co1){
            printf("%d %d\n",data1[i].co1,data1[i].num1);
            break;
        }
        i++;
    }
}