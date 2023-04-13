#include <iostream>
using namespace std;
int front=0,back=0,q[2000000]={};
bool empty(){
    return back-front==0?1:0;
}
void push(int x){
    q[back++]=x;
}
void pop(){
    if(!empty())front++;
}
int size(){
    return back-front;
}
int f(){
    if(empty())return -1;
    else return q[front];
}
int b(){
    if(empty())return -1;
    else return q[back-1];
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    string s;
    cin >> n;
    while(n--){
        cin >> s;
        if(s=="push"){
            cin >> m;
            push(m);
        }if(s=="pop"){
            cout << f() << '\n';
            pop();
        }
        if(s=="front")cout << f() << '\n';
        if(s=="back")cout << b() << '\n';
        if(s=="size")cout << size() << '\n';
        if(s=="empty")cout << empty() << '\n';
    }
}