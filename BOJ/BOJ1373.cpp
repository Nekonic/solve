#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n=0,i=0;
    string s1,s2;
    cin >> s1;
    while(!s1.empty()){
        n+=(s1.back()-'0')<<i;
        s1.pop_back();
        if(i==2||s1.empty()){
            i=0;
            s2.push_back(n+'0');
            n=0;
        }else i++;
    }for(int i=s2.size()-1; i>=0; i--){
        cout << s2[i];
    }
}