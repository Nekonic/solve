#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main(){
    int n;
    string s,rs;
    cin >> s;rs=s;
    reverse(rs.begin(),rs.end());
    if(!strcmp(s.c_str(),rs.c_str()))cout << 1;
    else cout << 0;
}