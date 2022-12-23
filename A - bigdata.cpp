#include <iostream>
#include <string>
using namespace std;
int main(){
    int n,bcnt=0,scnt=0;
    string str,b="bigdata",s="security";
    char a;
    scanf("%d",&n);
    while (scanf(" %c",&a)!=EOF){
        str.push_back(a);
        if(str==b){
            bcnt++;
            str="";
        }
        if(str==s){
            scnt++;
            str="";
        }
    }
    if(bcnt>scnt)cout << "bigdata?";
    else if(bcnt<scnt)cout << "security!";
    else cout << "bigdata? security!";
}