#include <iostream>
using namespace std;
int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(0);
    int a,b,c,d,s, sum1=0, sum2=0, i=0, j=0;
    cin >> a >> b >> c >> d >> s;
    while (i<s)
    {
        for(int x=i; x<i+a; x++){
            if(i>=s)break;
            sum1++;i++;
        }
        for(int x=i; x<i+b; x++){
            if(i>=s)break;
            sum1--;i++;
        }
    }
    while (j<s)
    {
        sum2+=c;
        j=c>0?j+c:j-c;
        if(j>=s)break;
        sum2-=d;
        j=d>0?j+d:j-d;
    }
    cout << sum1 << "\n" << sum2 << "\n";
    sum1>sum2?cout<<"Nikky":(sum1==sum2?cout<<"Tied":cout<<"Byron");
}