#include <iostream>
#define P 100000000
using namespace std;
int memo[51][51]={};
int nCr(int i,int j){
    if(j==1||i==1)return 1;
    if(memo[i][j]!=0)return memo[i][j];
    return memo[i][j] = memo[j][i] = (nCr(i-1,j)+nCr(i,j-1))%P;
}
int main(){
    int r,c;
    cin >> r >> c;
    cout << nCr(r,c)%P;
}