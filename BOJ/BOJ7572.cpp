#include <iostream>
using namespace std;
int main(){
    long long n=9,y;
    char c='F';
    cin >> y;
    y-=2013;
    if(y<0){
        while (y!=0){
            y++;
            if(c=='A')c='L';
            else c--;
            if(n==0)n=9;
            else n--;
        }
    }else{
        while (y!=0)
        {
            y--;
            if(c=='L')c='A';
            else c++;
            n++;
        }
    }cout << c << n%10;
}