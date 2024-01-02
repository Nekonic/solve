#include <bits/stdc++.h>
using namespace std;
char f[110000];
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n;
	cin >> n;
	while(n--){
		int a[26]={},odd=0,l=0,c=0,t=0,j;
		string s1,s2;
		cin >> s1;
		s2=s1;
		l=s2.size();
		reverse(s1.begin(),s1.end());
		for(t=0; t<l; t++){
			if(s1[t]!=s2[t])break;
		}if(t==l){
			cout << "0\n";
			continue;
		}for(int i=0; i<l; i++){
			if(i!=t)f[c++]=s2[i];
		}for(j=0; j<c; j++){
			if(f[j]!=f[c-j-1])break;
		}if(c==j){
			cout << "1\n";
			continue;
		}
		c=0;
		for(int i=0; i<l; i++){
			if(i!=l-1-t)f[c++]=s2[i];
		}for(j=0; j<c; j++){
			if(f[j]!=f[c-j-1])break;
		}if(c==j)cout << "1\n";
		else cout << "2\n";
	}
}