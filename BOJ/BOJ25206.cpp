#include <bits/stdc++.h>
using namespace std;
int main(){
    double n,sum1=0,sum2=0;
    string s1,s2;
    vector<char> c={'A','B','C','D'};
    for(int i=0; i<20; i++){
        cin >> s1 >> n >> s2;
        if(s2=="P")continue;
        sum2+=n;
        double x=61;
        for(auto&j:c){
            if(s2[0]==j){
                if(s2[1]=='+')x-=0.5;
                n*=double(j-x);
                break;
            }x+=2;
        }if(s2[0]=='F')n=0;
        sum1+=n;
    }cout << sum1/sum2;
}