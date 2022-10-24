#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
    string str;
    cin >> str;
    sort(str.begin(), str.end(), std::greater<int>());
    cout << str;
}