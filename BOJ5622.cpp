#include <iostream>
using namespace std;
int main(){
    string s;
    int sum=0;
    cin >> s;
    while (!s.empty()){
        int a=(s.back()-'A')/3;
        if(s.back()=='S')a--;
        if(s.back()=='V')a--;
        if(s.back()>='Y')a--;
        s.pop_back();
        sum+=a+3;
    }
    cout << sum;
}