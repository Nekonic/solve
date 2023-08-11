#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    int *pa=&a,*pb=&b;
    cin >> a >> b;
    cout << *pa << " + " << *pb << " = " << *pa+*pb;
}