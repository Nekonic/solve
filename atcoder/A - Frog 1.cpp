#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;
int main(){
    int N;
    scanf("%d",&N);
    vector<long long> h(N), dp(N,0);
    for(int i=0; i<N; i++){
        scanf("%d",&h[i]);
    }
    for(int i=1; i<N; i++){
        if(i==1)dp[i]=abs(h[i]-h[i-1]);
        else{
            dp[i]=min(dp[i-1]+abs(h[i]-h[i-1]),
                      dp[i-2]+abs(h[i]-h[i-2]));
        }
    }
    printf("%d",dp[N-1]);
}