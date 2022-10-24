#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x,y, w,h;
    cin >> x >> y >> w >> h;
    int a[]={abs(w-x), abs(h-y), x, y}, small=a[0];
    for(int i=0; i<4; i++){
        small=min(a[i], small);
    }
    cout << small;
}