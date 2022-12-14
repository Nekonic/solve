#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    cin.ignore();
    for(int i=0; i<n; i++){
        string s,rs;
        getline(cin,s);rs=s;
        reverse(rs.begin(),rs.end());
        if(!strcasecmp(s.c_str(),rs.c_str()))cout << "Yes\n";
        else cout << "No\n";
    }
}