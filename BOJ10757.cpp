#include <iostream>
#include <string>
#include <deque>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string a,b;
    deque<char> c;
    cin >> a >> b;
    int temp=0;
    while (1){
        if(!a.empty()&&!b.empty()){
            temp+=a.back()+b.back()-('0'*2);
            a.pop_back();
            b.pop_back();
        }else if(!a.empty()){
            temp+=a.back()-'0';
            a.pop_back();
        }else if(!b.empty()){
            temp+=b.back()-'0';
            b.pop_back();
        }else if(temp!=0){
            c.push_front((temp%10)+'0');
            temp/=10;
            continue;
        }else break;
        if(temp>9){
            c.push_front((temp%10)+'0');
            temp/=10;
        }else{
            c.push_front(temp+'0');
            temp=0;
        }
    }for(auto i : c){
        cout << i;
    }
}