#include <iostream>
using namespace std;
int main(){
    int l,h,w,n, x;
    scanf("%d", &l);
    for(int i=0; i<l; i++){
        scanf("%d %d %d", &h, &w, &n);
        if(n%h==0){
            x=h;
            n=n/h;
        }
        else{
            x=n%h;
            n=n/h+1;
        }
        printf("%d%02d\n",x,n);
    }
}