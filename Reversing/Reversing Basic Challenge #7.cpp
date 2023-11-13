#include <bits/stdc++.h>
using namespace std;
#define BITS 8
int leftRotate(int n, unsigned int d)
{
     
    /* In n<<d, last d bits are 0. To
     put first 3 bits of n at 
    last, do bitwise or of n<<d 
    with n >>(INT_BITS - d) */
    return (n << d)|(n >> (BITS - d));
}
int rightRotate(int n, unsigned int d)
{
    /* In n>>d, first d bits are 0. 
    To put last 3 bits of at 
    first, do bitwise or of n>>d
    with n <<(INT_BITS - d) */
    return (n >> d)|(n << (BITS - d));
}

int main(){
    unsigned char a[]={
0x52, 0xDF, 0xB3, 0x60, 0xF1, 0x8B, 0x1C, 0xB5, 0x57, 0xD1,
0x9F, 0x38, 0x4B, 0x29, 0xD9, 0x26, 0x7F, 0xC9, 0xA3, 0xE9,
0x53, 0x18, 0x4F, 0xB8, 0x6A, 0xCB, 0x87, 0x58, 0x5B, 0x39,
0x1E, 0
    };
    for(int i=0; i<0x1f; i++){
        unsigned char x = rightRotate(a[i]^i,(i&7));
        cout << x;
    }
}