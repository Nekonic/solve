#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector<int> n(9);
    int sum=0;
    bool br=false;
    for(int i=0; i<9; i++){
        scanf("%d", &n[i]);
        sum+=n[i];
    }
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            if(i==j) continue;
            else if(sum-(n[i]+n[j])==100){
                n[i]=101;
                n[j]=101;
                br=true;
                break;
            }
        }
        if(br)break;
    }
    sort(n.begin(), n.end());
    for(int i=0; i<7; i++){
        printf("%d\n", n[i]);
    }
    return 0;
}