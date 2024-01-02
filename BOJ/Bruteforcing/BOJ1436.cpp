#include <iostream>
using namespace std;
int main(){
    int n,movie=0,cnt=0,x;
    cin >> n;
    while(n!=cnt){
        movie++;
        x=movie;
        while(x){
            if(x%1000==666){
                cnt++;
                break;
            }else x/=10;
        }
    }cout << movie;
}