#include <iostream>
using namespace std;
int main(){
    string a,b;
    cin >> a >> b;
    if(a=="AB"||b=="AB"){
        if((a=="AO"||b=="AO")||(a=="BO"||b=="BO")||(a==b))cout<<"A AB B";
        else if(a=="AA"||b=="AA")cout<<"A AB";
        else if(a=="BB"||b=="BB")cout<<"AB B";
        else cout<<"A B";
    }else if(a[0]=='A'&&b[0]=='A'){
        if(a[1]=='O'&&b[1]=='O')cout<<"A O";
        else cout<<"A";
    }else if(a[0]=='B'&&b[0]=='B'){
        if(a[1]=='O'&&b[1]=='O')cout<<"B O";
        else cout<<"B";
    }else if(a=="OO"||b=="OO"){
        if(a=="AB"||b=="AB")cout<<"AB O";
        else if(a[1]=='A'||b[1]=='A')cout<<"A";
        else if(a=="AO"||b=="AO")cout<<"A O";
        else if(a[1]=='B'||b[1]=='B')cout<<"B";
        else if(a=="BO"||b=="BO")cout<<"B O";
        else cout<<"O";
    }
    else if(a[0]=='A'||b[0]=='A'&&a[0]=='B'||b[0]=='B'){
        if(a[1]=='O'||b[1]=='O'){
            if(a[1]==b[1])cout<<"A AB B O";
            else if((a[1]=='O'||b[1]=='O')&&(a[1]=='A'||b[1]=='A'))cout<<"A AB";
            else cout<<"AB B";
        }else cout<<"AB";
    }
}