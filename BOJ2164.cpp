#include <iostream>
#include <queue>
using namespace std;
int main(){
    int n;
    cin >> n;
    queue<int> a;
    for(int i=1; i<=n; i++){
        a.push(i);
    }
    for(int i=1; i<n; i++){
        a.pop();
        a.push(a.front());
        a.pop();
    }
    cout << a.back();
}