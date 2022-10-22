#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
struct x{
    char name[11];
    int score1;
    int score2;
    int score3;
};
bool cmp1(const x& a,const x& b)return a.score1 > b.score1;
bool cmp2(const x& a,const x& b)return a.score2 > b.score2;
bool cmp3(const x& a,const x& b)return a.score3 > b.score3;
int main(){
    int n;
    scanf("%d",&n);
    vector<x> data1;
    x s1;
    for(int i=0; i<n; i++){
        scanf("%s%d%d%d",&s1.name,&s1.score1,&s1.score2,&s1.score3);
        data1.push_back(s1);
    }
    sort(data1.begin(), data1.end(), cmp1);
    int score[2]={data1[0].score2,data1[0].score3};
    printf("%s ",data1[0].name);
    sort(data1.begin(), data1.end(), cmp2);
    for(int i=0; i<n; i++){
        if(data1[i].score2==score[0]){
            printf("%d ",i+1);
            break;
        }
    }
    sort(data1.begin(), data1.end(), cmp3);
    for(int i=0; i<n; i++){
        if(data1[i].score3==score[1]){
            printf("%d ",i+1);
            break;
        }
    }
}