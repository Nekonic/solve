#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
bool cmp(const string a, const string b){
    if(a.length()<b.length())return true;
    else if(a.length()==b.length()){
        if(a<b)return true;
    }
    return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<string> str(n);
    for(int i=0; i<n; i++){
        cin >> str[i];
    }
    sort(str.begin(), str.end(), cmp);
    string x;
    for(int i=0; i<n; i++){
        if(str[i]!=x){
            cout << str[i] << "\n";
            x=str[i];
        }
    }
}