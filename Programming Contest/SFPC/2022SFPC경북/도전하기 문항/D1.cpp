#include <bits/stdc++.h>
using namespace std;
int w,b,n,cnt=1,k[101],t=1;
deque<int> a;
int sum(){
    int s=0;
    for(auto&i:a)s+=i;
    return s;
}
int main(){
    cin >> w >> b >> n;
    for(int i=0; i<n; i++){
        cin >> k[i];
    }a.push_back(k[0]);
    while(sum()>0){
        if(a.size()>=b)a.pop_front();
        if(t<n)a.push_back(k[t]);
        else a.push_back(0);
        cnt++; t++;
        if(sum()>w){
            a.pop_back();
            a.push_back(0);
            t--;
        }
    }cout << cnt;
}