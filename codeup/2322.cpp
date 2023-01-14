#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
set<string> ans;
void search(string s){
    if(s=="AA"||s=="AO")ans.insert("A");
    else if(s=="BB"||s=="BO")ans.insert("B");
    else if(s=="AB")ans.insert("AB");
    else ans.insert("O");
    return;
}
int main(){
    string a,b;
    cin >> a >> b;
    for(int i=0; i<2; i++){
        string str="XX";
        for(int j=0; j<2; j++){
            str[0]=a[i];
            str[1]=b[j];
            sort(str.begin(),str.end());
            search(str);
        }
    }
    for(auto i : ans)cout << i << ' ';
}