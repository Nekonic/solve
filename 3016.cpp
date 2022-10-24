#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
struct x {
    char name[11];
    int a;
    int b;
    int c;
};
bool cmp(const x& a,const x& b){
    return a.a > b.a;
}
int main(){
    std::vector<x> data1;
    x s1;
    int n,i;
    scanf("%d",n);
    for(i=0; i<n; i++){
        scanf("%s %d%d%d",s1.name,&s1.a,&s1.b,&s1.c);
        data1.push_back(s1);
    }
    sort(data1.begin(), data1.end(),cmp);
    printf("%s",data1[0].name);
    return 0;
}