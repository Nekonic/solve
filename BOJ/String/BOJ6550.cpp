#include <iostream>
#include <string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string str1,str2;
    while(cin >> str1 >> str2){
        while(!str2.empty()&&!str1.empty()){
            if(str1.back()==str2.back())str1.pop_back();
            str2.pop_back();
        }if(str1.empty())cout << "Yes\n";
        else cout << "No\n";
    }
}