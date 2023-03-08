#include <iostream>
#include <vector>
using namespace std;
struct x{
    int h,m;
};

int main(){
    int n,d,arr[12]={0,30,60,90,120,150,180,30,60,90,120,150};
    double sum=0,m=0,h=0;
    vector<x> a;
    x data1;
    scanf("%d",&d);
    for(int i=0; i<12; i++){
        m=0;
        h=arr[i];
        for(int j=0; j<60; j++){
            if((m-h)==d||(h-m)==d){
                data1.h=i;
                data1.m=j;
                a.push_back(data1);
            }m+=6;
            h+=0.5;
        }
    }printf("%d\n",a.size());
    for(int i=0; i<a.size(); i++){
        printf("%02d:%02d\n",a[i].h,a[i].m);
    }
}