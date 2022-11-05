#include <iostream>
#include <stack>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m,sum=0;
    stack<int> a;
    cin >> n;
    while (n--){
        cin >> m;
        if(m==0)a.pop();
        else a.push(m);
    }if(a.empty()){
        cout << '0';
        return 0;
    }else{
        int sum=0;
        while (!a.empty()){
            sum+=a.top();
            a.pop();
        }cout << sum;
    }
}