#include <iostream>
#include <vector>
using namespace std;
bool AZ(char s){
    if(s>='A'&&s<='Z')return false;
    return true;
}
bool az(char s){
    if(s>='a'&&s<='z')return false;
    return true;
}
int main(){
    string str;
    vector<string> number={"zero","one","two","three","four","five","six","seven","eight","nine"};
    getline(cin,str);
    for(int i=0; i<str.size(); i++){
        if(str[i]>='0'&&str[i]<='9'){
            cout << number[str[i]-'0'];
        }else if((str[i]=='i'&&str[i-1]==' '&&str[i+1]<'A')||i==0){
            if(AZ(str[i]))cout << char(str[i]-' ');
            else cout << str[i];
        }
        else if(!AZ(str[i]))cout << char(str[i]+' ');
        else cout << str[i];
    }
}