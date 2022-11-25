#include <iostream>
#include <string>
using namespace std;
int main(){
    string a,b,c;
    cin >> a >> b;
    int n=a.length()>b.length()?a.length():b.length(),temp;
    for(int i=0; i<n; i++){
        if(i==n-1&&)
        temp+=a[i]+b[i];
        if(temp>9){
            c.push_back(temp);
        }else temp=0;
    }
}