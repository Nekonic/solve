#include <iostream>
#include <cstring>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int m=n,x=0;
    while (m)
    {
        m%=10;
        x++;
    }
    bool find=false;
    char s[10];
    int sub = n - x * 9, sum=0;
    for(int i=sub; i<=x; ++i){
        sprintf(s, "%ld", i);
        sum = i;
		for(int j=0; j<strlen(s); ++j)
			sum += s[j]-'0';
        if(sum == n )
		{
			find=true;
			cout << i << "\n";
			break;
		}
    }
    if(find==false)	cout << "0\n";
}