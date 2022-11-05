#include <stdio.h>
int main(){
    int tc;
    scanf("%d",&tc);
    while (tc--){
        int n,x[1001],l;
        double sum=1001,s=0;
        scanf("%d%d",&n,&l);
        for(int i=0; i<n; i++){
            scanf("%d",&x[i]);
        }
        for(int i=0; i<n; i++){
            s=0;
            for(int j=i; j<n; j++){
                s+=x[j];
                if(sum>s/(j-i+1)&&j-i+1>=l){
                    sum=s/(j-i+1);
                }
            }
        }
        printf("%.11f\n",sum);
    }
}