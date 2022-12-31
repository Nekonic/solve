#include <iostream>
#include <stdio.h>
#include <set>
using namespace std;
int main()
{
    int n,m,x;
    scanf("%d%d",&n,&m);
    set<int> s1;
    set<int,greater<int>> s2;
	for(int i=0; i<n; i++){
	    scanf("%d",&x);
	    if(m==1)s1.insert(x);
        else s2.insert(x);
	}
    if(m==1){
        for (auto i : s1) {
		    printf("%d\n",i);
	    }
    }
	else {
        for (auto i : s2) {
		    printf("%d\n",i);
        }
	}
	return 0;
}